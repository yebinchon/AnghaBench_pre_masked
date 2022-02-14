
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_cmbat_softc {int bst_lastupdated; } ;
typedef scalar_t__ device_t ;
typedef int UINT32 ;
typedef int ACPI_HANDLE ;






 int FUNC_0 (int ,int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int) ;
 int VAR_1 ;
 struct acpi_cmbat_softc* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(ACPI_HANDLE VAR_2, UINT32 VAR_3, void *VAR_4)
{
    struct acpi_cmbat_softc *VAR_5;
    device_t VAR_6;

    VAR_6 = (device_t)VAR_4;
    VAR_5 = FUNC_2(VAR_6);

    switch (VAR_3) {
    case 128:
    case 130:




 FUNC_3(&VAR_5->bst_lastupdated);
 break;
    case 129:
    case 131:




 FUNC_0(VAR_0, VAR_1, VAR_6);
 break;
    }

    FUNC_1("CMBAT", VAR_2, VAR_3);
}
