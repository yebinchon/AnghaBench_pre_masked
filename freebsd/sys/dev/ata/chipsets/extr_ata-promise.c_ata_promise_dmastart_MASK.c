
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_request {int flags; int bytecount; TYPE_1__* dma; int parent; } ;
struct ata_pci_controller {int r_res1; } ;
struct TYPE_4__ {int flags; } ;
struct ata_channel {TYPE_2__ dma; scalar_t__ unit; } ;
struct TYPE_3__ {int sg_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ata_channel*,int ) ;
 int FUNC_1 (struct ata_channel*,int ,int) ;
 int FUNC_2 (struct ata_channel*,int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int,int) ;
 int FUNC_5 (int ,int,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ) ;
 void* FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(struct ata_request *VAR_10)
{
    struct ata_pci_controller *VAR_11=FUNC_7(FUNC_6(VAR_10->parent));
    struct ata_channel *VAR_12 = FUNC_7(VAR_10->parent);

    if (VAR_10->flags & VAR_8) {
 FUNC_4(VAR_11->r_res1, 0x11,
   FUNC_3(VAR_11->r_res1, 0x11) | (VAR_12->unit ? 0x08 : 0x02));
 FUNC_5(VAR_11->r_res1, VAR_12->unit ? 0x24 : 0x20,
   ((VAR_10->flags & VAR_9) ? 0x05000000 : 0x06000000) |
   (VAR_10->bytecount >> 1));
    }
    FUNC_1(VAR_12, VAR_6, (FUNC_0(VAR_12, VAR_6) |
   (VAR_5 | VAR_4)));
    FUNC_2(VAR_12, VAR_3, VAR_10->dma->sg_bus);
    FUNC_1(VAR_12, VAR_0,
   ((VAR_10->flags & VAR_9) ? VAR_2 : 0) |
   VAR_1);
    VAR_12->dma.flags |= VAR_7;
    return 0;
}
