
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_dmaslot {int data_map; int data_tag; int sg_bus; int sg; int sg_map; int sg_tag; } ;
struct ata_dc_cb_args {int maddr; scalar_t__ error; } ;
struct TYPE_2__ {int dma_slots; int segsize; int max_iosize; int max_address; int boundary; int alignment; int dmatag; struct ata_dmaslot* slot; } ;
struct ata_channel {int dev; TYPE_1__ dma; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int ,struct ata_dc_cb_args*,int ) ;
 scalar_t__ FUNC_4 (int ,void**,int ,int *) ;
 int FUNC_5 (struct ata_dmaslot*,int) ;
 struct ata_channel* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static void
FUNC_8(device_t VAR_8)
{
    struct ata_channel *VAR_9 = FUNC_6(VAR_8);
    struct ata_dc_cb_args VAR_10;
    int VAR_11;


    FUNC_5(VAR_9->dma.slot, sizeof(struct ata_dmaslot) * VAR_1);
    for (VAR_11 = 0; VAR_11 < VAR_9->dma.dma_slots; VAR_11++) {
 struct ata_dmaslot *VAR_12 = &VAR_9->dma.slot[VAR_11];

 if (FUNC_1(VAR_9->dma.dmatag, VAR_6, VAR_6,
          VAR_9->dma.max_address, VAR_4,
          ((void*)0), ((void*)0), VAR_6, 1, VAR_6,
          0, ((void*)0), ((void*)0), &VAR_12->sg_tag)) {
            FUNC_7(VAR_9->dev, "FAILURE - create sg_tag\n");
            goto error;
 }

 if (FUNC_4(VAR_12->sg_tag, (void **)&VAR_12->sg, VAR_3,
        &VAR_12->sg_map)) {
     FUNC_7(VAR_9->dev, "FAILURE - alloc sg_map\n");
     goto error;
        }

 if (FUNC_3(VAR_12->sg_tag, VAR_12->sg_map, VAR_12->sg, VAR_5,
       VAR_7, &VAR_10, 0) || VAR_10.error) {
     FUNC_7(VAR_9->dev, "FAILURE - load sg\n");
     goto error;
 }
 VAR_12->sg_bus = VAR_10.maddr;

 if (FUNC_1(VAR_9->dma.dmatag,
          VAR_9->dma.alignment, VAR_9->dma.boundary,
                               VAR_9->dma.max_address, VAR_4,
                               ((void*)0), ((void*)0), VAR_9->dma.max_iosize,
                               VAR_0, VAR_9->dma.segsize,
                               VAR_2, ((void*)0), ((void*)0), &VAR_12->data_tag)) {
     FUNC_7(VAR_9->dev, "FAILURE - create data_tag\n");
     goto error;
 }

 if (FUNC_2(VAR_12->data_tag, 0, &VAR_12->data_map)) {
     FUNC_7(VAR_9->dev, "FAILURE - create data_map\n");
     goto error;
        }
    }

    return;

error:
    FUNC_7(VAR_8, "WARNING - DMA allocation failed, disabling DMA\n");
    FUNC_0(VAR_8);
}
