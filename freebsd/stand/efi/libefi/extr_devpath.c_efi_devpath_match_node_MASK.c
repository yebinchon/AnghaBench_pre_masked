
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EFI_DEVICE_PATH ;


 size_t FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int *,size_t) ;

bool
FUNC_4(EFI_DEVICE_PATH *VAR_0, EFI_DEVICE_PATH *VAR_1)
{
 size_t VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return (0);
 if (FUNC_2(VAR_0) != FUNC_2(VAR_1) ||
     FUNC_1(VAR_0) != FUNC_1(VAR_1))
  return (0);
 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2 != FUNC_0(VAR_1))
  return (0);
 if (FUNC_3(VAR_0, VAR_1, VAR_2) != 0)
  return (0);
 return (1);
}
