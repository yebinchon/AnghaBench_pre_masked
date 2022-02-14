
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct snmp_pdu {scalar_t__ version; scalar_t__ error_status; scalar_t__ nbindings; TYPE_1__* bindings; } ;
struct TYPE_4__ {scalar_t__ version; } ;
struct TYPE_3__ {scalar_t__ syntax; int var; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 TYPE_2__ VAR_5 ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int
FUNC_2(const struct snmp_pdu * VAR_6, const struct snmp_pdu * VAR_7)
{
 u_int VAR_8;

 if (VAR_7->version != VAR_6->version) {
  FUNC_1("SNMP GET: response has wrong version");
  return (-1);
 }

 if (VAR_7->error_status == VAR_1)
  return (0);

 if (VAR_7->error_status != VAR_0) {
  FUNC_1("SNMP GET: error %d", VAR_7->error_status);
  return (-1);
 }

 if (VAR_7->nbindings != VAR_6->nbindings) {
  FUNC_1("SNMP GET: bad number of bindings in response");
  return (-1);
 }
 for (VAR_8 = 0; VAR_8 < VAR_6->nbindings; VAR_8++) {
  if (FUNC_0(&VAR_6->bindings[VAR_8].var,
      &VAR_7->bindings[VAR_8].var) != 0) {
   FUNC_1("SNMP GET: bad OID in response");
   return (-1);
  }
  if (VAR_5.version != VAR_4 &&
      (VAR_7->bindings[VAR_8].syntax == VAR_3 ||
      VAR_7->bindings[VAR_8].syntax == VAR_2))
   return (0);
  if (VAR_7->bindings[VAR_8].syntax != VAR_6->bindings[VAR_8].syntax) {
   FUNC_1("SNMP GET: bad syntax in response");
   return (-1);
  }
 }
 return (1);
}
