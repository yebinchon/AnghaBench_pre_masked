
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {int (* LocateProtocol ) (int *,int *,int **) ;} ;
struct TYPE_3__ {int * (* ConvertTextToDevicePath ) (int *) ;} ;
typedef int EFI_STATUS ;
typedef int EFI_DEVICE_PATH ;
typedef int CHAR16 ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *,int *,int **) ;
 int * FUNC_2 (int *) ;

EFI_DEVICE_PATH *
FUNC_3(CHAR16 *VAR_3)
{
 EFI_STATUS VAR_4;

 if (VAR_3 == ((void*)0))
  return (((void*)0));
 if (VAR_2 == ((void*)0)) {
  VAR_4 = VAR_0->LocateProtocol(&VAR_1, ((void*)0),
      (VOID **)&VAR_2);
  if (FUNC_0(VAR_4))
   VAR_2 = ((void*)0);
 }
 if (VAR_2 == ((void*)0))
  return (((void*)0));

 return (VAR_2->ConvertTextToDevicePath(VAR_3));
}
