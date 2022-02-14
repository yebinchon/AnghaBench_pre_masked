
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ata_pci_controller {int (* setmode ) (int ,int,int) ;} ;
typedef int device_t ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ) ;
 struct ata_pci_controller* FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0, int VAR_1, int VAR_2)
{
 struct ata_pci_controller *VAR_3 = FUNC_2(FUNC_1(VAR_0));

 if (VAR_3->setmode)
  return (VAR_3->setmode(VAR_0, VAR_1, VAR_2));
 else
  return (FUNC_0(VAR_0, VAR_1, VAR_2));
}
