
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_pci_controller {struct ali_sata_resources* chipset_data; TYPE_1__* chip; } ;
struct ali_sata_resources {int ** bars; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ cfg2; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 struct ata_pci_controller* FUNC_2 (int ) ;
 int FUNC_3 (struct ali_sata_resources*,int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_3)
{
 struct ata_pci_controller *VAR_4 = FUNC_2(VAR_3);
 struct ali_sata_resources *VAR_5;
 int VAR_6;

 if (VAR_4->chip->cfg2 == VAR_0) {
  VAR_5 = VAR_4->chipset_data;
  for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
   if (VAR_5->bars[VAR_6] != ((void*)0)) {
    FUNC_1(VAR_3, VAR_2,
        FUNC_0(VAR_6), VAR_5->bars[VAR_6]);
   }
  }
  FUNC_3(VAR_5, VAR_1);
  VAR_4->chipset_data = ((void*)0);
 }
 return (0);
}
