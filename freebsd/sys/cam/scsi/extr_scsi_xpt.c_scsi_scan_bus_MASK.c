
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_18__ {int flags; } ;
struct TYPE_17__ {int priority; } ;
struct TYPE_20__ {int func_code; int status; size_t target_id; void (* cbfcnp ) (struct cam_periph*,union ccb*) ;TYPE_6__* ppriv_ptr0; int flags; TYPE_4__ pinfo; int path_id; struct cam_path* path; int target_lun; } ;
struct TYPE_16__ {int hba_misc; int hba_inquiry; int max_target; size_t initiator_id; int max_lun; } ;
union ccb {TYPE_5__ crcn; TYPE_7__ ccb_h; TYPE_3__ cpi; } ;
typedef int uintmax_t ;
typedef size_t u_int ;
typedef size_t target_id_t ;
struct mtx {int dummy; } ;
struct cam_periph {int dummy; } ;
struct cam_path {struct cam_ed* device; struct cam_et* target; TYPE_1__* bus; } ;
struct cam_et {TYPE_2__* bus; struct mtx luns_mtx; TYPE_10__* luns; } ;
struct cam_ed {int flags; } ;
struct TYPE_19__ {size_t counter; size_t* lunindex; union ccb* request_ccb; TYPE_3__* cpi; } ;
typedef TYPE_6__ scsi_scan_bus_info ;
typedef int path_id_t ;
typedef int lun_id_t ;
typedef int cam_status ;
struct TYPE_21__ {int quirks; } ;
struct TYPE_15__ {struct mtx eb_mtx; } ;
struct TYPE_14__ {int last_reset; } ;
struct TYPE_13__ {int length; } ;


 int FUNC_0 (TYPE_10__*,size_t) ;
 int FUNC_1 (struct cam_path*,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_10__*,size_t,int ) ;
 int FUNC_3 (TYPE_10__*,size_t,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct cam_ed*) ;
 int FUNC_5 (struct cam_ed*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_9__* FUNC_6 (struct cam_ed*) ;
 struct cam_ed* FUNC_7 (struct cam_ed*,int ) ;
 int VAR_20 ;
 int VAR_21 ;



 int FUNC_8 (union ccb*) ;
 int FUNC_9 (TYPE_6__*,int ) ;
 int VAR_22 ;
 scalar_t__ FUNC_10 (int ,int ,int) ;
 int FUNC_11 (struct mtx*) ;
 int FUNC_12 (struct mtx*) ;
 int FUNC_13 (char*,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (union ccb*) ;
 union ccb* FUNC_17 () ;
 int FUNC_18 (struct cam_path**,int *,int ,size_t,int ) ;
 int FUNC_19 (union ccb*) ;
 int FUNC_20 (union ccb*) ;
 int FUNC_21 (struct cam_path*) ;
 struct mtx* FUNC_22 (struct cam_path*) ;
 int FUNC_23 (TYPE_7__*,struct cam_path*,int ) ;

__attribute__((used)) static void
FUNC_24(struct cam_periph *VAR_23, union ccb *VAR_24)
{
 struct mtx *VAR_25;

 FUNC_1(VAR_24->ccb_h.path, VAR_1,
    ("scsi_scan_bus\n"));
 switch (VAR_24->ccb_h.func_code) {
 case 130:
 case 128:
 {
  scsi_scan_bus_info *VAR_26;
  union ccb *VAR_27, *VAR_28;
  struct cam_path *VAR_29;
  u_int VAR_30;
  u_int VAR_31, VAR_32;
  u_int VAR_33;


  VAR_27 = FUNC_17();
  if (VAR_27 == ((void*)0)) {
   VAR_24->ccb_h.status = VAR_7;
   FUNC_19(VAR_24);
   return;
  }
  FUNC_23(&VAR_27->ccb_h, VAR_24->ccb_h.path,
         VAR_24->ccb_h.pinfo.priority);
  VAR_27->ccb_h.func_code = VAR_20;
  FUNC_16(VAR_27);
  if (VAR_27->ccb_h.status != VAR_6) {
   VAR_24->ccb_h.status = VAR_27->ccb_h.status;
   FUNC_20(VAR_27);
   FUNC_19(VAR_24);
   return;
  }

  if ((VAR_27->cpi.hba_misc & VAR_15) != 0) {




   VAR_24->ccb_h.status = VAR_6;
   FUNC_20(VAR_27);
   FUNC_19(VAR_24);
   return;
  }


  if ((VAR_27->cpi.hba_inquiry &
      (VAR_19|VAR_18|VAR_17)) &&
      !(VAR_27->cpi.hba_misc & VAR_14) &&
      !FUNC_15(&VAR_24->ccb_h.path->bus->last_reset) &&
      (VAR_28 = FUNC_17()) != ((void*)0)) {
   FUNC_23(&VAR_28->ccb_h, VAR_24->ccb_h.path,
         VAR_4);
   VAR_28->ccb_h.func_code = VAR_21;
   FUNC_16(VAR_28);
   if (VAR_28->ccb_h.status != VAR_6) {
    VAR_24->ccb_h.status = VAR_28->ccb_h.status;
    FUNC_20(VAR_28);
    FUNC_20(VAR_27);
    FUNC_19(VAR_24);
    return;
   }
   FUNC_20(VAR_28);
  }


  VAR_26 = (scsi_scan_bus_info *) FUNC_10(sizeof(scsi_scan_bus_info) +
      (VAR_27->cpi.max_target * sizeof (u_int)), VAR_10, VAR_12|VAR_11);
  if (VAR_26 == ((void*)0)) {
   VAR_24->ccb_h.status = VAR_7;
   FUNC_20(VAR_27);
   FUNC_19(VAR_24);
   return;
  }
  FUNC_1(VAR_24->ccb_h.path, VAR_1,
     ("SCAN start for %p\n", VAR_26));
  VAR_26->request_ccb = VAR_24;
  VAR_26->cpi = &VAR_27->cpi;


  VAR_32 = VAR_26->cpi->max_target;
  VAR_31 = 0;
  VAR_33 = VAR_26->cpi->initiator_id;






  if (VAR_24->ccb_h.func_code == 128) {
   VAR_32 = VAR_31 = VAR_24->ccb_h.target_id;
   VAR_26->counter = 0;
  } else if (VAR_26->cpi->hba_misc & VAR_16) {
   VAR_32 = 0;
   VAR_26->counter = 0;
  } else {
   VAR_26->counter = VAR_26->cpi->max_target + 1;
   if (VAR_26->cpi->initiator_id < VAR_26->counter) {
    VAR_26->counter--;
   }
  }
  VAR_25 = FUNC_22(VAR_26->request_ccb->ccb_h.path);
  FUNC_12(VAR_25);

  for (VAR_30 = VAR_31; VAR_30 <= VAR_32; VAR_30++) {
   cam_status VAR_34;
   if (VAR_30 == VAR_33)
    continue;

   VAR_34 = FUNC_18(&VAR_29, ((void*)0),
       VAR_24->ccb_h.path_id,
       VAR_30, 0);
   if (VAR_34 != VAR_6) {
    FUNC_13("scsi_scan_bus: xpt_create_path failed"
           " with status %#x, bus scan halted\n",
           VAR_34);
    FUNC_9(VAR_26, VAR_10);
    VAR_24->ccb_h.status = VAR_34;
    FUNC_20(VAR_27);
    FUNC_19(VAR_24);
    break;
   }
   VAR_27 = FUNC_17();
   if (VAR_27 == ((void*)0)) {
    FUNC_20((union ccb *)VAR_26->cpi);
    FUNC_9(VAR_26, VAR_10);
    FUNC_21(VAR_29);
    VAR_24->ccb_h.status = VAR_7;
    FUNC_19(VAR_24);
    break;
   }
   FUNC_23(&VAR_27->ccb_h, VAR_29,
          VAR_24->ccb_h.pinfo.priority);
   VAR_27->ccb_h.func_code = 129;
   VAR_27->ccb_h.cbfcnp = FUNC_24;
   VAR_27->ccb_h.flags |= VAR_9;
   VAR_27->ccb_h.ppriv_ptr0 = VAR_26;
   VAR_27->crcn.flags = VAR_24->crcn.flags;
   FUNC_16(VAR_27);
  }

  FUNC_11(VAR_25);
  break;
 }
 case 129:
 {
  cam_status VAR_35;
  struct cam_path *VAR_36, *VAR_37;
  scsi_scan_bus_info *VAR_38;
  struct cam_et *VAR_39;
  struct cam_ed *VAR_40, *VAR_41;
  int VAR_42;
  path_id_t VAR_43;
  target_id_t VAR_44;
  lun_id_t VAR_45;

  VAR_37 = VAR_24->ccb_h.path;

  VAR_35 = FUNC_8(VAR_24);
  VAR_38 = (scsi_scan_bus_info *)VAR_24->ccb_h.ppriv_ptr0;
  VAR_43 = VAR_24->ccb_h.path_id;
  VAR_44 = VAR_24->ccb_h.target_id;
  VAR_45 = VAR_24->ccb_h.target_lun;
  VAR_39 = VAR_24->ccb_h.path->target;
  VAR_42 = 1;

  VAR_25 = FUNC_22(VAR_38->request_ccb->ccb_h.path);
  FUNC_11(VAR_25);
  FUNC_11(&VAR_39->luns_mtx);
  if (VAR_39->luns) {
   lun_id_t VAR_46;
   u_int VAR_47 = FUNC_14(VAR_39->luns->length) / 8;






   FUNC_2(VAR_39->luns, 0, VAR_46);
   if (VAR_46 == 0 && VAR_38->lunindex[VAR_44] == 0) {
    VAR_38->lunindex[VAR_44]++;
   }




   while (VAR_38->lunindex[VAR_44] < VAR_47) {
    if (VAR_38->cpi->hba_misc & VAR_13) {
     FUNC_2(VAR_39->luns,
         VAR_38->lunindex[VAR_44],
         VAR_45);
     break;
    }

    if (FUNC_0(VAR_39->luns,
        VAR_38->lunindex[VAR_44])) {
     FUNC_3(VAR_39->luns,
         VAR_38->lunindex[VAR_44],
         VAR_45);
     break;
    }

    VAR_38->lunindex[VAR_44]++;
   }

   if (VAR_38->lunindex[VAR_44] < VAR_47) {
    FUNC_12(&VAR_39->luns_mtx);
    VAR_42 = 0;
    FUNC_1(VAR_24->ccb_h.path,
        VAR_0,
       ("next lun to try at index %u is %jx\n",
       VAR_38->lunindex[VAR_44],
       (uintmax_t)VAR_45));
    VAR_38->lunindex[VAR_44]++;
   } else {
    FUNC_12(&VAR_39->luns_mtx);

   }
  } else {
   FUNC_12(&VAR_39->luns_mtx);
   VAR_40 = VAR_24->ccb_h.path->device;


   FUNC_11(&VAR_39->bus->eb_mtx);
   VAR_41 = VAR_40;
   while ((VAR_41 = FUNC_7(VAR_41, VAR_22)) != ((void*)0))
    if ((VAR_41->flags & VAR_3) == 0)
     break;
   FUNC_12(&VAR_39->bus->eb_mtx);
   if (VAR_41 != ((void*)0)) {
    VAR_42 = 0;

   } else if (FUNC_6(VAR_40)->quirks & VAR_5) {
    VAR_42 = 1;


   } else if ((VAR_40->flags & VAR_3) == 0) {
    if (VAR_45 < (VAR_8-1) ||
        FUNC_4(VAR_40))
     VAR_42 = 0;


   } else if ((VAR_40->flags & VAR_2) != 0) {
    if (VAR_45 < (VAR_8-1) ||
        FUNC_5(VAR_40))
     VAR_42 = 0;
   }
   if (VAR_42 == 0) {
    VAR_45++;
    if (VAR_45 > VAR_38->cpi->max_lun)
     VAR_42 = 1;
   }
  }




  if (VAR_42) {
   int VAR_48;




   FUNC_21(VAR_37);
 hop_again:
   VAR_48 = 0;
   if (VAR_38->request_ccb->ccb_h.func_code == 128) {
    VAR_48 = 1;
   } else if (VAR_38->cpi->hba_misc & VAR_16) {
    VAR_38->counter++;
    if (VAR_38->counter ==
        VAR_38->cpi->initiator_id) {
     VAR_38->counter++;
    }
    if (VAR_38->counter >=
        VAR_38->cpi->max_target+1) {
     VAR_48 = 1;
    }
   } else {
    VAR_38->counter--;
    if (VAR_38->counter == 0) {
     VAR_48 = 1;
    }
   }
   if (VAR_48) {
    FUNC_12(VAR_25);
    FUNC_20(VAR_24);
    FUNC_20((union ccb *)VAR_38->cpi);
    VAR_24 = VAR_38->request_ccb;
    FUNC_1(VAR_24->ccb_h.path,
        VAR_1,
       ("SCAN done for %p\n", VAR_38));
    FUNC_9(VAR_38, VAR_10);
    VAR_24->ccb_h.status = VAR_6;
    FUNC_19(VAR_24);
    break;
   }

   if ((VAR_38->cpi->hba_misc & VAR_16) == 0) {
    FUNC_12(VAR_25);
    FUNC_20(VAR_24);
    break;
   }
   VAR_35 = FUNC_18(&VAR_36, ((void*)0),
       VAR_38->request_ccb->ccb_h.path_id,
       VAR_38->counter, 0);
   if (VAR_35 != VAR_6) {
    FUNC_12(VAR_25);
    FUNC_13("scsi_scan_bus: xpt_create_path failed"
        " with status %#x, bus scan halted\n",
               VAR_35);
    FUNC_20(VAR_24);
    FUNC_20((union ccb *)VAR_38->cpi);
    VAR_24 = VAR_38->request_ccb;
    FUNC_9(VAR_38, VAR_10);
    VAR_24->ccb_h.status = VAR_35;
    FUNC_19(VAR_24);
    break;
   }
   FUNC_23(&VAR_24->ccb_h, VAR_36,
       VAR_24->ccb_h.pinfo.priority);
   VAR_24->ccb_h.func_code = 129;
   VAR_24->ccb_h.cbfcnp = FUNC_24;
   VAR_24->ccb_h.flags |= VAR_9;
   VAR_24->ccb_h.ppriv_ptr0 = VAR_38;
   VAR_24->crcn.flags =
       VAR_38->request_ccb->crcn.flags;
  } else {
   VAR_35 = FUNC_18(&VAR_36, ((void*)0),
       VAR_43, VAR_44, VAR_45);






   FUNC_21(VAR_37);
   if (VAR_35 != VAR_6) {
    FUNC_13("scsi_scan_bus: xpt_create_path failed "
           "with status %#x, halting LUN scan\n",
            VAR_35);
    goto hop_again;
   }
   FUNC_23(&VAR_24->ccb_h, VAR_36,
          VAR_24->ccb_h.pinfo.priority);
   VAR_24->ccb_h.func_code = 129;
   VAR_24->ccb_h.cbfcnp = FUNC_24;
   VAR_24->ccb_h.flags |= VAR_9;
   VAR_24->ccb_h.ppriv_ptr0 = VAR_38;
   VAR_24->crcn.flags =
    VAR_38->request_ccb->crcn.flags;
  }
  FUNC_12(VAR_25);
  FUNC_16(VAR_24);
  break;
 }
 default:
  break;
 }
}
