
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int hw; } ;
typedef TYPE_1__ ocs_t ;
struct TYPE_18__ {TYPE_1__* ocs; } ;
typedef TYPE_2__ ocs_node_t ;
struct TYPE_19__ {int seq_init; int init_task_tag; int transferred; } ;
typedef TYPE_3__ ocs_io_t ;
typedef int ocs_hw_t ;
struct TYPE_20__ {TYPE_5__* payload; TYPE_5__* hio; int status; } ;
typedef TYPE_4__ ocs_hw_sequence_t ;
struct TYPE_22__ {int len; } ;
struct TYPE_21__ {int indicator; TYPE_6__ dma; TYPE_3__* ul_io; } ;
typedef TYPE_5__ ocs_hw_io_t ;
typedef TYPE_6__ ocs_dma_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*,int) ;
 int FUNC_1 (int *,TYPE_5__*) ;
 int FUNC_2 (int *,TYPE_4__*) ;
 int FUNC_3 (TYPE_1__*,char*,int ,...) ;
 int FUNC_4 (TYPE_1__*,TYPE_5__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int ,int *,int ,int ,TYPE_6__*,int ) ;

__attribute__((used)) static int32_t
FUNC_6(ocs_node_t *VAR_2, ocs_hw_sequence_t *VAR_3)
{
 ocs_t *VAR_4 = VAR_2->ocs;
 ocs_hw_t *VAR_5 = &VAR_4->hw;
 ocs_hw_io_t *VAR_6 = VAR_3->hio;
 ocs_io_t *VAR_7;
 ocs_dma_t VAR_8[1];

 FUNC_0(VAR_3->payload, -1);
 FUNC_0(VAR_6, -1);

 VAR_7 = VAR_6->ul_io;
 if (VAR_7 == ((void*)0)) {
  FUNC_3(VAR_4, "data received for NULL io, xri=0x%x\n",
       VAR_6->indicator);
  return -1;
 }





 if (!FUNC_1(VAR_5, VAR_3->hio)) {
  FUNC_3(VAR_4, "data received for host owned XRI, xri=0x%x\n",
       VAR_6->indicator);
  return -1;
 }


 if (VAR_3->status != VAR_0) {
  FUNC_3(VAR_4, "data with status 0x%x received, xri=0x%x\n",
       VAR_3->status, VAR_6->indicator);






  FUNC_4(VAR_4, VAR_3->hio);





  FUNC_5(VAR_7, 0, ((void*)0), 0, VAR_1, ((void*)0), 0);
  return -1;
 }


 VAR_7->seq_init = 1;


 VAR_8[0] = VAR_3->payload->dma;


 VAR_7->transferred = VAR_3->payload->dma.len;

 if (FUNC_5(VAR_7, 0, ((void*)0), 0, 0,
       VAR_8, VAR_7->transferred)) {
  FUNC_3(VAR_4, "error passing first burst, xri=0x%x, oxid=0x%x\n",
       VAR_6->indicator, VAR_7->init_task_tag);
 }


 FUNC_2(&VAR_4->hw, VAR_3);
 return 0;
}
