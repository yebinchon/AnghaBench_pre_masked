
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_dock_softc {scalar_t__ status; } ;
typedef int device_t ;
typedef int ACPI_HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 struct acpi_dock_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_8(device_t VAR_7)
{
 struct acpi_dock_softc *VAR_8;
 ACPI_HANDLE VAR_9;

 FUNC_0(VAR_6);

 VAR_8 = FUNC_6(VAR_7);
 VAR_9 = FUNC_5(VAR_7);

 if (VAR_8->status == VAR_3 ||
     VAR_8->status == VAR_4) {
  FUNC_3(VAR_7, VAR_1);
  if (FUNC_2(VAR_7, VAR_0) != 0) {
   FUNC_7(VAR_7, "_DCK failed\n");
   return;
  }

  if (!VAR_5) {
   FUNC_4(VAR_7);

   FUNC_1("Dock", VAR_9, 1);
  }

  VAR_8->status = VAR_2;
 }
}
