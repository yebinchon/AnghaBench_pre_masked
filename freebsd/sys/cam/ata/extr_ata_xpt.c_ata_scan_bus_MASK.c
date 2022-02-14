
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int priority; } ;
struct TYPE_16__ {int func_code; int status; void (* cbfcnp ) (struct cam_periph*,union ccb*) ;TYPE_6__* ppriv_ptr0; int flags; TYPE_3__ pinfo; int path_id; struct cam_path* path; } ;
struct TYPE_13__ {int flags; } ;
struct TYPE_17__ {int hba_inquiry; int hba_misc; int max_target; } ;
union ccb {TYPE_7__ ccb_h; TYPE_4__ crcn; TYPE_8__ cpi; } ;
struct mtx {int dummy; } ;
struct TYPE_10__ {int valid; int pm_present; } ;
struct TYPE_11__ {TYPE_1__ sata; } ;
struct ccb_trans_settings {TYPE_2__ xport_specific; int type; TYPE_7__ ccb_h; } ;
struct cam_periph {int dummy; } ;
struct cam_path {TYPE_5__* bus; } ;
typedef int cts ;
typedef int cam_status ;
struct TYPE_15__ {int counter; union ccb* request_ccb; TYPE_8__* cpi; } ;
typedef TYPE_6__ ata_scan_bus_info ;
struct TYPE_14__ {int last_reset; } ;


 int FUNC_0 (struct cam_path*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;



 int const VAR_15 ;
 int FUNC_1 (struct ccb_trans_settings*,int) ;
 int FUNC_2 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_3 (int,int ,int ) ;
 int FUNC_4 (struct mtx*) ;
 int FUNC_5 (struct mtx*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (union ccb*) ;
 union ccb* FUNC_9 () ;
 int FUNC_10 (struct cam_path**,int *,int ,int,int ) ;
 int FUNC_11 (union ccb*) ;
 int FUNC_12 (union ccb*) ;
 int FUNC_13 (struct cam_path*) ;
 int FUNC_14 (TYPE_8__*,struct cam_path*) ;
 struct mtx* FUNC_15 (struct cam_path*) ;
 int FUNC_16 (TYPE_7__*,struct cam_path*,int ) ;

__attribute__((used)) static void
FUNC_17(struct cam_periph *VAR_16, union ccb *VAR_17)
{
 struct cam_path *VAR_18;
 ata_scan_bus_info *VAR_19;
 union ccb *VAR_20, *VAR_21;
 struct mtx *VAR_22;
 cam_status VAR_23;

 FUNC_0(VAR_17->ccb_h.path, VAR_0,
    ("xpt_scan_bus\n"));
 switch (VAR_17->ccb_h.func_code) {
 case 130:
 case 128:

  VAR_20 = FUNC_9();
  if (VAR_20 == ((void*)0)) {
   VAR_17->ccb_h.status = VAR_3;
   FUNC_11(VAR_17);
   return;
  }
  FUNC_14(&VAR_20->cpi, VAR_17->ccb_h.path);
  if (VAR_20->ccb_h.status != VAR_2) {
   VAR_17->ccb_h.status = VAR_20->ccb_h.status;
   FUNC_12(VAR_20);
   FUNC_11(VAR_17);
   return;
  }


  if ((VAR_20->cpi.hba_inquiry &
      (VAR_13|VAR_12|VAR_11)) &&
      !(VAR_20->cpi.hba_misc & VAR_9) &&
      !FUNC_7(&VAR_17->ccb_h.path->bus->last_reset)) {
   VAR_21 = FUNC_9();
   if (VAR_21 == ((void*)0)) {
    VAR_17->ccb_h.status = VAR_3;
    FUNC_12(VAR_20);
    FUNC_11(VAR_17);
    return;
   }
   FUNC_16(&VAR_21->ccb_h, VAR_17->ccb_h.path,
         VAR_1);
   VAR_21->ccb_h.func_code = VAR_14;
   FUNC_8(VAR_21);
   if (VAR_21->ccb_h.status != VAR_2) {
    VAR_17->ccb_h.status = VAR_21->ccb_h.status;
    FUNC_12(VAR_21);
    FUNC_12(VAR_20);
    FUNC_11(VAR_17);
    return;
   }
   FUNC_12(VAR_21);
  }


  VAR_19 = (ata_scan_bus_info *)
      FUNC_3(sizeof(ata_scan_bus_info), VAR_7, VAR_8);
  if (VAR_19 == ((void*)0)) {
   VAR_17->ccb_h.status = VAR_3;
   FUNC_12(VAR_20);
   FUNC_11(VAR_17);
   return;
  }
  VAR_19->request_ccb = VAR_17;
  VAR_19->cpi = &VAR_20->cpi;

  if (VAR_19->cpi->hba_inquiry & VAR_10)
   VAR_19->counter = VAR_19->cpi->max_target;
  else
   VAR_19->counter = 0;

  VAR_20 = FUNC_9();
  if (VAR_20 == ((void*)0)) {
   FUNC_2(VAR_19, VAR_7);
   VAR_17->ccb_h.status = VAR_3;
   FUNC_11(VAR_17);
   break;
  }
  VAR_22 = FUNC_15(VAR_19->request_ccb->ccb_h.path);
  goto scan_next;
 case 129:
  VAR_20 = VAR_17;

  VAR_19 = (ata_scan_bus_info *)VAR_20->ccb_h.ppriv_ptr0;
  VAR_22 = FUNC_15(VAR_19->request_ccb->ccb_h.path);
  FUNC_4(VAR_22);

  if ((VAR_19->cpi->hba_inquiry & VAR_10) &&
      (VAR_19->counter == VAR_19->cpi->max_target)) {
   if (VAR_20->ccb_h.status == VAR_2) {


    FUNC_13(VAR_20->ccb_h.path);
    goto done;
   } else {
    struct ccb_trans_settings VAR_24;


    FUNC_1(&VAR_24, sizeof(VAR_24));
    FUNC_16(&VAR_24.ccb_h,
        VAR_20->ccb_h.path, VAR_1);
    VAR_24.ccb_h.func_code = VAR_15;
    VAR_24.type = VAR_6;
    VAR_24.xport_specific.sata.pm_present = 0;
    VAR_24.xport_specific.sata.valid = VAR_5;
    FUNC_8((union ccb *)&VAR_24);
   }
  }

  FUNC_13(VAR_20->ccb_h.path);
  if (VAR_19->counter ==
      ((VAR_19->cpi->hba_inquiry & VAR_10) ?
      0 : VAR_19->cpi->max_target)) {
done:
   FUNC_5(VAR_22);
   FUNC_12(VAR_20);
   FUNC_12((union ccb *)VAR_19->cpi);
   VAR_17 = VAR_19->request_ccb;
   FUNC_2(VAR_19, VAR_7);
   VAR_17->ccb_h.status = VAR_2;
   FUNC_11(VAR_17);
   break;
  }

  VAR_19->counter = (VAR_19->counter + 1 ) %
      (VAR_19->cpi->max_target + 1);
scan_next:
  VAR_23 = FUNC_10(&VAR_18, ((void*)0),
      VAR_19->request_ccb->ccb_h.path_id,
      VAR_19->counter, 0);
  if (VAR_23 != VAR_2) {
   if (VAR_17->ccb_h.func_code == 129)
    FUNC_5(VAR_22);
   FUNC_6("xpt_scan_bus: xpt_create_path failed"
       " with status %#x, bus scan halted\n",
       VAR_23);
   FUNC_12(VAR_20);
   FUNC_12((union ccb *)VAR_19->cpi);
   VAR_17 = VAR_19->request_ccb;
   FUNC_2(VAR_19, VAR_7);
   VAR_17->ccb_h.status = VAR_23;
   FUNC_11(VAR_17);
   break;
  }
  FUNC_16(&VAR_20->ccb_h, VAR_18,
      VAR_19->request_ccb->ccb_h.pinfo.priority);
  VAR_20->ccb_h.func_code = 129;
  VAR_20->ccb_h.cbfcnp = FUNC_17;
  VAR_20->ccb_h.flags |= VAR_4;
  VAR_20->ccb_h.ppriv_ptr0 = VAR_19;
  VAR_20->crcn.flags = VAR_19->request_ccb->crcn.flags;
  FUNC_5(VAR_22);
  if (VAR_17->ccb_h.func_code == 129)
   VAR_22 = ((void*)0);
  FUNC_8(VAR_20);
  if (VAR_22 != ((void*)0))
   FUNC_4(VAR_22);
  break;
 default:
  break;
 }
}
