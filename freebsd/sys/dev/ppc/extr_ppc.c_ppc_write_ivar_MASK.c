
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc_data {scalar_t__ ppc_intr_arg; int * ppc_intr_hook; int ppbus; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ppc_data*) ;

 scalar_t__ FUNC_1 (int ) ;

int
FUNC_2(device_t VAR_3, device_t VAR_4, int VAR_5, uintptr_t VAR_6)
{
 struct ppc_data *VAR_7 = (struct ppc_data *)FUNC_1(VAR_3);

 switch (VAR_5) {
 case 128:
  FUNC_0(VAR_7);
  if (VAR_4 != VAR_7->ppbus)
   return (VAR_1);
  if (VAR_6 == 0) {
   VAR_7->ppc_intr_hook = ((void*)0);
   break;
  }
  if (VAR_7->ppc_intr_hook != ((void*)0))
   return (VAR_0);
  VAR_7->ppc_intr_hook = (void *)VAR_6;
  VAR_7->ppc_intr_arg = FUNC_1(VAR_4);
  break;
 default:
  return (VAR_2);
 }

 return (0);
}
