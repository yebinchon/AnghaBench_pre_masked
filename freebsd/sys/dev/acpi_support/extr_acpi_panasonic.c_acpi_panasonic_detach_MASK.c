
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_panasonic_softc {int sysctl_ctx; int handle; int power_evh; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 struct acpi_panasonic_softc* FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3)
{
 struct acpi_panasonic_softc *VAR_4;

 VAR_4 = FUNC_2(VAR_3);


 FUNC_1(VAR_2, VAR_4->power_evh);


 FUNC_0(VAR_4->handle, VAR_0,
     VAR_1);


 FUNC_3(&VAR_4->sysctl_ctx);

 return (0);
}
