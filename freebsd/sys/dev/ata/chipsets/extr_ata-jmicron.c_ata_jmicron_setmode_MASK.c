
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_pci_controller {TYPE_1__* chip; } ;
typedef int device_t ;
struct TYPE_2__ {int max_dma; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 struct ata_pci_controller* FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int,int) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2, int VAR_3, int VAR_4)
{
 device_t VAR_5 = FUNC_1(VAR_2);
 struct ata_pci_controller *VAR_6 = FUNC_2(VAR_5);

 VAR_4 = FUNC_3(VAR_4, VAR_6->chip->max_dma);

 if (VAR_1 && VAR_4 > VAR_0 &&
     FUNC_4(VAR_5, 0x40, 1) & 0x08) {
  FUNC_0(VAR_2, "controller");
  VAR_4 = VAR_0;
 }

 return (VAR_4);
}
