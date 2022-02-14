
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct acpi_toshiba_softc {int dev; } ;
typedef int UINT32 ;
typedef int ACPI_HANDLE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int ,char*,int) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int*) ;
 int FUNC_5 (struct acpi_toshiba_softc*,int ,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_6(ACPI_HANDLE VAR_3, UINT32 VAR_4, void *VAR_5)
{
 struct acpi_toshiba_softc *VAR_6;
 UINT32 VAR_7;

 VAR_6 = (struct acpi_toshiba_softc *)VAR_5;

 if (VAR_4 == 0x80) {
  FUNC_0(VAR_2);
  while (FUNC_4(VAR_3, VAR_0, VAR_1, &VAR_7) == 0) {
   FUNC_5(VAR_6, VAR_3, VAR_7);
   FUNC_2("TOSHIBA", VAR_3, (uint8_t)VAR_7);
  }
  FUNC_1(VAR_2);
 } else
  FUNC_3(VAR_6->dev, "unknown notify: 0x%x\n", VAR_4);
}
