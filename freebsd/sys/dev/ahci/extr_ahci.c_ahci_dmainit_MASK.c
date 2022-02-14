
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ahci_dc_cb_args {int error; int maddr; } ;
struct TYPE_2__ {int data_tag; int rfis_bus; int rfis_map; int rfis; int rfis_tag; int work_bus; int work_map; int work; int work_tag; } ;
struct ahci_channel {int chcaps; size_t numslots; TYPE_1__ dma; int mtx; } ;
typedef int device_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int ) ;
 int VAR_8 ;
 int FUNC_1 (int ,int,int ,int ,int ,int *,int *,size_t,size_t,size_t,int ,int *,int *,int *) ;
 int FUNC_2 (int ,int ,int ,size_t,int ,struct ahci_dc_cb_args*,int ) ;
 int FUNC_3 (int ,void**,int ,int *) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int * VAR_9 ;
 struct ahci_channel* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int) ;

__attribute__((used)) static void
FUNC_8(device_t VAR_10)
{
 struct ahci_channel *VAR_11 = FUNC_6(VAR_10);
 struct ahci_dc_cb_args VAR_12;
 size_t VAR_13;
 int VAR_14;


 VAR_14 = FUNC_1(FUNC_5(VAR_10), 1024, 0,
     VAR_6, VAR_6,
     ((void*)0), ((void*)0), VAR_3, 1, VAR_3,
     0, ((void*)0), ((void*)0), &VAR_11->dma.work_tag);
 if (VAR_14 != 0)
  goto error;
 VAR_14 = FUNC_3(VAR_11->dma.work_tag, (void **)&VAR_11->dma.work,
     VAR_5, &VAR_11->dma.work_map);
 if (VAR_14 != 0)
  goto error;
 VAR_14 = FUNC_2(VAR_11->dma.work_tag, VAR_11->dma.work_map, VAR_11->dma.work,
     VAR_3, VAR_8, &VAR_12, VAR_4);
 if (VAR_14 != 0 || (VAR_14 = VAR_12.error) != 0) {
  FUNC_4(VAR_11->dma.work_tag, VAR_11->dma.work, VAR_11->dma.work_map);
  goto error;
 }
 VAR_11->dma.work_bus = VAR_12.maddr;

 if (VAR_11->chcaps & VAR_1)
     VAR_13 = 4096;
 else
     VAR_13 = 256;
 VAR_14 = FUNC_1(FUNC_5(VAR_10), VAR_13, 0,
     VAR_6, VAR_6,
     ((void*)0), ((void*)0), VAR_13, 1, VAR_13,
     0, ((void*)0), ((void*)0), &VAR_11->dma.rfis_tag);
 if (VAR_14 != 0)
  goto error;
 VAR_14 = FUNC_3(VAR_11->dma.rfis_tag, (void **)&VAR_11->dma.rfis, 0,
     &VAR_11->dma.rfis_map);
 if (VAR_14 != 0)
  goto error;
 VAR_14 = FUNC_2(VAR_11->dma.rfis_tag, VAR_11->dma.rfis_map, VAR_11->dma.rfis,
     VAR_13, VAR_8, &VAR_12, VAR_4);
 if (VAR_14 != 0 || (VAR_14 = VAR_12.error) != 0) {
  FUNC_4(VAR_11->dma.rfis_tag, VAR_11->dma.rfis, VAR_11->dma.rfis_map);
  goto error;
 }
 VAR_11->dma.rfis_bus = VAR_12.maddr;

 VAR_14 = FUNC_1(FUNC_5(VAR_10), 2, 0,
     VAR_6, VAR_6,
     ((void*)0), ((void*)0),
     VAR_2 * VAR_7 * VAR_11->numslots,
     VAR_2, VAR_0,
     0, VAR_9, &VAR_11->mtx, &VAR_11->dma.data_tag);
 if (VAR_14 != 0)
  goto error;
 return;

error:
 FUNC_7(VAR_10, "WARNING - DMA initialization failed, error %d\n",
     VAR_14);
 FUNC_0(VAR_10);
}
