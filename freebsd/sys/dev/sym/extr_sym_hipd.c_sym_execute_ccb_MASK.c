
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int flags; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef TYPE_2__* hcb_p ;
typedef TYPE_3__* ccb_p ;
typedef int bus_dma_segment_t ;
struct TYPE_19__ {scalar_t__ dmamapped; int* cdb_buf; scalar_t__ nego_status; int host_status; int dmamap; union ccb* cam_ccb; scalar_t__ arg; } ;
struct TYPE_18__ {scalar_t__ device_id; int revision_id; int data_dmat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_3__*,int *,int) ;
 int FUNC_6 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_7 (union ccb*) ;
 int FUNC_8 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_9 (TYPE_2__*,TYPE_3__*,int *,int) ;
 int FUNC_10 (union ccb*,int ) ;
 int FUNC_11 (TYPE_2__*,TYPE_3__*,int) ;
 int FUNC_12 (TYPE_2__*,union ccb*,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_13(void *VAR_11, bus_dma_segment_t *VAR_12, int VAR_13, int VAR_14)
{
 ccb_p VAR_15;
 hcb_p VAR_16;
 union ccb *VAR_17;

 VAR_15 = (ccb_p) VAR_11;
 VAR_17 = VAR_15->cam_ccb;
 VAR_16 = (hcb_p) VAR_15->arg;

 FUNC_1(VAR_8);




 if (FUNC_7(VAR_17) != VAR_4)
  goto out_abort;




 if (VAR_14) {
  VAR_15->dmamapped = 0;
  FUNC_10(VAR_15->cam_ccb, VAR_3);
  goto out_abort;
 }




 if (VAR_13) {
  int VAR_18;

  if (VAR_16->device_id == VAR_9 && VAR_16->revision_id <= 1)
   VAR_18 = FUNC_9(VAR_16, VAR_15, VAR_12, VAR_13);
  else
   VAR_18 = FUNC_5(VAR_16,VAR_15, VAR_12,VAR_13);
  if (VAR_18 < 0) {
   FUNC_10(VAR_15->cam_ccb, VAR_5);
   goto out_abort;
  }
 }





 if (VAR_15->dmamapped) {
  FUNC_2(VAR_16->data_dmat, VAR_15->dmamap,
   (VAR_15->dmamapped == VAR_10 ?
    VAR_0 : VAR_1));
 }





 VAR_15->host_status = VAR_15->nego_status ? VAR_7 : VAR_6;




 FUNC_11(VAR_16, VAR_15, (VAR_17->ccb_h.flags & VAR_2));




 FUNC_4(VAR_15);
 FUNC_8(VAR_16, VAR_15);
 return;
out_abort:
 FUNC_12(VAR_16, VAR_17, VAR_15);
 FUNC_6(VAR_16, VAR_15);
}
