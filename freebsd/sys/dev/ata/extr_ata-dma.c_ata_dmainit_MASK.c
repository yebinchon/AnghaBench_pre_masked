
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ata_dc_cb_args {int maddr; scalar_t__ error; } ;
struct TYPE_2__ {int alignment; int boundary; int segsize; scalar_t__ max_iosize; scalar_t__ max_address; int dma_slots; int work_bus; int work_map; int work; int work_tag; int dmatag; int * unload; int * load; int * setprd; int * free; int * alloc; } ;
struct ata_channel {TYPE_1__ dma; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int VAR_7 ;
 int * VAR_8 ;
 int FUNC_1 (int ) ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int VAR_12 ;
 int * VAR_13 ;
 scalar_t__ FUNC_2 (int ,int,int,scalar_t__,int ,int *,int *,scalar_t__,int,scalar_t__,int ,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,scalar_t__,int ,struct ata_dc_cb_args*,int ) ;
 scalar_t__ FUNC_4 (int ,void**,int,int *) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 struct ata_channel* FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;

void
FUNC_9(device_t VAR_14)
{
    struct ata_channel *VAR_15 = FUNC_7(VAR_14);
    struct ata_dc_cb_args VAR_16;

    if (VAR_15->dma.alloc == ((void*)0))
 VAR_15->dma.alloc = VAR_8;
    if (VAR_15->dma.free == ((void*)0))
 VAR_15->dma.free = VAR_9;
    if (VAR_15->dma.setprd == ((void*)0))
 VAR_15->dma.setprd = VAR_11;
    if (VAR_15->dma.load == ((void*)0))
 VAR_15->dma.load = VAR_10;
    if (VAR_15->dma.unload == ((void*)0))
 VAR_15->dma.unload = VAR_13;
    if (VAR_15->dma.alignment == 0)
 VAR_15->dma.alignment = 2;
    if (VAR_15->dma.boundary == 0)
 VAR_15->dma.boundary = 65536;
    if (VAR_15->dma.segsize == 0)
 VAR_15->dma.segsize = 65536;
    if (VAR_15->dma.max_iosize == 0)
 VAR_15->dma.max_iosize = FUNC_0((VAR_0 - 1) * VAR_7, VAR_5);
    if (VAR_15->dma.max_address == 0)
 VAR_15->dma.max_address = VAR_4;
    if (VAR_15->dma.dma_slots == 0)
 VAR_15->dma.dma_slots = 1;

    if (FUNC_2(FUNC_6(VAR_14), VAR_15->dma.alignment, 0,
      VAR_15->dma.max_address, VAR_3,
      ((void*)0), ((void*)0), VAR_15->dma.max_iosize,
      VAR_0, VAR_15->dma.segsize,
      0, ((void*)0), ((void*)0), &VAR_15->dma.dmatag))
 goto error;

    if (FUNC_2(VAR_15->dma.dmatag, VAR_7, 64 * 1024,
      VAR_15->dma.max_address, VAR_3,
      ((void*)0), ((void*)0), VAR_6, 1, VAR_6,
      0, ((void*)0), ((void*)0), &VAR_15->dma.work_tag))
 goto error;

    if (FUNC_4(VAR_15->dma.work_tag, (void **)&VAR_15->dma.work,
    VAR_2 | VAR_1,
    &VAR_15->dma.work_map))
 goto error;

    if (FUNC_3(VAR_15->dma.work_tag, VAR_15->dma.work_map, VAR_15->dma.work,
   VAR_6, VAR_12, &VAR_16, 0) ||
   VAR_16.error) {
 FUNC_5(VAR_15->dma.work_tag, VAR_15->dma.work, VAR_15->dma.work_map);
 goto error;
    }
    VAR_15->dma.work_bus = VAR_16.maddr;
    return;

error:
    FUNC_8(VAR_14, "WARNING - DMA initialization failed, disabling DMA\n");
    FUNC_1(VAR_14);
}
