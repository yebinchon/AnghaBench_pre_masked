
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EFI_STATUS ;
typedef int EFI_HANDLE ;
typedef int EFI_DEVICE_PATH ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,void**) ;

EFI_DEVICE_PATH *
FUNC_2(EFI_HANDLE VAR_1)
{
 EFI_DEVICE_PATH *VAR_2;
 EFI_STATUS VAR_3;

 VAR_3 = FUNC_1(VAR_1, &VAR_0,
     (void **)&VAR_2);
 if (FUNC_0(VAR_3))
  VAR_2 = ((void*)0);
 return (VAR_2);
}
