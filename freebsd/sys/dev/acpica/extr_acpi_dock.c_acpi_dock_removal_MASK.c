
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_dock_softc {scalar_t__ status; scalar_t__ _sta; } ;
typedef int device_t ;
typedef int ACPI_HANDLE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct acpi_dock_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,...) ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_10(device_t VAR_6)
{
 struct acpi_dock_softc *VAR_7;
 ACPI_HANDLE VAR_8;

 FUNC_0(VAR_5);

 VAR_7 = FUNC_8(VAR_6);
 VAR_8 = FUNC_7(VAR_6);

 if (VAR_7->status == VAR_1 ||
     VAR_7->status == VAR_3) {
  FUNC_2(VAR_6);
  if (FUNC_3(VAR_6, VAR_0) != 0)
   return;

  FUNC_5(VAR_6, VAR_4);

  if (FUNC_4(VAR_6, 1, 0) != 0) {
   FUNC_9(VAR_6, "_EJ0 failed\n");
   return;
  }

  FUNC_1("Dock", VAR_8, 0);

  VAR_7->status = VAR_2;
 }

 FUNC_6(VAR_6);
 if (VAR_7->_sta != 0)
  FUNC_9(VAR_6, "mechanical failure (%#x).\n", VAR_7->_sta);
}
