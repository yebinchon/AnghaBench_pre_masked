
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_pdu {scalar_t__ version; scalar_t__ security_model; } ;
struct asn_buf {int dummy; } ;
typedef int int32_t ;
typedef enum snmp_code { ____Placeholder_snmp_code } snmp_code ;



 int VAR_0 ;

 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct asn_buf*,struct snmp_pdu*) ;
 int FUNC_1 (struct asn_buf*,struct snmp_pdu*,int *) ;
 int FUNC_2 (struct asn_buf*,struct snmp_pdu*) ;
 int FUNC_3 (struct snmp_pdu*) ;

enum snmp_code
FUNC_4(struct asn_buf *VAR_5, struct snmp_pdu *VAR_6, int32_t *VAR_7)
{
 enum snmp_code VAR_8;

 if ((VAR_8 = FUNC_0(VAR_5, VAR_6)) != VAR_1)
  return (VAR_8);

 if (VAR_6->version == VAR_3) {
  if (VAR_6->security_model != VAR_2)
   return (128);
  if ((VAR_8 = FUNC_2(VAR_5, VAR_6)) != VAR_1)
   return (VAR_8);
 }

 VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_7);

 switch (VAR_8) {
   case 128:
  FUNC_3(VAR_6);
  break;

   case 129:
  if (VAR_6->version == VAR_4)
   return (VAR_0);

   default:
  break;
 }

 return (VAR_8);
}
