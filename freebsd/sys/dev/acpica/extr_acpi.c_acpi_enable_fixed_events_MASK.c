
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_softc {int acpi_dev; } ;
struct TYPE_2__ {int Flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 TYPE_1__ VAR_4 ;
 int FUNC_1 (int ,int ,struct acpi_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static void
FUNC_3(struct acpi_softc *VAR_7)
{
    static int VAR_8 = 1;


    if ((VAR_4.Flags & VAR_2) == 0) {
 FUNC_0(VAR_0);
 FUNC_1(VAR_0,
         VAR_5, VAR_7);
 if (VAR_8)
     FUNC_2(VAR_7->acpi_dev, "Power Button (fixed)\n");
    }
    if ((VAR_4.Flags & VAR_3) == 0) {
 FUNC_0(VAR_1);
 FUNC_1(VAR_1,
         VAR_6, VAR_7);
 if (VAR_8)
     FUNC_2(VAR_7->acpi_dev, "Sleep Button (fixed)\n");
    }

    VAR_8 = 0;
}
