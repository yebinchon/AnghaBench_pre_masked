
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct snmp_pdu {size_t nbindings; size_t error_index; int error_status; int * bindings; } ;
struct TYPE_2__ {void* data; } ;
struct context {TYPE_1__ ctx; } ;
struct asn_buf {int dummy; } ;
typedef enum snmp_ret { ____Placeholder_snmp_ret } snmp_ret ;
typedef enum asn_err { ____Placeholder_asn_err } asn_err ;
typedef int context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct context*,int *,int *,struct snmp_pdu*) ;
 int FUNC_2 (struct context*,int ,int) ;
 int FUNC_3 (struct asn_buf*,int *) ;
 int FUNC_4 (char*,...) ;
 scalar_t__ FUNC_5 (struct asn_buf*,struct snmp_pdu*) ;
 int FUNC_6 (struct snmp_pdu*,struct snmp_pdu*) ;
 scalar_t__ FUNC_7 (struct asn_buf*,struct snmp_pdu*) ;
 int FUNC_8 (struct snmp_pdu*) ;

enum snmp_ret
FUNC_9(struct snmp_pdu *VAR_9, struct asn_buf *VAR_10,
    struct snmp_pdu *VAR_11, void *VAR_12)
{
 struct context VAR_13;
 u_int VAR_14;
 enum asn_err VAR_15;
 enum snmp_ret VAR_16;

 FUNC_2(&VAR_13, 0, sizeof(VAR_13));
 VAR_13.ctx.data = VAR_12;

 FUNC_6(VAR_9, VAR_11);

 if (FUNC_7(VAR_10, VAR_11))
  return (VAR_7);

 for (VAR_14 = 0; VAR_14 < VAR_9->nbindings; VAR_14++) {
  VAR_16 = FUNC_1(&VAR_13, &VAR_9->bindings[VAR_14],
      &VAR_11->bindings[VAR_14], VAR_9);

  if (VAR_16 != VAR_8) {
   VAR_9->error_index = VAR_14 + 1;
   FUNC_8(VAR_11);
   return (VAR_16);
  }

  VAR_11->nbindings++;

  VAR_15 = FUNC_3(VAR_10, &VAR_11->bindings[VAR_14]);

  if (VAR_15 == VAR_0) {
   VAR_9->error_status = VAR_5;
   VAR_9->error_index = 0;
   FUNC_8(VAR_11);
   return (VAR_6);
  }
  if (VAR_15 != VAR_1) {
   if (FUNC_0(VAR_2))
    FUNC_4("getnext: binding encoding: %u", VAR_15);
   VAR_9->error_status = VAR_4;
   VAR_9->error_index = VAR_14 + 1;
   FUNC_8(VAR_11);
   return (VAR_6);
  }
 }

 if (FUNC_5(VAR_10, VAR_11) != VAR_3) {
  FUNC_4("getnext: failed to encode PDU");
  return (VAR_6);
 }

 return (VAR_8);
}
