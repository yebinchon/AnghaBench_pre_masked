
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_pci_controller {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ata_pci_controller* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 struct ata_pci_controller *VAR_3;

 if (!FUNC_3(VAR_2))
  return (VAR_1);

 if (!FUNC_2(VAR_2, "fsl,imx51-ata") &&
     !FUNC_2(VAR_2, "fsl,imx53-ata"))
  return (VAR_1);

 VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_2, "Freescale Integrated PATA Controller");
 return (VAR_0);
}
