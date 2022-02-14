
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct snmp_value {int var; } ;
struct snmp_pdu {scalar_t__ version; scalar_t__ error_index; int error_status; struct snmp_value* bindings; } ;
struct TYPE_3__ {int len; } ;
struct snmp_node {int (* op ) (TYPE_2__*,struct snmp_value*,int ,int ,int ) ;int index; TYPE_1__ oid; } ;
struct TYPE_4__ {int * scratch; } ;
struct context {TYPE_2__ ctx; int * scratch; struct snmp_node** node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int,int ,size_t) ;
 int FUNC_2 (TYPE_2__*,struct snmp_value*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct context *VAR_4, struct snmp_pdu *VAR_5, u_int VAR_6)
{
 struct snmp_value *VAR_7;
 const struct snmp_node *VAR_8;
 int VAR_9;

 while (VAR_6-- > 0) {
  VAR_7 = &VAR_5->bindings[VAR_6];
  VAR_8 = VAR_4->node[VAR_6];

  VAR_4->ctx.scratch = &VAR_4->scratch[VAR_6];

  VAR_9 = (*VAR_8->op)(&VAR_4->ctx, VAR_7, VAR_8->oid.len, VAR_8->index,
      VAR_2);

  if (VAR_9 != VAR_0) {
   FUNC_1("set: rollback failed (%d) on variable %s "
       "index %u", VAR_9, FUNC_0(&VAR_7->var), VAR_6);
   if (VAR_5->version != VAR_3) {
    VAR_5->error_status = VAR_1;
    VAR_5->error_index = 0;
   }
  }
 }
}
