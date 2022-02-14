
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ng_atmllc_priv {int * fddi; int * ether; int * atm; } ;
typedef int node_p ;
typedef int * hook_p ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct ng_atmllc_priv* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(hook_p VAR_0)
{
 node_p VAR_1;
 struct ng_atmllc_priv *VAR_2;

 VAR_1 = FUNC_0(VAR_0);
 VAR_2 = FUNC_3(VAR_1);

 if (VAR_0 == VAR_2->atm) {
  VAR_2->atm = ((void*)0);
 } else if (VAR_0 == VAR_2->ether) {
  VAR_2->ether = ((void*)0);
 } else if (VAR_0 == VAR_2->fddi) {
  VAR_2->fddi = ((void*)0);
 }

 if (FUNC_2(VAR_1) == 0 && FUNC_1(VAR_1)) {
  FUNC_4(VAR_1);
 }

 return (0);
}
