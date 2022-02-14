
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct nvme_tracker {TYPE_4__* qpair; int payload_dma_map; TYPE_2__* req; void** prp; scalar_t__ prp_bus_addr; } ;
struct TYPE_8__ {scalar_t__ ds_addr; } ;
typedef TYPE_3__ bus_dma_segment_t ;
struct TYPE_9__ {int dma_tag_payload; int ctrlr; } ;
struct TYPE_6__ {void* prp2; void* prp1; } ;
struct TYPE_7__ {TYPE_1__ cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 void* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (TYPE_4__*,struct nvme_tracker*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_2, bus_dma_segment_t *VAR_3, int VAR_4, int VAR_5)
{
 struct nvme_tracker *VAR_6 = VAR_2;
 uint32_t VAR_7;






 if (VAR_5 != 0) {
  FUNC_2(VAR_6->qpair->ctrlr,
      "nvme_payload_map err %d\n", VAR_5);
  return;
 }







 VAR_6->req->cmd.prp1 = FUNC_1(VAR_3[0].ds_addr);

 if (VAR_4 == 2) {
  VAR_6->req->cmd.prp2 = FUNC_1(VAR_3[1].ds_addr);
 } else if (VAR_4 > 2) {
  VAR_7 = 1;
  VAR_6->req->cmd.prp2 = FUNC_1((uint64_t)VAR_6->prp_bus_addr);
  while (VAR_7 < VAR_4) {
   VAR_6->prp[VAR_7-1] =
       FUNC_1((uint64_t)VAR_3[VAR_7].ds_addr);
   VAR_7++;
  }
 } else {





  VAR_6->req->cmd.prp2 = 0;
 }

 FUNC_0(VAR_6->qpair->dma_tag_payload, VAR_6->payload_dma_map,
     VAR_0 | VAR_1);
 FUNC_3(VAR_6->qpair, VAR_6);
}
