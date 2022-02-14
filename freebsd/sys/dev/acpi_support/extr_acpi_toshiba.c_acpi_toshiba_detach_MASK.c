
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_toshiba_softc {int sysctl_ctx; int handle; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 struct acpi_toshiba_softc* FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3)
{
 struct acpi_toshiba_softc *VAR_4;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_2 != 0) {
  FUNC_0(VAR_4->handle, VAR_0,
     VAR_1);
 }
 FUNC_2(&VAR_4->sysctl_ctx);

 return (0);
}
