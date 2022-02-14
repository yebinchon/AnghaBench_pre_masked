
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* LocateDevicePath ) (int *,int **,int **) ;} ;
typedef int EFI_STATUS ;
typedef int * EFI_HANDLE ;
typedef int EFI_DEVICE_PATH ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int **,int **) ;

EFI_HANDLE
FUNC_2(EFI_DEVICE_PATH *VAR_2)
{
 EFI_STATUS VAR_3;
 EFI_HANDLE VAR_4;







 VAR_3 = VAR_0->LocateDevicePath(&VAR_1, &VAR_2, &VAR_4);
 if (FUNC_0(VAR_3))
  return (((void*)0));
 return (VAR_4);
}
