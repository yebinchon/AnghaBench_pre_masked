
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct acpi_ioctl_hook {void* arg; int fn; int cmd; } ;
typedef int acpi_ioctl_fn ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct acpi_ioctl_hook*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct acpi_ioctl_hook* FUNC_4 (int,int ,int ) ;

int
FUNC_5(u_long VAR_7, acpi_ioctl_fn VAR_8, void *VAR_9)
{
    struct acpi_ioctl_hook *VAR_10;

    if ((VAR_10 = FUNC_4(sizeof(*VAR_10), VAR_1, VAR_2)) == ((void*)0))
 return (VAR_0);
    VAR_10->cmd = VAR_7;
    VAR_10->fn = VAR_8;
    VAR_10->arg = VAR_9;

    FUNC_0(VAR_3);
    if (VAR_5 == 0) {
 FUNC_2(&VAR_4);
 VAR_5 = 1;
    }
    FUNC_3(&VAR_4, VAR_10, VAR_6);
    FUNC_1(VAR_3);

    return (0);
}
