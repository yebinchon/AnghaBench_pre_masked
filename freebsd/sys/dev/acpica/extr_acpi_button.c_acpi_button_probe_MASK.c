
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_button_softc {int fixed; void* button_type; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int ,char**) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 struct acpi_button_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 (char*,char*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_4)
{
    struct acpi_button_softc *VAR_5;
    char *VAR_6;
    int VAR_7;

    if (FUNC_1("button"))
 return (VAR_2);
    VAR_7 = FUNC_0(FUNC_2(VAR_4), VAR_4, VAR_3, &VAR_6);
    if (VAR_7 > 0)
 return (VAR_2);

    VAR_5 = FUNC_3(VAR_4);
    if (FUNC_5(VAR_6, "PNP0C0C") == 0) {
 FUNC_4(VAR_4, "Power Button");
 VAR_5->button_type = VAR_0;
    } else if (FUNC_5(VAR_6, "ACPI_FPB") == 0) {
 FUNC_4(VAR_4, "Power Button (fixed)");
 VAR_5->button_type = VAR_0;
 VAR_5->fixed = 1;
    } else if (FUNC_5(VAR_6, "PNP0C0E") == 0) {
 FUNC_4(VAR_4, "Sleep Button");
 VAR_5->button_type = VAR_1;
    } else if (FUNC_5(VAR_6, "ACPI_FSB") == 0) {
 FUNC_4(VAR_4, "Sleep Button (fixed)");
 VAR_5->button_type = VAR_1;
 VAR_5->fixed = 1;
    }

    return (VAR_7);
}
