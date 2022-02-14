
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_fujitsu_softc {int sysctl_ctx; int handle; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 struct acpi_fujitsu_softc* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 struct acpi_fujitsu_softc *VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 FUNC_0(VAR_3->handle, VAR_0,
    VAR_1);

 FUNC_2(&VAR_3->sysctl_ctx);

 return (0);
}
