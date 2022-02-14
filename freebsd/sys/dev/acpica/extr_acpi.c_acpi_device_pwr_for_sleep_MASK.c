
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sxd ;
struct acpi_softc {int acpi_sstate; } ;
typedef int device_t ;
typedef scalar_t__ ACPI_STATUS ;
typedef int * ACPI_HANDLE ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *,char*,int*) ;
 scalar_t__ FUNC_3 (int *,char*) ;
 int * FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 struct acpi_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,char*,int ,int ) ;
 int FUNC_8 (char*,int,char*,int) ;

int
FUNC_9(device_t VAR_2, device_t VAR_3, int *VAR_4)
{
    struct acpi_softc *VAR_5;
    ACPI_HANDLE VAR_6;
    ACPI_STATUS VAR_7;
    char VAR_8[8];

    VAR_6 = FUNC_4(VAR_3);







    if (VAR_4 == ((void*)0) || VAR_6 == ((void*)0) ||
 FUNC_3(VAR_6, "PNP0500") ||
 FUNC_3(VAR_6, "PNP0501") ||
 FUNC_3(VAR_6, "PNP0502") ||
 FUNC_3(VAR_6, "PNP0510") ||
 FUNC_3(VAR_6, "PNP0511"))
 return (VAR_1);





    VAR_5 = FUNC_6(VAR_2);
    FUNC_8(VAR_8, sizeof(VAR_8), "_S%dD", VAR_5->acpi_sstate);
    VAR_7 = FUNC_2(VAR_6, VAR_8, VAR_4);
    if (FUNC_0(VAR_7) && VAR_7 != VAR_0) {
     FUNC_7(VAR_3, "failed to get %s on %s: %s\n", VAR_8,
  FUNC_5(VAR_6), FUNC_1(VAR_7));
     return (VAR_1);
    }

    return (0);
}
