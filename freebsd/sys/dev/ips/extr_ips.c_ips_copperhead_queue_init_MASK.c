
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* copper_queue; int dev; int adapter_dmatag; } ;
typedef TYPE_1__ ips_softc_t ;
typedef int ips_copper_queue_t ;
typedef int bus_dmamap_t ;
typedef int bus_dma_tag_t ;
struct TYPE_8__ {int nextstatus; scalar_t__ base_phys_addr; int * status; int dmamap; int dmatag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,int,int ,int ,int ,int *,int *,int,int,int,int ,int *,int *,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,int,int ,TYPE_4__*,int ) ;
 scalar_t__ FUNC_3 (int ,void*,int ,int *) ;
 int FUNC_4 (int ,TYPE_4__*,int ) ;
 int FUNC_5 (TYPE_4__*,int) ;
 int FUNC_6 (int ,char*) ;
 int VAR_9 ;
 int FUNC_7 (TYPE_1__*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(ips_softc_t *VAR_10)
{
 int VAR_11;
 bus_dma_tag_t VAR_12;
 bus_dmamap_t VAR_13;
        if (FUNC_0( VAR_10->adapter_dmatag,
                    1,
                    0,
                    VAR_2,
                    VAR_1,
                    ((void*)0),
                    ((void*)0),
                    sizeof(ips_copper_queue_t),
                    1,
                    sizeof(ips_copper_queue_t),
                    0,
                    ((void*)0),
                    ((void*)0),
    &VAR_12) != 0) {
                FUNC_6(VAR_10->dev, "can't alloc dma tag for statue queue\n");
  VAR_11 = VAR_7;
  return VAR_11;
        }
 if(FUNC_3(VAR_12, (void *)&(VAR_10->copper_queue),
          VAR_0, &VAR_13)){
  VAR_11 = VAR_7;
  goto exit;
 }
 FUNC_5(VAR_10->copper_queue, sizeof(ips_copper_queue_t));
 VAR_10->copper_queue->dmatag = VAR_12;
 VAR_10->copper_queue->dmamap = VAR_13;
 VAR_10->copper_queue->nextstatus = 1;
 FUNC_2(VAR_12, VAR_13,
   &(VAR_10->copper_queue->status[0]), VAR_8 * 4,
   VAR_9, VAR_10->copper_queue,
   VAR_0);
 if(VAR_10->copper_queue->base_phys_addr == 0){
  VAR_11 = VAR_7;
  goto exit;
 }
 FUNC_7(VAR_10, VAR_5, VAR_10->copper_queue->base_phys_addr);
 FUNC_7(VAR_10, VAR_3, VAR_10->copper_queue->base_phys_addr +
      VAR_8 * 4);
 FUNC_7(VAR_10, VAR_4, VAR_10->copper_queue->base_phys_addr + 4);
 FUNC_7(VAR_10, VAR_6, VAR_10->copper_queue->base_phys_addr);


 return 0;
exit:
 if (VAR_10->copper_queue != ((void*)0))
  FUNC_4(VAR_12, VAR_10->copper_queue, VAR_13);
 FUNC_1(VAR_12);
 return VAR_11;
}
