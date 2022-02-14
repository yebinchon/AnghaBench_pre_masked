
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_pci_controller {int legacy; } ;
struct TYPE_2__ {int flags; } ;
struct ata_channel {int flags; TYPE_1__ dma; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ata_channel*,int ) ;
 int FUNC_1 (struct ata_channel*,int ,int) ;
 int VAR_7 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 scalar_t__ VAR_8 ;

int
FUNC_5(device_t VAR_9)
{
    struct ata_pci_controller *VAR_10 =
 FUNC_4(FUNC_3(VAR_9));
    struct ata_channel *VAR_11 = FUNC_4(VAR_9);

    if ((VAR_8 || !VAR_10->legacy) &&
 ((VAR_11->flags & VAR_1) ||
  (VAR_11->dma.flags & VAR_6))) {
 int VAR_12 = FUNC_0(VAR_11, VAR_5) & VAR_4;

 if ((VAR_12 & VAR_3) == 0)
     return 0;
 FUNC_1(VAR_11, VAR_5, VAR_12 & ~VAR_2);
 FUNC_2(1);
    }
    if (FUNC_0(VAR_11, VAR_0) & VAR_7) {
 FUNC_2(100);
 if (FUNC_0(VAR_11, VAR_0) & VAR_7)
     return 0;
    }
    return 1;
}
