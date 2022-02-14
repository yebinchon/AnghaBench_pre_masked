
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ata_pci_controller {scalar_t__ chipset_data; } ;
struct ata_channel {int unit; int flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2)
{
 struct ata_pci_controller *VAR_3 = FUNC_2(FUNC_1(VAR_2));
 struct ata_channel *VAR_4 = FUNC_2(VAR_2);
 uint8_t VAR_5 = (uint8_t)(uintptr_t)VAR_3->chipset_data;


 if (FUNC_0(VAR_2))
  return VAR_1;


 if (VAR_4->unit == ((VAR_5 & 0x10) >> 4))
  VAR_4->flags |= VAR_0;
 return (0);
}
