
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int oeminfo; int type; int serial; int model; } ;
union acpi_battery_ioctl_arg {int unit; TYPE_1__ bst; TYPE_1__ bif; TYPE_1__ battinfo; } ;
typedef int u_long ;
typedef int * device_t ;
typedef scalar_t__ caddr_t ;






 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int * FUNC_4 (int) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_8(u_long VAR_3, caddr_t VAR_4, void *VAR_5)
{
    union acpi_battery_ioctl_arg *VAR_6;
    int VAR_7, VAR_8;
    device_t VAR_9;


    VAR_7 = VAR_2;
    VAR_8 = 0;
    VAR_9 = ((void*)0);
    VAR_6 = ((void*)0);
    if (FUNC_2(VAR_3) == sizeof(*VAR_6)) {
 VAR_6 = (union acpi_battery_ioctl_arg *)VAR_4;
 VAR_8 = VAR_6->unit;
 if (VAR_8 != VAR_0)
     VAR_9 = FUNC_4(VAR_8);
    }





    switch (VAR_3) {
    case 128:
 *(int *)VAR_4 = FUNC_6();
 VAR_7 = 0;
 break;
    case 131:
 if (VAR_9 != ((void*)0) || VAR_8 == VAR_0) {
     FUNC_7(&VAR_6->battinfo, sizeof(VAR_6->battinfo));
     VAR_7 = FUNC_5(VAR_9, &VAR_6->battinfo);
 }
 break;
    case 130:
 if (VAR_9 != ((void*)0)) {
     FUNC_7(&VAR_6->bif, sizeof(VAR_6->bif));
     VAR_7 = FUNC_0(VAR_9, &VAR_6->bif);






     FUNC_3(VAR_6->bif.model,
  sizeof(VAR_6->bif.model));
     FUNC_3(VAR_6->bif.serial,
  sizeof(VAR_6->bif.serial));
     FUNC_3(VAR_6->bif.type,
  sizeof(VAR_6->bif.type));
     FUNC_3(VAR_6->bif.oeminfo,
  sizeof(VAR_6->bif.oeminfo));
 }
 break;
    case 129:
 if (VAR_9 != ((void*)0)) {
     FUNC_7(&VAR_6->bst, sizeof(VAR_6->bst));
     VAR_7 = FUNC_1(VAR_9, &VAR_6->bst);
 }
 break;
    default:
 VAR_7 = VAR_1;
    }

    return (VAR_7);
}
