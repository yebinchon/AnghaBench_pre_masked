
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_request {int flags; TYPE_1__* dma; int parent; } ;
struct TYPE_4__ {int flags; } ;
struct ata_channel {TYPE_2__ dma; } ;
struct TYPE_3__ {int sg_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ata_request*,char*) ;
 int VAR_7 ;
 int FUNC_1 (struct ata_channel*,int ) ;
 int FUNC_2 (struct ata_channel*,int ,int) ;
 int FUNC_3 (struct ata_channel*,int ,int ) ;
 int VAR_8 ;
 struct ata_channel* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(struct ata_request *VAR_9)
{
    struct ata_channel *VAR_10 = FUNC_4(VAR_9->parent);

    FUNC_0(VAR_9, "dmastart");

    FUNC_2(VAR_10, VAR_6, (FUNC_1(VAR_10, VAR_6) |
   (VAR_5 | VAR_4)));
    FUNC_3(VAR_10, VAR_3, VAR_9->dma->sg_bus);
    VAR_10->dma.flags |= VAR_7;
    FUNC_2(VAR_10, VAR_0,
   (FUNC_1(VAR_10, VAR_0) & ~VAR_2) |
   ((VAR_9->flags & VAR_8) ? VAR_2 : 0)|
   VAR_1);
    return 0;
}
