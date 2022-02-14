
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int len; scalar_t__* subs; } ;
struct snmp_value {int syntax; TYPE_1__ var; } ;
struct snmp_pdu {scalar_t__ version; int error_status; } ;
struct snmp_node {scalar_t__ type; int (* op ) (int *,struct snmp_value*,int ,int ,int ) ;TYPE_1__ oid; int index; int syntax; } ;
struct context {int ctx; } ;
typedef enum snmp_ret { ____Placeholder_snmp_ret } snmp_ret ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 struct snmp_node* FUNC_2 (struct snmp_value const*,int*) ;
 int FUNC_3 (char*,int ,...) ;
 int FUNC_4 (int *,struct snmp_value*,int ,int ,int ) ;
 int FUNC_5 (int *,struct snmp_value*,int ,int ,int ) ;
 struct snmp_node const* VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static enum snmp_ret
FUNC_6(struct context *VAR_13, const struct snmp_value *VAR_14,
    struct snmp_value *VAR_15, struct snmp_pdu *VAR_16)
{
 const struct snmp_node *VAR_17;
 int VAR_18, VAR_19;

 if ((VAR_17 = FUNC_2(VAR_14, &VAR_19)) == ((void*)0))
  goto eofMib;



 if (VAR_17->type == VAR_4 || VAR_19)
  VAR_15->var = VAR_17->oid;
 else
  VAR_15->var = VAR_14->var;

 for (;;) {
  VAR_15->syntax = VAR_17->syntax;
  if (VAR_17->type == VAR_4) {

   VAR_15->var.subs[VAR_15->var.len++] = 0;
   VAR_18 = (*VAR_17->op)(&VAR_13->ctx, VAR_15, VAR_17->oid.len,
       VAR_17->index, VAR_5);
  } else {

   VAR_18 = (*VAR_17->op)(&VAR_13->ctx, VAR_15, VAR_17->oid.len,
        VAR_17->index, VAR_6);
  }
  if (VAR_18 != VAR_3) {

   if (VAR_18 != VAR_2 && FUNC_0(VAR_0))
    FUNC_3("getnext: %s returns %u",
        FUNC_1(&VAR_15->var), VAR_18);
   break;
  }


  if (++VAR_17 == VAR_11 + VAR_12)
   break;

  if (FUNC_0(VAR_0))
   FUNC_3("getnext: no data - avancing to %s",
       FUNC_1(&VAR_17->oid));

  VAR_15->var = VAR_17->oid;
 }

 if (VAR_18 == VAR_3) {
  eofMib:
  VAR_15->var = VAR_14->var;
  if (VAR_16->version == VAR_10) {
   VAR_16->error_status = VAR_3;
   return (VAR_7);
  }
  VAR_15->syntax = VAR_9;

 } else if (VAR_18 != VAR_2) {
  VAR_16->error_status = VAR_1;
  return (VAR_7);
 }
 return (VAR_8);
}
