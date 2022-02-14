
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct snmp_pdu {size_t nbindings; int * bindings; } ;
struct asn_buf {int dummy; } ;
typedef enum snmp_code { ____Placeholder_snmp_code } snmp_code ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct asn_buf*,int *) ;
 int FUNC_1 (struct asn_buf*,struct snmp_pdu*) ;
 int FUNC_2 (struct asn_buf*,struct snmp_pdu*) ;

enum snmp_code
FUNC_3(struct snmp_pdu *VAR_3, struct asn_buf *VAR_4)
{
 u_int VAR_5;
 enum snmp_code VAR_6;

 if ((VAR_6 = FUNC_2(VAR_4, VAR_3)) != VAR_2)
  return (VAR_6);
 for (VAR_5 = 0; VAR_5 < VAR_3->nbindings; VAR_5++)
  if (FUNC_0(VAR_4, &VAR_3->bindings[VAR_5])
      != VAR_0)
   return (VAR_1);

 return (FUNC_1(VAR_4, VAR_3));
}
