
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u_int ;
struct snmp_value {scalar_t__ syntax; int var; } ;
struct snmp_pdu {size_t nbindings; scalar_t__ version; size_t error_index; int error_status; struct snmp_value* bindings; } ;
struct TYPE_7__ {int len; } ;
struct snmp_node {scalar_t__ type; int flags; scalar_t__ syntax; int (* op ) (TYPE_2__*,struct snmp_value*,int ,int ,int ) ;int index; TYPE_1__ oid; int name; } ;
struct TYPE_8__ {int code; size_t var_index; int * scratch; void* data; } ;
struct context {TYPE_2__ ctx; int * scratch; struct snmp_node** node; int dlist; } ;
struct asn_buf {int dummy; } ;
typedef enum snmp_syntax { ____Placeholder_snmp_syntax } snmp_syntax ;
typedef enum snmp_ret { ____Placeholder_snmp_ret } snmp_ret ;
typedef enum asn_err { ____Placeholder_asn_err } asn_err ;
typedef int context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

 void* VAR_4 ;

 void* VAR_5 ;


 int VAR_6 ;
 void* VAR_7 ;




 int VAR_8 ;





 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 struct snmp_node* FUNC_3 (struct snmp_value*,int*) ;
 struct snmp_node* FUNC_4 (struct snmp_value*) ;
 int FUNC_5 (struct context*,int ,int) ;
 int VAR_18 ;
 int FUNC_6 (struct context*,struct snmp_pdu*,size_t) ;
 int FUNC_7 (struct asn_buf*,struct snmp_value*) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (char*,...) ;
 scalar_t__ FUNC_13 (struct asn_buf*,struct snmp_pdu*) ;
 int FUNC_14 (struct snmp_pdu*,struct snmp_pdu*) ;
 scalar_t__ FUNC_15 (struct asn_buf*,struct snmp_pdu*) ;
 int FUNC_16 (struct snmp_pdu*) ;
 scalar_t__ FUNC_17 (struct snmp_value*,struct snmp_value*) ;
 int FUNC_18 (TYPE_2__*,struct snmp_value*,int ,int ,int ) ;
 int FUNC_19 (TYPE_2__*,struct snmp_value*,int ,int ,int ) ;

enum snmp_ret
FUNC_20(struct snmp_pdu *VAR_19, struct asn_buf *VAR_20,
    struct snmp_pdu *VAR_21, void *VAR_22)
{
 int VAR_23;
 u_int VAR_24;
 enum asn_err VAR_25;
 struct context VAR_26;
 const struct snmp_node *VAR_27;
 struct snmp_value *VAR_28;
 enum snmp_syntax VAR_29;

 FUNC_5(&VAR_26, 0, sizeof(VAR_26));
 FUNC_0(&VAR_26.dlist);
 VAR_26.ctx.data = VAR_22;

 FUNC_14(VAR_19, VAR_21);

 if (FUNC_15(VAR_20, VAR_21))
  return (VAR_14);





 for (VAR_24 = 0; VAR_24 < VAR_19->nbindings; VAR_24++) {
  VAR_28 = &VAR_19->bindings[VAR_24];

  if ((VAR_27 = VAR_26.node[VAR_24] = FUNC_3(VAR_28, &VAR_29)) == ((void*)0)) {

   if (FUNC_1(VAR_2))
    FUNC_8("set: node not found %s",
        FUNC_2(&VAR_28->var, VAR_18));
   if (VAR_19->version == VAR_17) {
    VAR_19->error_index = VAR_24 + 1;
    VAR_19->error_status = VAR_7;
   } else if ((VAR_27 = FUNC_4(VAR_28)) != ((void*)0)) {

    VAR_19->error_index = VAR_24 + 1;
    VAR_19->error_status = 136;
   } else if (VAR_29 == VAR_16) {
    VAR_19->error_index = VAR_24 + 1;
    VAR_19->error_status = 135;
   } else {
    VAR_19->error_index = VAR_24 + 1;
    VAR_19->error_status = 134;
   }
   FUNC_16(VAR_21);
   return (VAR_13);
  }







  if (VAR_27->type == VAR_10 &&
      !(VAR_27->flags & VAR_9)) {
   if (VAR_19->version == VAR_17) {
    VAR_19->error_index = VAR_24 + 1;
    VAR_19->error_status = VAR_7;
   } else {
    VAR_19->error_index = VAR_24 + 1;
    VAR_19->error_status = 136;
   }
   FUNC_16(VAR_21);
   return (VAR_13);
  }



  if (VAR_27->syntax != VAR_28->syntax) {
   if (VAR_19->version == VAR_17) {
    VAR_19->error_index = VAR_24 + 1;
    VAR_19->error_status = VAR_4;
   } else {
    VAR_19->error_index = VAR_24 + 1;
    VAR_19->error_status = 129;
   }
   FUNC_16(VAR_21);
   return (VAR_13);
  }



  if (FUNC_17(&VAR_21->bindings[VAR_24], VAR_28)) {
   VAR_19->error_index = VAR_24 + 1;
   VAR_19->error_status = VAR_5;
   FUNC_16(VAR_21);
   return (VAR_13);
  }
  VAR_25 = FUNC_7(VAR_20, &VAR_21->bindings[VAR_24]);
  if (VAR_25 == VAR_0) {
   VAR_19->error_index = VAR_24 + 1;
   VAR_19->error_status = VAR_8;
   FUNC_16(VAR_21);
   return (VAR_13);
  } else if (VAR_25 != VAR_1) {
   VAR_19->error_index = VAR_24 + 1;
   VAR_19->error_status = VAR_5;
   FUNC_16(VAR_21);
   return (VAR_13);
  }
  VAR_21->nbindings++;
 }

