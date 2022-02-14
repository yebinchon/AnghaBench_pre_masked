
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINTN ;
struct TYPE_2__ {scalar_t__ (* LocateHandle ) (int ,int *,int *,int*,int *) ;int (* ConnectController ) (int ,int *,int *,int) ;} ;
typedef scalar_t__ EFI_STATUS ;
typedef int EFI_HANDLE ;
typedef int EFI_GUID ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int *,int *,int*,int *) ;
 scalar_t__ FUNC_4 (int ,int *,int *,int*,int *) ;
 int FUNC_5 (int ,int *,int *,int) ;

EFI_STATUS
FUNC_6(EFI_GUID *VAR_3)
{
        EFI_STATUS VAR_4;
        EFI_HANDLE *VAR_5;
        UINTN VAR_6, VAR_7, VAR_8;

        VAR_6 = 0;
        VAR_8 = 0;
        VAR_4 = VAR_0->LocateHandle(VAR_1, VAR_3, ((void*)0),
                     &VAR_8, ((void*)0));

        if(VAR_4 != VAR_2) {
                return (VAR_4);
        }

        VAR_5 = FUNC_2(VAR_8);
        VAR_6 = VAR_8 / sizeof(EFI_HANDLE);

        VAR_4 = VAR_0->LocateHandle(VAR_1, VAR_3, ((void*)0),
                     &VAR_8, VAR_5);

        if(FUNC_0(VAR_4)) {
                return (VAR_4);
        }

        for(VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
                VAR_0->ConnectController(VAR_5[VAR_7], ((void*)0), ((void*)0), 1);
        }

        FUNC_1(VAR_5);

        return (VAR_4);
}
