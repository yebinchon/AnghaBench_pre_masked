
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef uintptr_t u_long ;
struct ppc_data {int ppc_lock; int ppc_epp; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct ppc_data*) ;


 scalar_t__ FUNC_1 (int ) ;

int
FUNC_2(device_t VAR_1, device_t VAR_2, int VAR_3, uintptr_t *VAR_4)
{
 struct ppc_data *VAR_5 = (struct ppc_data *)FUNC_1(VAR_1);

 switch (VAR_3) {
 case 129:
  FUNC_0(VAR_5);
  *VAR_4 = (u_long)VAR_5->ppc_epp;
  break;
 case 128:
  *VAR_4 = (uintptr_t)&VAR_5->ppc_lock;
  break;
 default:
  return (VAR_0);
 }

 return (0);
}
