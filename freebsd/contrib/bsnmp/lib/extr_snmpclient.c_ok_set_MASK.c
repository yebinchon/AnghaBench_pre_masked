
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
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int
FUNC_2(const struct snmp_pdu * VAR_2, const struct snmp_pdu * VAR_3)
{
 u_int VAR_4;

 if (VAR_3->version != VAR_2->version) {
  FUNC_1("SNMP SET: response has wrong version");
  return (-1);
 }

 if (VAR_3->error_status == VAR_1) {
  FUNC_1("SNMP SET: error %d", VAR_3->error_status);
  return (0);
 }
 if (VAR_3->error_status != VAR_0) {
  FUNC_1("SNMP SET: error %d", VAR_3->error_status);
  return (-1);
 }

 if (VAR_3->nbindings != VAR_2->nbindings) {
  FUNC_1("SNMP SET: bad number of bindings in response");
  return (-1);
 }
 for (VAR_4 = 0; VAR_4 < VAR_2->nbindings; VAR_4++) {
  if (FUNC_0(&VAR_2->bindings[VAR_4].var,
      &VAR_3->bindings[VAR_4].var) != 0) {
   FUNC_1("SNMP SET: wrong OID in response to SET");
   return (-1);
  }
  if (VAR_3->bindings[VAR_4].syntax != VAR_2->bindings[VAR_4].syntax) {
   FUNC_1("SNMP SET: bad syntax in response");
   return (-1);
  }
 }
 return (1);
}
