
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct snmp_pdu {scalar_t__ version; scalar_t__ error_status; scalar_t__ nbindings; TYPE_1__* bindings; } ;
struct TYPE_2__ {scalar_t__ syntax; int var; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int
FUNC_2(const struct snmp_pdu * VAR_4, const struct snmp_pdu * VAR_5)
{
 u_int VAR_6;

 if (VAR_5->version != VAR_4->version) {
  FUNC_1("SNMP GETNEXT: response has wrong version");
  return (-1);
 }

 if (VAR_5->error_status == VAR_1)
  return (0);

 if (VAR_5->error_status != VAR_0) {
  FUNC_1("SNMP GETNEXT: error %d", VAR_5->error_status);
  return (-1);
 }
 if (VAR_5->nbindings != VAR_4->nbindings) {
  FUNC_1("SNMP GETNEXT: bad number of bindings in response");
  return (-1);
 }
 for (VAR_6 = 0; VAR_6 < VAR_4->nbindings; VAR_6++) {
  if (!FUNC_0(&VAR_4->bindings[VAR_6].var,
      &VAR_5->bindings[VAR_6].var)) {
   if (VAR_6 != 0)
    FUNC_1("SNMP GETNEXT: inconsistent table "
        "response");
   return (0);
  }
  if (VAR_5->version != VAR_3 &&
      VAR_5->bindings[VAR_6].syntax == VAR_2)
   return (0);

  if (VAR_5->bindings[VAR_6].syntax != VAR_4->bindings[VAR_6].syntax) {
   FUNC_1("SNMP GETNEXT: bad syntax in response");
   return (0);
  }
 }
 return (1);
}
