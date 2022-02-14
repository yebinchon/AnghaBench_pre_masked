
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvs_dc_cb_args {int maddr; scalar_t__ error; } ;
struct TYPE_2__ {int data_tag; int workrp_bus; int workrp_map; int workrp; int workrp_tag; int workrq_bus; int workrq_map; int workrq; int workrq_tag; } ;
struct mvs_channel {TYPE_1__ dma; int mtx; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int,int,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int,int ,struct mvs_dc_cb_args*,int ) ;
 scalar_t__ FUNC_2 (int ,void**,int ,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int * VAR_7 ;
 struct mvs_channel* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_8(device_t VAR_9)
{
 struct mvs_channel *VAR_10 = FUNC_5(VAR_9);
 struct mvs_dc_cb_args VAR_11;


 if (FUNC_0(FUNC_4(VAR_9), 1024, 0,
     VAR_0, VAR_0,
     ((void*)0), ((void*)0), VAR_5, 1, VAR_5,
     0, ((void*)0), ((void*)0), &VAR_10->dma.workrq_tag))
  goto error;
 if (FUNC_2(VAR_10->dma.workrq_tag, (void **)&VAR_10->dma.workrq, 0,
     &VAR_10->dma.workrq_map))
  goto error;
 if (FUNC_1(VAR_10->dma.workrq_tag, VAR_10->dma.workrq_map,
     VAR_10->dma.workrq, VAR_5, VAR_8, &VAR_11, 0) ||
     VAR_11.error) {
  FUNC_3(VAR_10->dma.workrq_tag,
      VAR_10->dma.workrq, VAR_10->dma.workrq_map);
  goto error;
 }
 VAR_10->dma.workrq_bus = VAR_11.maddr;

 if (FUNC_0(FUNC_4(VAR_9), 256, 0,
     VAR_0, VAR_0,
     ((void*)0), ((void*)0), VAR_4, 1, VAR_4,
     0, ((void*)0), ((void*)0), &VAR_10->dma.workrp_tag))
  goto error;
 if (FUNC_2(VAR_10->dma.workrp_tag, (void **)&VAR_10->dma.workrp, 0,
     &VAR_10->dma.workrp_map))
  goto error;
 if (FUNC_1(VAR_10->dma.workrp_tag, VAR_10->dma.workrp_map,
     VAR_10->dma.workrp, VAR_4, VAR_8, &VAR_11, 0) ||
     VAR_11.error) {
  FUNC_3(VAR_10->dma.workrp_tag,
      VAR_10->dma.workrp, VAR_10->dma.workrp_map);
  goto error;
 }
 VAR_10->dma.workrp_bus = VAR_11.maddr;

 if (FUNC_0(FUNC_4(VAR_9), 2, VAR_1,
     VAR_0, VAR_0,
     ((void*)0), ((void*)0),
     VAR_3 * VAR_6 * VAR_2,
     VAR_3, VAR_1,
     0, VAR_7, &VAR_10->mtx, &VAR_10->dma.data_tag)) {
  goto error;
 }
 return;

error:
 FUNC_6(VAR_9, "WARNING - DMA initialization failed\n");
 FUNC_7(VAR_9);
}
