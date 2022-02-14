
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct acpi_panasonic_softc {int dev; } ;
typedef int UINT32 ;
typedef int ACPI_HANDLE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (struct acpi_panasonic_softc*,int ,int) ;
 int FUNC_4 (struct acpi_panasonic_softc*,int ,int*) ;
 int VAR_0 ;
 int FUNC_5 (int ,char*,int) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_6(ACPI_HANDLE VAR_2, UINT32 VAR_3, void *VAR_4)
{
 struct acpi_panasonic_softc *VAR_5;
 UINT32 VAR_6 = 0;

 VAR_5 = (struct acpi_panasonic_softc *)VAR_4;

 switch (VAR_3) {
 case 0x80:
  FUNC_0(VAR_1);
  if (FUNC_4(VAR_5, VAR_2, &VAR_6) == 0) {
   FUNC_3(VAR_5, VAR_2, VAR_6);
   FUNC_2("Panasonic", VAR_2, (uint8_t)VAR_6);
  }
  FUNC_1(VAR_1);
  break;
 case 0x81:
  if (!VAR_0)
   break;

 default:
  FUNC_5(VAR_5->dev, "unknown notify: %#x\n", VAR_3);
  break;
 }
}
