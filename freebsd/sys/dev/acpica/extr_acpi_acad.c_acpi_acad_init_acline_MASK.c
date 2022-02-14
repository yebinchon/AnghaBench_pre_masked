
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_acad_softc {int status; } ;
typedef scalar_t__ device_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int ,char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 struct acpi_acad_softc* FUNC_4 (scalar_t__) ;

__attribute__((used)) static void
FUNC_5(void *VAR_1)
{
    struct acpi_acad_softc *VAR_2;
    device_t VAR_3;
    int VAR_4;

    VAR_3 = (device_t)VAR_1;
    VAR_2 = FUNC_4(VAR_3);
    FUNC_0(VAR_3, FUNC_3(VAR_3),
  "acline initialization start\n");

    for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
 FUNC_2(VAR_3);
 if (VAR_2->status != -1)
     break;
 FUNC_1(10000);
    }

    FUNC_0(VAR_3, FUNC_3(VAR_3),
  "acline initialization done, tried %d times\n", VAR_4 + 1);
}
