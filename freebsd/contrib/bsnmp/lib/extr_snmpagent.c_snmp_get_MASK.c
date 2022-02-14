
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u_int ;
struct snmp_pdu {size_t nbindings; scalar_t__ version; int error_status; size_t error_index; TYPE_3__* bindings; } ;
struct TYPE_6__ {int len; } ;
struct snmp_node {int syntax; int (* op ) (TYPE_2__*,TYPE_3__*,int ,int ,int ) ;int index; TYPE_1__ oid; } ;
struct TYPE_7__ {void* data; } ;
struct context {TYPE_2__ ctx; } ;
struct asn_buf {int dummy; } ;
typedef enum snmp_syntax { ____Placeholder_snmp_syntax } snmp_syntax ;
typedef enum snmp_ret { ____Placeholder_snmp_ret } snmp_ret ;
typedef enum asn_err { ____Placeholder_asn_err } asn_err ;
typedef int context ;
struct TYPE_8__ {int syntax; int var; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_0 (int ) ;
 struct snmp_node* FUNC_1 (TYPE_3__*,int*) ;
 int FUNC_2 (struct context*,int ,int) ;
 int FUNC_3 (struct asn_buf*,TYPE_3__*) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (struct asn_buf*,struct snmp_pdu*) ;
 int FUNC_6 (struct snmp_pdu*,struct snmp_pdu*) ;
 scalar_t__ FUNC_7 (struct asn_buf*,struct snmp_pdu*) ;
 int FUNC_8 (struct snmp_pdu*) ;
 int FUNC_9 (TYPE_2__*,TYPE_3__*,int ,int ,int ) ;

enum snmp_ret
FUNC_10(struct snmp_pdu *VAR_14, struct asn_buf *VAR_15,
    struct snmp_pdu *VAR_16, void *VAR_17)
{
 int VAR_18;
 u_int VAR_19;
 struct snmp_node *VAR_20;
 enum snmp_syntax VAR_21;
 struct context VAR_22;
 enum asn_err VAR_23;

 FUNC_2(&VAR_22, 0, sizeof(VAR_22));
 VAR_22.ctx.data = VAR_17;

 FUNC_6(VAR_14, VAR_16);

 if (FUNC_7(VAR_15, VAR_16) != VAR_3)

  return (VAR_10);

 for (VAR_19 = 0; VAR_19 < VAR_14->nbindings; VAR_19++) {
  VAR_16->bindings[VAR_19].var = VAR_14->bindings[VAR_19].var;
  if ((VAR_20 = FUNC_1(&VAR_14->bindings[VAR_19], &VAR_21)) == ((void*)0)) {
   if (VAR_14->version == VAR_13) {
    if (FUNC_0(VAR_2))
     FUNC_4("get: nosuchname");
    VAR_14->error_status = VAR_6;
    VAR_14->error_index = VAR_19 + 1;
    FUNC_8(VAR_16);
    return (VAR_9);
   }
   if (FUNC_0(VAR_2))
    FUNC_4("get: exception %u", VAR_21);
   VAR_16->bindings[VAR_19].syntax = VAR_21;

  } else {

   VAR_16->bindings[VAR_19].syntax = VAR_20->syntax;
   VAR_18 = (*VAR_20->op)(&VAR_22.ctx, &VAR_16->bindings[VAR_19],
       VAR_20->oid.len, VAR_20->index, VAR_8);
   if (FUNC_0(VAR_2))
    FUNC_4("get: action returns %d", VAR_18);

   if (VAR_18 == VAR_6) {
    if (VAR_14->version == VAR_13) {
     VAR_14->error_status = VAR_6;
     VAR_14->error_index = VAR_19 + 1;
     FUNC_8(VAR_16);
     return (VAR_9);
    }
    if (FUNC_0(VAR_2))
     FUNC_4("get: exception noSuchInstance");
    VAR_16->bindings[VAR_19].syntax = VAR_12;

   } else if (VAR_18 != VAR_5) {
    VAR_14->error_status = VAR_4;
    VAR_14->error_index = VAR_19 + 1;
    FUNC_8(VAR_16);
    return (VAR_9);
   }
  }
  VAR_16->nbindings++;

  VAR_23 = FUNC_3(VAR_15, &VAR_16->bindings[VAR_19]);

  if (VAR_23 == VAR_0) {
   VAR_14->error_status = VAR_7;
   VAR_14->error_index = 0;
   FUNC_8(VAR_16);
   return (VAR_9);
  }
  if (VAR_23 != VAR_1) {
   if (FUNC_0(VAR_2))
    FUNC_4("get: binding encoding: %u", VAR_23);
   VAR_14->error_status = VAR_4;
   VAR_14->error_index = VAR_19 + 1;
   FUNC_8(VAR_16);
   return (VAR_9);
  }
 }

 if (FUNC_5(VAR_15, VAR_16) != VAR_3) {
  FUNC_4("get: failed to encode PDU");
  return (VAR_9);
 }

 return (VAR_11);
}
