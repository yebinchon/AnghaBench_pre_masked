
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_pci_controller {TYPE_1__* chip; } ;
struct ata_channel {int dummy; } ;
typedef int device_t ;
struct TYPE_2__ {int max_dma; } ;


 int VAR_0 ;
 int FUNC_0 (struct ata_channel*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_3, int VAR_4, int VAR_5)
{
 struct ata_pci_controller *VAR_6 = FUNC_3(FUNC_2(VAR_3));
 struct ata_channel *VAR_7 = FUNC_3(VAR_3);

 VAR_5 = FUNC_4(VAR_5, VAR_6->chip->max_dma);

 if (VAR_2 && VAR_5 > VAR_1 &&
     FUNC_0(VAR_7, VAR_0) & 0x01) {
  FUNC_1(VAR_3, "controller");
  VAR_5 = VAR_1;
 }

 return (VAR_5);
}
