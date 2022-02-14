
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_softc {int acpi_dev; scalar_t__ acpi_do_disable; scalar_t__ acpi_handle_reboot; } ;
typedef int register_t ;
typedef scalar_t__ ACPI_STATUS ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int * VAR_4 ;

__attribute__((used)) static void
FUNC_11(void *VAR_5, int VAR_6)
{
    struct acpi_softc *VAR_7 = (struct acpi_softc *)VAR_5;
    register_t VAR_8;
    ACPI_STATUS VAR_9;






    if ((VAR_6 & VAR_3) != 0) {
 VAR_9 = FUNC_3(VAR_0);
 if (FUNC_0(VAR_9)) {
     FUNC_8(VAR_7->acpi_dev, "AcpiEnterSleepStatePrep failed - %s\n",
  FUNC_4(VAR_9));
     return;
 }
 FUNC_8(VAR_7->acpi_dev, "Powering system off\n");
 VAR_8 = FUNC_9();
 VAR_9 = FUNC_2(VAR_0);
 if (FUNC_0(VAR_9)) {
     FUNC_10(VAR_8);
     FUNC_8(VAR_7->acpi_dev, "power-off failed - %s\n",
  FUNC_4(VAR_9));
 } else {
     FUNC_7(1000000);
     FUNC_10(VAR_8);
     FUNC_8(VAR_7->acpi_dev, "power-off failed - timeout\n");
 }
    } else if ((VAR_6 & VAR_2) == 0 && VAR_7->acpi_handle_reboot) {

 VAR_9 = FUNC_5();
 if (FUNC_1(VAR_9)) {
     FUNC_7(1000000);
     FUNC_8(VAR_7->acpi_dev, "reset failed - timeout\n");
 } else if (VAR_9 != VAR_1)
     FUNC_8(VAR_7->acpi_dev, "reset failed - %s\n",
  FUNC_4(VAR_9));
    } else if (VAR_7->acpi_do_disable && VAR_4 == ((void*)0)) {




 FUNC_8(VAR_7->acpi_dev, "Shutting down\n");
 FUNC_6();
    }
}
