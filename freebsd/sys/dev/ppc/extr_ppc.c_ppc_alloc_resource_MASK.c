
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct resource {int dummy; } ;
struct ppc_data {struct resource* res_irq; } ;
typedef int rman_res_t ;
typedef int device_t ;


 struct ppc_data* FUNC_0 (int ) ;


struct resource *
FUNC_1(device_t VAR_0, device_t VAR_1, int VAR_2, int *VAR_3,
    rman_res_t VAR_4, rman_res_t VAR_5, rman_res_t VAR_6, u_int VAR_7)
{
 struct ppc_data *VAR_8 = FUNC_0(VAR_0);

 switch (VAR_2) {
 case 128:
  if (*VAR_3 == 0)
   return (VAR_8->res_irq);
  break;
 }
 return (((void*)0));
}
