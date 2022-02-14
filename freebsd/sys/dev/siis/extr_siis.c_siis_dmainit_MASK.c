
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct siis_dc_cb_args {int maddr; scalar_t__ error; } ;
struct TYPE_2__ {int data_tag; int work_bus; int work_map; int work; int work_tag; } ;
struct siis_channel {TYPE_1__ dma; int mtx; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int,int ,struct siis_dc_cb_args*,int ) ;
 scalar_t__ FUNC_2 (int ,void**,int ,int *) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int * VAR_5 ;
 struct siis_channel* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_8(device_t VAR_7)
{
 struct siis_channel *VAR_8 = FUNC_5(VAR_7);
 struct siis_dc_cb_args VAR_9;


 if (FUNC_0(FUNC_4(VAR_7), 1024, 0,
     VAR_0, VAR_0,
     ((void*)0), ((void*)0), VAR_4, 1, VAR_4,
     0, ((void*)0), ((void*)0), &VAR_8->dma.work_tag))
  goto error;
 if (FUNC_2(VAR_8->dma.work_tag, (void **)&VAR_8->dma.work, 0,
     &VAR_8->dma.work_map))
  goto error;
 if (FUNC_1(VAR_8->dma.work_tag, VAR_8->dma.work_map, VAR_8->dma.work,
     VAR_4, VAR_6, &VAR_9, 0) || VAR_9.error) {
  FUNC_3(VAR_8->dma.work_tag, VAR_8->dma.work, VAR_8->dma.work_map);
  goto error;
 }
 VAR_8->dma.work_bus = VAR_9.maddr;

 if (FUNC_0(FUNC_4(VAR_7), 1, 0,
     VAR_0, VAR_0,
     ((void*)0), ((void*)0),
     VAR_3 * VAR_1 * VAR_2,
     VAR_3, 0xFFFFFFFF,
     0, VAR_5, &VAR_8->mtx, &VAR_8->dma.data_tag)) {
  goto error;
 }
 return;

error:
 FUNC_6(VAR_7, "WARNING - DMA initialization failed\n");
 FUNC_7(VAR_7);
}
