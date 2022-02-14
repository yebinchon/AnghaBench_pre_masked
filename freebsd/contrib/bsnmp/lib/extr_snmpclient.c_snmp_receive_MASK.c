
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tv ;
struct timeval {int dummy; } ;
struct snmp_pdu {int dummy; } ;


 int FUNC_0 (struct snmp_pdu*) ;
 struct snmp_pdu* FUNC_1 (int) ;
 int FUNC_2 (struct timeval*,int ,int) ;
 int FUNC_3 (int *,char*) ;
 int VAR_0 ;
 int FUNC_4 (struct snmp_pdu*) ;
 int FUNC_5 (struct snmp_pdu*) ;
 int FUNC_6 (struct snmp_pdu*,struct timeval*) ;

int
FUNC_7(int VAR_1)
{
 int VAR_2;

 struct timeval VAR_3;
 struct snmp_pdu * VAR_4;

 FUNC_2(&VAR_3, 0, sizeof(VAR_3));

 VAR_4 = FUNC_1(sizeof(struct snmp_pdu));
 if (VAR_4 == ((void*)0)) {
  FUNC_3(&VAR_0, "no memory for returning PDU");
  return (-1) ;
 }

 if ((VAR_2 = FUNC_6(VAR_4, VAR_1 ? ((void*)0) : &VAR_3)) <= 0) {
  FUNC_0(VAR_4);
  return (VAR_2);
 }
 VAR_2 = FUNC_4(VAR_4);
 FUNC_5(VAR_4);
 FUNC_0(VAR_4);
 return (VAR_2);
}
