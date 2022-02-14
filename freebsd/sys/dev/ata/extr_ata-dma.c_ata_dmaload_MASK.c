
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ata_request {int bytecount; int flags; TYPE_2__* dma; int parent; int data; int ccb; } ;
struct ata_dmasetprd_args {int error; int nsegs; void* dmatab; } ;
struct TYPE_3__ {int alignment; int max_iosize; int setprd; TYPE_2__* slot; } ;
struct ata_channel {TYPE_1__ dma; } ;
struct TYPE_4__ {int data_map; int data_tag; int sg_map; int sg_tag; void* sg; } ;


 int FUNC_0 (struct ata_request*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ata_request*) ;
 int FUNC_2 (int ,int ,int ,int,int ,struct ata_dmasetprd_args*,int ) ;
 int FUNC_3 (int ,int ,int ,int ,struct ata_dmasetprd_args*,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 struct ata_channel* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_7(struct ata_request *VAR_6, void *VAR_7, int *VAR_8)
{
    struct ata_channel *VAR_9 = FUNC_5(VAR_6->parent);
    struct ata_dmasetprd_args VAR_10;
    int VAR_11;

    FUNC_0(VAR_6, "dmaload");

    if (VAR_6->dma) {
 FUNC_6(VAR_6->parent,
        "FAILURE - already active DMA on this device\n");
 return VAR_5;
    }
    if (!VAR_6->bytecount) {
 FUNC_6(VAR_6->parent,
        "FAILURE - zero length DMA transfer attempted\n");
 return VAR_5;
    }
    if (VAR_6->bytecount & (VAR_9->dma.alignment - 1)) {
 FUNC_6(VAR_6->parent,
        "FAILURE - odd-sized DMA transfer attempt %d %% %d\n",
        VAR_6->bytecount, VAR_9->dma.alignment);
 return VAR_5;
    }
    if (VAR_6->bytecount > VAR_9->dma.max_iosize) {
 FUNC_6(VAR_6->parent,
        "FAILURE - oversized DMA transfer attempt %d > %d\n",
        VAR_6->bytecount, VAR_9->dma.max_iosize);
 return VAR_5;
    }


    VAR_6->dma = &VAR_9->dma.slot[0];

    if (VAR_7)
 VAR_10.dmatab = VAR_7;
    else
 VAR_10.dmatab = VAR_6->dma->sg;

    if (VAR_6->flags & VAR_0)
        VAR_11 = FUNC_3(VAR_6->dma->data_tag,
    VAR_6->dma->data_map, VAR_6->ccb,
    VAR_9->dma.setprd, &VAR_10, VAR_4);
    else
        VAR_11 = FUNC_2(VAR_6->dma->data_tag, VAR_6->dma->data_map,
    VAR_6->data, VAR_6->bytecount,
    VAR_9->dma.setprd, &VAR_10, VAR_4);
    if (VAR_11 || (VAR_11 = VAR_10.error)) {
 FUNC_6(VAR_6->parent, "FAILURE - load data\n");
 goto error;
    }

    if (VAR_8)
 *VAR_8 = VAR_10.nsegs;

    FUNC_4(VAR_6->dma->sg_tag, VAR_6->dma->sg_map,
      VAR_3);
    FUNC_4(VAR_6->dma->data_tag, VAR_6->dma->data_map,
      (VAR_6->flags & VAR_1) ?
      VAR_2 : VAR_3);
    return 0;

error:
    FUNC_1(VAR_6);
    return VAR_5;
}
