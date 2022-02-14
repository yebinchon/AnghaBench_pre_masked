
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


typedef union ccb {int dummy; } ccb ;
typedef TYPE_4__* tcb_p ;
struct ccb_scsiio {int scsi_status; scalar_t__ resid; } ;
typedef int lcb_p ;
typedef TYPE_5__* hcb_p ;
typedef TYPE_6__* ccb_p ;
struct TYPE_17__ {scalar_t__ lastp; scalar_t__ goalp; } ;
struct TYPE_18__ {TYPE_2__ head; } ;
struct TYPE_21__ {scalar_t__ host_status; size_t target; scalar_t__ dmamapped; int ssss_status; int dmamap; TYPE_3__ phys; int lun; TYPE_1__* cam_ccb; } ;
struct TYPE_20__ {int data_dmat; TYPE_4__* target; } ;
struct TYPE_19__ {int lun_map; } ;
struct TYPE_16__ {struct ccb_scsiio csio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_4 (TYPE_5__*,TYPE_6__*) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (union ccb*,int ) ;
 int FUNC_8 (TYPE_5__*,union ccb*,TYPE_6__*) ;

__attribute__((used)) static void FUNC_9 (hcb_p VAR_7, ccb_p VAR_8)
{
 struct ccb_scsiio *VAR_9;
 tcb_p VAR_10;
 lcb_p VAR_11;

 FUNC_0(VAR_4);




 if (!VAR_8 || !VAR_8->cam_ccb)
  return;
 FUNC_1 (VAR_8->host_status == VAR_3);




 VAR_9 = &VAR_8->cam_ccb->csio;
 VAR_10 = &VAR_7->target[VAR_8->target];
 VAR_11 = FUNC_5(VAR_10, VAR_8->lun);




 if (!VAR_11)
  FUNC_6(VAR_10->lun_map, VAR_8->lun);





 VAR_9->resid = 0;
 if (VAR_8->phys.head.lastp != VAR_8->phys.head.goalp)
  VAR_9->resid = FUNC_3(VAR_7, VAR_8);






 if (!VAR_5)
  VAR_9->resid = 0;




 if (VAR_8->dmamapped) {
  FUNC_2(VAR_7->data_dmat, VAR_8->dmamap,
   (VAR_8->dmamapped == VAR_6 ?
    VAR_0 : VAR_1));
 }



 VAR_9->scsi_status = VAR_8->ssss_status;
 FUNC_7((union ccb *) VAR_9, VAR_2);
 FUNC_8(VAR_7, (union ccb *) VAR_9, VAR_8);
 FUNC_4(VAR_7, VAR_8);
}
