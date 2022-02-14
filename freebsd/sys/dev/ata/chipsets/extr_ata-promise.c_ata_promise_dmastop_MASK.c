
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_request {int flags; int parent; } ;
struct ata_pci_controller {int r_res1; } ;
struct TYPE_2__ {int flags; } ;
struct ata_channel {TYPE_1__ dma; scalar_t__ unit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ata_channel*,int ) ;
 int FUNC_1 (struct ata_channel*,int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int ) ;
 int VAR_6 ;
 int FUNC_5 (int ) ;
 void* FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(struct ata_request *VAR_7)
{
    struct ata_pci_controller *VAR_8=FUNC_6(FUNC_5(VAR_7->parent));
    struct ata_channel *VAR_9 = FUNC_6(VAR_7->parent);
    int VAR_10;

    if (VAR_7->flags & VAR_6) {
 FUNC_3(VAR_8->r_res1, 0x11,
   FUNC_2(VAR_8->r_res1, 0x11) & ~(VAR_9->unit ? 0x08 : 0x02));
 FUNC_4(VAR_8->r_res1, VAR_9->unit ? 0x24 : 0x20, 0);
    }
    VAR_10 = FUNC_0(VAR_9, VAR_4);
    FUNC_1(VAR_9, VAR_0,
   FUNC_0(VAR_9, VAR_0) & ~VAR_1);
    FUNC_1(VAR_9, VAR_4, VAR_3 | VAR_2);
    VAR_9->dma.flags &= ~VAR_5;
    return VAR_10;
}
