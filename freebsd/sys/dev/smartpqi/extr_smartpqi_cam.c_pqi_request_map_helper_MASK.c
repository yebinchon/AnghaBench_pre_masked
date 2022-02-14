
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;


typedef union ccb {int dummy; } ccb ;
struct TYPE_19__ {int nseg; scalar_t__ data_dir; int req_pending; TYPE_11__* cm_ccb; int dvp; int status; int cm_datamap; TYPE_12__* sgt; TYPE_5__* softs; } ;
typedef TYPE_4__ rcb_t ;
struct TYPE_17__ {int pqi_buffer_dmat; } ;
struct TYPE_16__ {int max_sg_elem; } ;
struct TYPE_20__ {TYPE_2__ os_specific; TYPE_1__ pqi_cap; } ;
typedef TYPE_5__ pqisrc_softstate_t ;
struct TYPE_21__ {int ds_len; int ds_addr; } ;
typedef TYPE_6__ bus_dma_segment_t ;
struct TYPE_18__ {void* status; } ;
struct TYPE_15__ {scalar_t__ flags; int len; int addr; } ;
struct TYPE_14__ {TYPE_3__ ccb_h; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int ,char*,int,...) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_12__* FUNC_2 (TYPE_5__*,int) ;
 int FUNC_3 (TYPE_11__*) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_6 (union ccb*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_6, bus_dma_segment_t *VAR_7, int VAR_8, int VAR_9)
{
 pqisrc_softstate_t *VAR_10;
 rcb_t *VAR_11;

 VAR_11 = (rcb_t *)VAR_6;
 VAR_10 = VAR_11->softs;

 if( VAR_9 || VAR_8 > VAR_10->pqi_cap.max_sg_elem )
 {
  VAR_11->cm_ccb->ccb_h.status = VAR_2;
  FUNC_3(VAR_11->cm_ccb);
  FUNC_0(VAR_11->dvp, "map failed err = %d or nseg(%d) > sgelem(%d)\n",
   VAR_9, VAR_8, VAR_10->pqi_cap.max_sg_elem);
  FUNC_4(VAR_11);
  FUNC_6((union ccb *)VAR_11->cm_ccb);
  return;
 }

 VAR_11->sgt = FUNC_2(VAR_10, VAR_8 * sizeof(rcb_t));
 if (VAR_11->sgt == ((void*)0)) {
  VAR_11->cm_ccb->ccb_h.status = VAR_2;
  FUNC_3(VAR_11->cm_ccb);
  FUNC_0(VAR_11->dvp, "os_mem_alloc() failed; nseg = %d\n", VAR_8);
  FUNC_4(VAR_11);
  FUNC_6((union ccb *)VAR_11->cm_ccb);
  return;
 }

 VAR_11->nseg = VAR_8;
 for (int VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
  VAR_11->sgt[VAR_12].addr = VAR_7[VAR_12].ds_addr;
  VAR_11->sgt[VAR_12].len = VAR_7[VAR_12].ds_len;
  VAR_11->sgt[VAR_12].flags = 0;
 }

 if (VAR_11->data_dir == VAR_4)
  FUNC_1(VAR_10->os_specific.pqi_buffer_dmat,
   VAR_11->cm_datamap, VAR_0);
 if (VAR_11->data_dir == VAR_5)
  FUNC_1(VAR_10->os_specific.pqi_buffer_dmat,
   VAR_11->cm_datamap, VAR_1);


 VAR_11->status = VAR_3;

 VAR_9 = FUNC_5(VAR_10, VAR_11);

 if (VAR_9) {
  VAR_11->req_pending = 0;
  VAR_11->cm_ccb->ccb_h.status = VAR_2;
  FUNC_3(VAR_11->cm_ccb);
  FUNC_0(VAR_11->dvp, "Build IO failed, error = %d\n", VAR_9);
     FUNC_4(VAR_11);
  FUNC_6((union ccb *)VAR_11->cm_ccb);
  return;
 }
}
