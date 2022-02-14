
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct ata_pci_controller {TYPE_1__* interrupt; scalar_t__ legacy; } ;
struct ata_channel {int unit; } ;
typedef int device_t ;
struct TYPE_2__ {int * argument; int * function; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct resource*,void*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct ata_pci_controller* FUNC_3 (int ) ;

int
FUNC_4(device_t VAR_2, device_t VAR_3, struct resource *VAR_4,
        void *VAR_5)
{
 struct ata_pci_controller *VAR_6 = FUNC_3(VAR_2);

        if (VAR_6->legacy) {
  return FUNC_0(FUNC_2(VAR_2), VAR_3, VAR_4, VAR_5);
 } else {
  struct ata_pci_controller *VAR_7 = FUNC_3(VAR_2);
  int VAR_8;

  if (FUNC_1(VAR_3) == VAR_1)
   VAR_8 = ((struct ata_channel *)FUNC_3(VAR_3))->unit;
  else
   VAR_8 = VAR_0 - 1;
  VAR_7->interrupt[VAR_8].function = ((void*)0);
  VAR_7->interrupt[VAR_8].argument = ((void*)0);
  return 0;
 }
}
