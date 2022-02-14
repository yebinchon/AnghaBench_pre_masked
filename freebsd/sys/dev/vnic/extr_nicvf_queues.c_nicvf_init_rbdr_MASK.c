
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rbdr_entry_t {int buf_addr; } ;
struct TYPE_2__ {int base; } ;
struct rbdr {int idx; int rbdr_taskq; int rbdr_task_nowait; int rbdr_task; int * rbdr_buff_dmaps; int rbdr_buff_dmat; struct nicvf* nic; int thresh; int enable; scalar_t__ dma_size; TYPE_1__ dmem; int desc; } ;
struct nicvf {int dev; } ;
typedef int bus_dmamap_t ;
typedef int bus_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct rbdr_entry_t* FUNC_0 (struct rbdr*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *,int ,int ,struct rbdr*) ;
 int VAR_12 ;
 int FUNC_2 (int ,scalar_t__,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int * FUNC_7 (int,int ,int) ;
 int FUNC_8 (struct nicvf*,TYPE_1__*,int,int,scalar_t__) ;
 int FUNC_9 (struct nicvf*,struct rbdr*,int ,int,int ,int*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (char*,int,int ,int *) ;
 int FUNC_12 (int *,int,int ,char*,int ) ;
 int VAR_15 ;

__attribute__((used)) static int
FUNC_13(struct nicvf *VAR_16, struct rbdr *VAR_17, int VAR_18,
    int VAR_19, int VAR_20)
{
 bus_dmamap_t VAR_21;
 bus_addr_t VAR_22;
 struct rbdr_entry_t *VAR_23;
 int VAR_24;
 int VAR_25;


 VAR_25 = FUNC_8(VAR_16, &VAR_17->dmem, VAR_18,
     sizeof(struct rbdr_entry_t), VAR_9);
 if (VAR_25 != 0) {
  FUNC_6(VAR_16->dev,
      "Failed to create RBDR descriptors ring\n");
  return (VAR_25);
 }

 VAR_17->desc = VAR_17->dmem.base;




 VAR_17->dma_size = VAR_19 - VAR_9;
 VAR_17->enable = VAR_12;
 VAR_17->thresh = VAR_11;
 VAR_17->nic = VAR_16;
 VAR_17->idx = VAR_20;
 if (VAR_19 > VAR_4) {
  FUNC_6(VAR_16->dev,
      "Buffer size to large for mbuf cluster\n");
  return (VAR_3);
 }
 VAR_25 = FUNC_2(
     FUNC_4(VAR_16->dev),
     VAR_9,
     0,
     VAR_0,
     VAR_1,
     ((void*)0), ((void*)0),
     FUNC_10(VAR_19, VAR_4),
     1,
     FUNC_10(VAR_19, VAR_4),
     0,
     ((void*)0), ((void*)0),
     &VAR_17->rbdr_buff_dmat);

 if (VAR_25 != 0) {
  FUNC_6(VAR_16->dev,
      "Failed to create busdma tag for RBDR buffers\n");
  return (VAR_25);
 }

 VAR_17->rbdr_buff_dmaps = FUNC_7(sizeof(*VAR_17->rbdr_buff_dmaps) *
     VAR_18, VAR_5, (VAR_6 | VAR_7));

 for (VAR_24 = 0; VAR_24 < VAR_18; VAR_24++) {
  VAR_25 = FUNC_3(VAR_17->rbdr_buff_dmat, 0, &VAR_21);
  if (VAR_25 != 0) {
   FUNC_6(VAR_16->dev,
       "Failed to create DMA map for RB\n");
   return (VAR_25);
  }
  VAR_17->rbdr_buff_dmaps[VAR_24] = VAR_21;

  VAR_25 = FUNC_9(VAR_16, VAR_17, VAR_21, VAR_6,
      VAR_2, &VAR_22);
  if (VAR_25 != 0)
   return (VAR_25);

  VAR_23 = FUNC_0(VAR_17, VAR_24);
  VAR_23->buf_addr = (VAR_22 >> VAR_8);
 }


 FUNC_1(&VAR_17->rbdr_task, 0, VAR_13, VAR_17);
 FUNC_1(&VAR_17->rbdr_task_nowait, 0, VAR_14, VAR_17);
 VAR_17->rbdr_taskq = FUNC_11("nicvf_rbdr_taskq", VAR_6,
     VAR_15, &VAR_17->rbdr_taskq);
 FUNC_12(&VAR_17->rbdr_taskq, 1, VAR_10, "%s: rbdr_taskq",
     FUNC_5(VAR_16->dev));

 return (0);
}