 VAR_26.ctx.code = VAR_15;





 for (VAR_24 = 0; VAR_24 < VAR_19->nbindings; VAR_24++) {
  VAR_28 = &VAR_19->bindings[VAR_24];
  VAR_27 = VAR_26.node[VAR_24];

  VAR_26.ctx.var_index = VAR_24 + 1;
  VAR_26.ctx.scratch = &VAR_26.scratch[VAR_24];

  VAR_23 = (*VAR_27->op)(&VAR_26.ctx, VAR_28, VAR_27->oid.len, VAR_27->index,
      VAR_12);

  if (FUNC_1(VAR_2))
   FUNC_8("set: action %s returns %d", VAR_27->name, VAR_23);

  if (VAR_19->version == VAR_17) {
   switch (VAR_23) {
     case 135:
    VAR_23 = VAR_7;
    break;
     case 129:

    VAR_23 = VAR_4;
    break;
     case 130:
    VAR_23 = VAR_4;
    break;
     case 131:

    VAR_23 = VAR_4;
    break;
     case 128:
    VAR_23 = VAR_4;
    break;
     case 134:
    VAR_23 = VAR_7;
    break;
     case 137:
    VAR_23 = VAR_4;
    break;
     case 133:
    VAR_23 = VAR_5;
    break;
     case 139:
    VAR_23 = VAR_5;
    break;
     case 132:
    VAR_23 = VAR_5;
    break;
     case 140:

    VAR_23 = VAR_5;
    break;
     case 136:
    VAR_23 = VAR_7;
    break;
     case 138:
    VAR_23 = VAR_4;
    break;
   }
  }
  if (VAR_23 != VAR_6) {
   VAR_19->error_index = VAR_24 + 1;
   VAR_19->error_status = VAR_23;

   FUNC_6(&VAR_26, VAR_19, VAR_24);
   FUNC_16(VAR_21);

   VAR_26.ctx.code = VAR_13;

   goto errout;
  }
 }




 if (FUNC_1(VAR_2))
  FUNC_8("set: set operations ok");

 if ((VAR_23 = FUNC_9(&VAR_26.ctx)) != VAR_6) {
  VAR_19->error_status = VAR_23;
  VAR_19->error_index = VAR_26.ctx.var_index;

  if ((VAR_23 = FUNC_11(&VAR_26.ctx)) != VAR_6) {
   if (VAR_19->version != VAR_17) {
    VAR_19->error_status = 132;
    VAR_19->error_index = 0;
   }
  }
  FUNC_6(&VAR_26, VAR_19, VAR_24);
  FUNC_16(VAR_21);

  VAR_26.ctx.code = VAR_13;

  goto errout;
 }






 if (FUNC_1(VAR_2))
  FUNC_8("set: commiting");

 for (VAR_24 = 0; VAR_24 < VAR_19->nbindings; VAR_24++) {
  VAR_28 = &VAR_21->bindings[VAR_24];
  VAR_27 = VAR_26.node[VAR_24];

  VAR_26.ctx.var_index = VAR_24 + 1;
  VAR_26.ctx.scratch = &VAR_26.scratch[VAR_24];

  VAR_23 = (*VAR_27->op)(&VAR_26.ctx, VAR_28, VAR_27->oid.len, VAR_27->index,
      VAR_11);

  if (VAR_23 != VAR_6)
   FUNC_12("set: commit failed (%d) on"
       " variable %s index %u", VAR_23,
       FUNC_2(&VAR_28->var, VAR_18), VAR_24);
 }

 if (FUNC_13(VAR_20, VAR_21) != VAR_3) {
  FUNC_12("set: fix_encoding failed");
  FUNC_16(VAR_21);
  VAR_26.ctx.code = VAR_14;
 }




  errout:
 FUNC_10(&VAR_26.ctx);

 if (FUNC_1(VAR_2))
  FUNC_8("set: returning %d", VAR_26.ctx.code);

 return (VAR_26.ctx.code);
}
