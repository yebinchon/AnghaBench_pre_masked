
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINTN ;
typedef int EFI_DEVICE_PATH ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;

UINTN
FUNC_3(EFI_DEVICE_PATH *VAR_0)
{
 EFI_DEVICE_PATH *VAR_1 = VAR_0;

 while (!FUNC_1(VAR_0))
  VAR_0 = FUNC_2(VAR_0);
 return ((UINTN)VAR_0 - (UINTN)VAR_1) + FUNC_0(VAR_0);
}
