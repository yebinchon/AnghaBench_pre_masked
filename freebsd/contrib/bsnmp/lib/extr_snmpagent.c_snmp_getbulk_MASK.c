
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u_int ;
struct snmp_pdu {size_t error_status; size_t nbindings; size_t error_index; TYPE_2__* bindings; } ;
struct TYPE_5__ {void* data; } ;
struct context {TYPE_1__ ctx; } ;
struct asn_buf {int dummy; } ;
typedef enum snmp_ret { ____Placeholder_snmp_ret } snmp_ret ;
typedef enum asn_err { ____Placeholder_asn_err } asn_err ;
typedef int context ;
struct TYPE_6__ {scalar_t__ syntax; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 void* VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct context*,TYPE_2__*,TYPE_2__*,struct snmp_pdu*) ;
 int FUNC_2 (struct context*,int ,int) ;
 int FUNC_3 (struct asn_buf*,TYPE_2__*) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (struct asn_buf*,struct snmp_pdu*) ;
 int FUNC_6 (struct snmp_pdu*,struct snmp_pdu*) ;
 scalar_t__ FUNC_7 (struct asn_buf*,struct snmp_pdu*) ;
 int FUNC_8 (struct snmp_pdu*) ;

enum snmp_ret
FUNC_9(struct snmp_pdu *VAR_10, struct asn_buf *VAR_11,
    struct snmp_pdu *VAR_12, void *VAR_13)
{
 struct context VAR_14;
 u_int VAR_15;
 int VAR_16;
 u_int VAR_17;
 int VAR_18;
 enum snmp_ret VAR_19;
 enum asn_err VAR_20;

 FUNC_2(&VAR_14, 0, sizeof(VAR_14));
 VAR_14.ctx.data = VAR_13;

 FUNC_6(VAR_10, VAR_12);

 if (FUNC_7(VAR_11, VAR_12) != VAR_3)

  return (VAR_7);

 if ((VAR_17 = VAR_10->error_status) > VAR_10->nbindings)
  VAR_17 = VAR_10->nbindings;


 for (VAR_15 = 0; VAR_15 < VAR_17; VAR_15++) {
  VAR_19 = FUNC_1(&VAR_14, &VAR_10->bindings[VAR_15],
      &VAR_12->bindings[VAR_12->nbindings], VAR_10);

  if (VAR_19 != VAR_8) {
   VAR_10->error_index = VAR_15 + 1;
   FUNC_8(VAR_12);
   return (VAR_19);
  }

  VAR_20 = FUNC_3(VAR_11,
      &VAR_12->bindings[VAR_12->nbindings++]);

  if (VAR_20 == VAR_0)
   goto done;

  if (VAR_20 != VAR_1) {
   if (FUNC_0(VAR_2))
    FUNC_4("getnext: binding encoding: %u", VAR_20);
   VAR_10->error_status = VAR_4;
   VAR_10->error_index = VAR_15 + 1;
   FUNC_8(VAR_12);
   return (VAR_6);
  }
 }

 if (VAR_17 == VAR_10->nbindings)
  goto done;


 for (VAR_16 = 0; VAR_16 < VAR_10->error_index; VAR_16++) {
  VAR_18 = 1;
  for (VAR_15 = VAR_17; VAR_15 < VAR_10->nbindings; VAR_15++) {

   if (VAR_12->nbindings == VAR_5)

    goto done;

   if (VAR_16 == 0)
    VAR_19 = FUNC_1(&VAR_14, &VAR_10->bindings[VAR_15],
        &VAR_12->bindings[VAR_12->nbindings], VAR_10);
   else
    VAR_19 = FUNC_1(&VAR_14,
        &VAR_12->bindings[VAR_12->nbindings -
        (VAR_10->nbindings - VAR_17)],
        &VAR_12->bindings[VAR_12->nbindings], VAR_10);

   if (VAR_19 != VAR_8) {
    VAR_10->error_index = VAR_15 + 1;
    FUNC_8(VAR_12);
    return (VAR_19);
   }
   if (VAR_12->bindings[VAR_12->nbindings].syntax !=
       VAR_9)
    VAR_18 = 0;

   VAR_20 = FUNC_3(VAR_11,
       &VAR_12->bindings[VAR_12->nbindings++]);

   if (VAR_20 == VAR_0)
    goto done;

   if (VAR_20 != VAR_1) {
    if (FUNC_0(VAR_2))
     FUNC_4("getnext: binding encoding: %u", VAR_20);
    VAR_10->error_status = VAR_4;
    VAR_10->error_index = VAR_15 + 1;
    FUNC_8(VAR_12);
    return (VAR_6);
   }
  }
  if (VAR_18)
   break;
 }

  done:
 if (FUNC_5(VAR_11, VAR_12) != VAR_3) {
  FUNC_4("getnext: failed to encode PDU");
  return (VAR_6);
 }

 return (VAR_8);
}
