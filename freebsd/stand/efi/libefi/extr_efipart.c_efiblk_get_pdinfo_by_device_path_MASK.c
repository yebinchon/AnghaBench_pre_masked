
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pdinfo_t ;
struct TYPE_2__ {int (* LocateDevicePath ) (int *,int **,int *) ;} ;
typedef int EFI_STATUS ;
typedef int EFI_HANDLE ;
typedef int EFI_DEVICE_PATH ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int **,int *) ;

pdinfo_t *
FUNC_3(EFI_DEVICE_PATH *VAR_2)
{
 EFI_HANDLE VAR_3;
 EFI_STATUS VAR_4;
 EFI_DEVICE_PATH *VAR_5 = VAR_2;

 VAR_4 = VAR_0->LocateDevicePath(&VAR_1, &VAR_5, &VAR_3);
 if (FUNC_0(VAR_4))
  return (((void*)0));
 return (FUNC_1(VAR_3));
}
