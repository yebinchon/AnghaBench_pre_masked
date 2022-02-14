
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tabwork {scalar_t__ last_change; scalar_t__ iter; TYPE_2__* descr; scalar_t__ first; } ;
struct TYPE_10__ {int len; scalar_t__* subs; } ;
struct TYPE_8__ {scalar_t__ uint32; } ;
typedef struct snmp_value {scalar_t__ syntax; TYPE_3__ var; TYPE_1__ v; } const snmp_value ;
struct snmp_pdu {scalar_t__ error_status; int error_index; int nbindings; struct snmp_value const* bindings; } ;
struct entry {int dummy; } ;
struct TYPE_12__ {int len; } ;
struct TYPE_11__ {scalar_t__ version; } ;
struct TYPE_9__ {scalar_t__ max_iter; TYPE_6__ table; TYPE_6__ last_change; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_6__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_4__*,char*,...) ;
 TYPE_4__ VAR_5 ;
 struct entry* FUNC_2 (struct tabwork*,TYPE_3__*) ;
 int FUNC_3 (struct tabwork*,int) ;
 scalar_t__ FUNC_4 (TYPE_2__*,struct entry*,struct snmp_value const*) ;

__attribute__((used)) static int
FUNC_5(struct tabwork *VAR_6, const struct snmp_pdu *VAR_7)
{
 const struct snmp_value *VAR_8;
 struct entry *VAR_9;

 if (VAR_7->error_status != VAR_0) {
  if (VAR_5.version == VAR_4 &&
      VAR_7->error_status == VAR_1 &&
      VAR_7->error_index ==
      (VAR_6->descr->last_change.len == 0) ? 1 : 2)

   return (0);

  FUNC_1(&VAR_5, "error fetching table: status=%d index=%d",
      VAR_7->error_status, VAR_7->error_index);
  return (-1);
 }

 for (VAR_8 = VAR_7->bindings; VAR_8 < VAR_7->bindings + VAR_7->nbindings; VAR_8++) {
  if (VAR_6->descr->last_change.len != 0 && VAR_8 == VAR_7->bindings) {
   if (!FUNC_0(&VAR_6->descr->last_change, &VAR_8->var) ||
       VAR_8->var.len != VAR_6->descr->last_change.len + 1 ||
       VAR_8->var.subs[VAR_6->descr->last_change.len] != 0) {
    FUNC_1(&VAR_5,
        "last_change: bad response");
    return (-1);
   }
   if (VAR_8->syntax != VAR_3) {
    FUNC_1(&VAR_5,
        "last_change: bad syntax %u", VAR_8->syntax);
    return (-1);
   }
   if (VAR_6->first) {
    VAR_6->last_change = VAR_8->v.uint32;
    VAR_6->first = 0;

   } else if (VAR_6->last_change != VAR_8->v.uint32) {
    if (++VAR_6->iter >= VAR_6->descr->max_iter) {
     FUNC_1(&VAR_5,
         "max iteration count exceeded");
     return (-1);
    }
    FUNC_3(VAR_6, 1);
    return (-2);
   }

   continue;
  }
  if (!FUNC_0(&VAR_6->descr->table, &VAR_8->var) ||
      VAR_8->syntax == VAR_2)
   return (0);

  if ((VAR_9 = FUNC_2(VAR_6, &VAR_8->var)) == ((void*)0))
   return (-1);
  if (FUNC_4(VAR_6->descr, VAR_9, VAR_8))
   return (-1);
 }
 return (+1);
}
