
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_value {int syntax; } ;
struct snmp_node {int syntax; } ;
struct asn_oid {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 char VAR_0 ;
 char VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct snmp_node const*,struct asn_oid*,struct snmp_value*) ;
 scalar_t__ VAR_2 ;
 struct snmp_node* FUNC_6 (char const*,struct asn_oid*) ;
 int FUNC_7 (struct snmp_value*) ;
 int FUNC_8 (struct snmp_value*) ;
 int FUNC_9 (struct snmp_value*) ;
 int FUNC_10 (struct snmp_value*) ;
 int FUNC_11 (struct snmp_value*) ;
 int FUNC_12 (struct snmp_value*) ;
 int FUNC_13 (struct snmp_value*) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (struct snmp_value*) ;
 char VAR_3 ;

__attribute__((used)) static void
FUNC_16(const char *VAR_4)
{
 struct snmp_value VAR_5;
 struct asn_oid VAR_6;
 const struct snmp_node *VAR_7;

 VAR_7 = FUNC_6(VAR_4, &VAR_6);
 if (VAR_3 != '=')
  FUNC_14("'=' expected, got '%c'", VAR_3);
 FUNC_4();

 if (VAR_2) {

  while (VAR_3 != VAR_1 && VAR_3 != VAR_0)
   FUNC_4();
  return;
 }
 if (VAR_7 == ((void*)0))
  FUNC_14("unknown variable");

 switch (VAR_5.syntax = VAR_7->syntax) {

   case 131:
  FUNC_10(&VAR_5);
  break;

   case 135:
  FUNC_8(&VAR_5);
  break;

   case 138:
  FUNC_7(&VAR_5);
  break;

   case 130:
  FUNC_11(&VAR_5);
  break;

   case 129:
  FUNC_12(&VAR_5);
  break;

   case 134:
  FUNC_9(&VAR_5);
  break;

   case 139:
   case 136:
   case 128:
  FUNC_13(&VAR_5);
  break;

   case 132:
   case 133:
   case 137:
  FUNC_3();
 }

 if (FUNC_2()) {
  FUNC_15(&VAR_5);
  FUNC_0();
 }

 FUNC_5(VAR_7, &VAR_6, &VAR_5);

 FUNC_1();
}
