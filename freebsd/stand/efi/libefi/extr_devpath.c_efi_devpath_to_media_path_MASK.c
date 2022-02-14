
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EFI_DEVICE_PATH ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int * FUNC_2 (int *) ;

EFI_DEVICE_PATH *
FUNC_3(EFI_DEVICE_PATH *VAR_1)
{

 while (!FUNC_1(VAR_1)) {
  if (FUNC_0(VAR_1) == VAR_0)
   return (VAR_1);
  VAR_1 = FUNC_2(VAR_1);
 }
 return (((void*)0));
}
