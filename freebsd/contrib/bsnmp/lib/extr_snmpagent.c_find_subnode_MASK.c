
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_value {int var; } ;
struct snmp_node {int oid; } ;


 scalar_t__ FUNC_0 (int *,int *) ;
 struct snmp_node* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static struct snmp_node *
FUNC_1(const struct snmp_value *VAR_2)
{
 struct snmp_node *VAR_3;

 for (VAR_3 = VAR_0; VAR_3 < VAR_0 + VAR_1; VAR_3++) {
  if (FUNC_0(&VAR_2->var, &VAR_3->oid))
   return (VAR_3);
 }
 return (((void*)0));
}
