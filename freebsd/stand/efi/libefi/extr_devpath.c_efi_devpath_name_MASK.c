
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {int (* LocateProtocol ) (int *,int *,int **) ;} ;
struct TYPE_3__ {int * (* ConvertDevicePathToText ) (int *,int ,int ) ;} ;
typedef int EFI_STATUS ;
typedef int EFI_DEVICE_PATH ;
typedef int CHAR16 ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int **) ;
 int * FUNC_3 (int *,int ,int ) ;
 TYPE_1__* VAR_3 ;

CHAR16 *
FUNC_4(EFI_DEVICE_PATH *VAR_4)
{
 EFI_STATUS VAR_5;

 if (VAR_4 == ((void*)0))
  return (((void*)0));
 if (VAR_3 == ((void*)0)) {
  VAR_5 = VAR_0->LocateProtocol(&VAR_1, ((void*)0),
      (VOID **)&VAR_3);
  if (FUNC_0(VAR_5))
   VAR_3 = ((void*)0);
 }
 if (VAR_3 == ((void*)0))
  return (FUNC_1(VAR_4));

 return (VAR_3->ConvertDevicePathToText(VAR_4, VAR_2, VAR_2));
}
