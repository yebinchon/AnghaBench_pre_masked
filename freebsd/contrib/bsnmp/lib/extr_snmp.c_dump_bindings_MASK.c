
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct snmp_pdu {size_t nbindings; int * bindings; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static __inline void
FUNC_2(const struct snmp_pdu *VAR_0)
{
 u_int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->nbindings; VAR_1++) {
  FUNC_1(" [%u]: ", VAR_1);
  FUNC_0(&VAR_0->bindings[VAR_1]);
  FUNC_1("\n");
 }
}
