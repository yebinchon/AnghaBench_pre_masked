
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_cmbat_softc {int bst_lastupdated; int dev; } ;
typedef int device_t ;
typedef int ACPI_HANDLE ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 struct acpi_cmbat_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_4)
{
    int VAR_5;
    ACPI_HANDLE VAR_6;
    struct acpi_cmbat_softc *VAR_7;

    VAR_7 = FUNC_4(VAR_4);
    VAR_6 = FUNC_3(VAR_4);
    VAR_7->dev = VAR_4;

    FUNC_6(&VAR_7->bst_lastupdated);

    VAR_5 = FUNC_2(VAR_4);
    if (VAR_5 != 0) {
     FUNC_5(VAR_4, "registering battery failed\n");
 return (VAR_5);
    }





    FUNC_0(VAR_6, VAR_0,
 VAR_3, VAR_4);

    FUNC_1(VAR_1, VAR_2, VAR_4);

    return (0);
}
