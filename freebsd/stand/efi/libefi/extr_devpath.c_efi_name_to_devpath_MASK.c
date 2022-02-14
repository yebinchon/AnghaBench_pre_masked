
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EFI_DEVICE_PATH ;
typedef int CHAR16 ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char const*,int **,size_t*) ;

EFI_DEVICE_PATH *
FUNC_3(const char *VAR_0)
{
 EFI_DEVICE_PATH *VAR_1;
 CHAR16 *VAR_2;
 size_t VAR_3;

 VAR_2 = ((void*)0);
 if (FUNC_2(VAR_0, &VAR_2, &VAR_3) != 0)
  return (((void*)0));
 VAR_1 = FUNC_0(VAR_2);
 FUNC_1(VAR_2);
 return (VAR_1);
}
