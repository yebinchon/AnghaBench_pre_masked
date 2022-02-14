
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int EFI_DEVICE_PATH ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (size_t) ;
 int FUNC_5 (int *,int *,size_t) ;

EFI_DEVICE_PATH *
FUNC_6(EFI_DEVICE_PATH *VAR_0)
{
 EFI_DEVICE_PATH *VAR_1, *VAR_2;
 size_t VAR_3, VAR_4;

 if ((VAR_1 = FUNC_3(VAR_0)) == ((void*)0))
  return (((void*)0));
 VAR_3 = (UINT8 *)VAR_1 - (UINT8 *)VAR_0;
 if (VAR_3 == 0)
  return (((void*)0));
 VAR_4 = VAR_3 + FUNC_0(FUNC_1(VAR_1));
 VAR_2 = FUNC_4(VAR_4);
 if (VAR_2 != ((void*)0)) {
  FUNC_5(VAR_2, VAR_0, VAR_3);
  VAR_1 = (EFI_DEVICE_PATH *)((UINT8 *)VAR_2 + VAR_3);
  FUNC_2(VAR_1);
 }
 return (VAR_2);
}
