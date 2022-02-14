
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * EFI_HANDLE ;
typedef int EFI_DEVICE_PATH ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;

EFI_HANDLE
FUNC_3(EFI_DEVICE_PATH *VAR_0, EFI_HANDLE *VAR_1, unsigned VAR_2)
{
 unsigned VAR_3;
 EFI_DEVICE_PATH *VAR_4, *VAR_5;
 EFI_HANDLE VAR_6;

 VAR_4 = FUNC_1(VAR_0);
 if (VAR_4 == ((void*)0))
  return (((void*)0));
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_6 = VAR_1[VAR_3];
  VAR_5 = FUNC_2(VAR_6);
  if (VAR_5 == ((void*)0))
   continue;
  if (!FUNC_0(VAR_4, FUNC_1(VAR_5)))
   continue;
  return (VAR_6);
 }
 return (((void*)0));
}
