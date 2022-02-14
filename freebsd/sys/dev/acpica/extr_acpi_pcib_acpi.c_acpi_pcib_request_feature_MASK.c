
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct acpi_hpcib_softc {int dummy; } ;
typedef enum pci_feature { ____Placeholder_pci_feature } pci_feature ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (struct acpi_hpcib_softc*,int ) ;
 struct acpi_hpcib_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_3, device_t VAR_4, enum pci_feature VAR_5)
{
 uint32_t VAR_6;
 struct acpi_hpcib_softc *VAR_7;

 VAR_7 = FUNC_1(VAR_3);

 switch (VAR_5) {
 case 128:
  VAR_6 = VAR_2;
  break;
 case 129:
  VAR_6 = VAR_1;
  break;
 default:
  return (VAR_0);
 }

 return (FUNC_0(VAR_7, VAR_6));
}
