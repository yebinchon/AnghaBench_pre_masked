
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_pcib_softc {int ap_handle; } ;
typedef int device_t ;



 struct acpi_pcib_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,uintptr_t*) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, device_t VAR_1, int VAR_2, uintptr_t *VAR_3)
{
    struct acpi_pcib_softc *VAR_4 = FUNC_0(VAR_0);

    switch (VAR_2) {
    case 128:
 *VAR_3 = (uintptr_t)VAR_4->ap_handle;
 return (0);
    }
    return (FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3));
}
