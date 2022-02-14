
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_hpcib_softc {uintptr_t ap_bus; int ap_flags; int ap_handle; } ;
typedef int device_t ;
typedef int ACPI_HANDLE ;




 int VAR_0 ;
 int VAR_1 ;


 struct acpi_hpcib_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_2, device_t VAR_3, int VAR_4, uintptr_t VAR_5)
{
    struct acpi_hpcib_softc *VAR_6 = FUNC_0(VAR_2);

    switch (VAR_4) {
    case 128:
 return (VAR_0);
    case 129:
 VAR_6->ap_bus = VAR_5;
 return (0);
    case 130:
 VAR_6->ap_handle = (ACPI_HANDLE)VAR_5;
 return (0);
    case 131:
 VAR_6->ap_flags = (int)VAR_5;
 return (0);
    }
    return (VAR_1);
}
