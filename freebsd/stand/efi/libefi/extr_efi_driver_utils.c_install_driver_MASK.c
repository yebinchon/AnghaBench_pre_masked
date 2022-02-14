
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* InstallMultipleProtocolInterfaces ) (int **,int *,TYPE_1__*,int *) ;} ;
struct TYPE_5__ {int * DriverBindingHandle; int ImageHandle; } ;
typedef int EFI_STATUS ;
typedef TYPE_1__ EFI_DRIVER_BINDING ;


 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int **,int *,TYPE_1__*,int *) ;

EFI_STATUS
FUNC_4(EFI_DRIVER_BINDING *VAR_3)
{
        EFI_STATUS VAR_4;

        VAR_3->ImageHandle = VAR_2;
        VAR_3->DriverBindingHandle = ((void*)0);
        VAR_4 = VAR_0->InstallMultipleProtocolInterfaces(
            &(VAR_3->DriverBindingHandle),
            &VAR_1, VAR_3,
            ((void*)0));

        if (FUNC_0(VAR_4)) {
                FUNC_2("Failed to install driver (%ld)!\n",
                    FUNC_1(VAR_4));
        }

        return (VAR_4);
}
