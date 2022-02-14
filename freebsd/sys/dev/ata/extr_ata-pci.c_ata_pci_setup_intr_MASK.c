
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {int dummy; } ;
struct ata_pci_controller {TYPE_1__* interrupt; scalar_t__ legacy; } ;
struct ata_channel {int unit; } ;
typedef int driver_intr_t ;
typedef int driver_filter_t ;
typedef int device_t ;
struct TYPE_2__ {void* argument; int * function; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct resource*,int,int *,int *,void*,void**) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 struct ata_pci_controller* FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

int
FUNC_5(device_t VAR_3, device_t VAR_4, struct resource *VAR_5,
     int VAR_6, driver_filter_t *VAR_7, driver_intr_t *VAR_8,
     void *VAR_9, void **VAR_10)
{
 struct ata_pci_controller *VAR_11 = FUNC_3(VAR_3);

 if (VAR_11->legacy) {
  return FUNC_0(FUNC_2(VAR_3), VAR_4, VAR_5,
         VAR_6, VAR_7, VAR_8, VAR_9, VAR_10);
 } else {
  struct ata_pci_controller *VAR_12 = FUNC_3(VAR_3);
  int VAR_13;

      if (VAR_7 != ((void*)0)) {
   FUNC_4("ata-pci.c: we cannot use a filter here\n");
   return (VAR_1);
  }
  if (FUNC_1(VAR_4) == VAR_2)
   VAR_13 = ((struct ata_channel *)FUNC_3(VAR_4))->unit;
  else
   VAR_13 = VAR_0 - 1;
  VAR_12->interrupt[VAR_13].function = VAR_8;
  VAR_12->interrupt[VAR_13].argument = VAR_9;
  *VAR_10 = VAR_12;
  return 0;
 }
}
