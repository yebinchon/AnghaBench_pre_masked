
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc_data {int ppc_type; } ;
typedef int device_t ;


 struct ppc_data* FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ppc_data*) ;


 int FUNC_2 (struct ppc_data*,int) ;
 int FUNC_3 (struct ppc_data*,int) ;

int
FUNC_4(device_t VAR_1, int VAR_2)
{
 struct ppc_data *VAR_3 = FUNC_0(VAR_1);

 FUNC_1(VAR_3);
 switch (VAR_3->ppc_type) {
 case 128:
  return (FUNC_3(VAR_3, VAR_2));
  break;

 case 129:
 default:
  return (FUNC_2(VAR_3, VAR_2));
  break;
 }


 return (VAR_0);
}
