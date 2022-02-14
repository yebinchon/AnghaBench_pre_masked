
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmap {int pm_port; int pm_prot; int pm_vers; int pm_prog; } ;
typedef scalar_t__ bool_t ;
typedef int XDR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;

bool_t
FUNC_2(XDR *VAR_1, struct pmap *VAR_2)
{

 FUNC_0(VAR_1 != ((void*)0));
 FUNC_0(VAR_2 != ((void*)0));

 if (FUNC_1(VAR_1, &VAR_2->pm_prog) &&
  FUNC_1(VAR_1, &VAR_2->pm_vers) &&
  FUNC_1(VAR_1, &VAR_2->pm_prot))
  return (FUNC_1(VAR_1, &VAR_2->pm_port));
 return (VAR_0);
}
