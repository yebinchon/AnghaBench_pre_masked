
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_hpcib_softc {uintptr_t ap_segment; uintptr_t ap_bus; int ap_flags; int ap_handle; } ;
typedef int device_t ;




 int VAR_0 ;


 struct acpi_hpcib_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1, device_t VAR_2, int VAR_3, uintptr_t *VAR_4)
{
    struct acpi_hpcib_softc *VAR_5 = FUNC_0(VAR_1);

    switch (VAR_3) {
    case 128:
 *VAR_4 = VAR_5->ap_segment;
 return (0);
    case 129:
 *VAR_4 = VAR_5->ap_bus;
 return (0);
    case 130:
 *VAR_4 = (uintptr_t)VAR_5->ap_handle;
 return (0);
    case 131:
 *VAR_4 = (uintptr_t)VAR_5->ap_flags;
 return (0);
    }
    return (VAR_0);
}
