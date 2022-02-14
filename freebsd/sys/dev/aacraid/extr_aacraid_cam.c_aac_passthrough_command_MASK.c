
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* entries; } ;
struct TYPE_13__ {int flags; int timeout; int target_lun; int target_id; TYPE_2__ sim_priv; int status; } ;
struct TYPE_10__ {int cdb_bytes; int cdb_ptr; } ;
struct TYPE_11__ {scalar_t__ dxfer_len; scalar_t__ data_ptr; TYPE_3__ cdb_io; int cdb_len; } ;
union ccb {TYPE_6__ ccb_h; TYPE_4__ csio; } ;
typedef int u_int8_t ;
struct cam_sim {int dummy; } ;
struct aac_srb {scalar_t__ retry_limit; int timeout; int lun; int target; scalar_t__ bus; scalar_t__ data_len; int sg_map; int cdb_len; int * cdb; int flags; int function; } ;
struct aac_softc {int flags; int aac_dev; int aac_io_lock; } ;
struct aac_fib_header {int dummy; } ;
struct TYPE_14__ {int Size; int XferState; int Command; } ;
struct aac_fib {TYPE_7__ Header; int * data; } ;
struct aac_event {int ev_type; union ccb* ev_arg; int ev_callback; } ;
struct aac_command {int cm_flags; int cm_sc; int cm_timestamp; union ccb* cm_ccb; int cm_complete; scalar_t__ cm_datalen; int * cm_data; int * cm_sgtable; struct aac_fib* cm_fib; } ;
struct aac_cam {TYPE_5__* inf; } ;
struct TYPE_12__ {scalar_t__ BusNumber; struct aac_softc* aac_sc; } ;
struct TYPE_8__ {struct aac_cam* ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 int VAR_15 ;
 int VAR_16 ;

 int VAR_17 ;


 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (struct aac_command*) ;
 int FUNC_1 (struct aac_softc*,struct aac_event*) ;
 scalar_t__ FUNC_2 (struct aac_softc*,struct aac_command**) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *,int ) ;
 scalar_t__ FUNC_5 (struct cam_sim*) ;
 int FUNC_6 (int ,char*) ;
 struct aac_event* FUNC_7 (int,int ,int) ;
 int FUNC_8 (int *,int ) ;
 int VAR_27 ;
 int FUNC_9 (struct cam_sim*,int) ;

__attribute__((used)) static void
FUNC_10(struct cam_sim *VAR_28, union ccb *VAR_29)
{
 struct aac_cam *VAR_30;
 struct aac_softc *VAR_31;
 struct aac_command *VAR_32;
 struct aac_fib *VAR_33;
 struct aac_srb *VAR_34;

 VAR_30 = (struct aac_cam *)FUNC_5(VAR_28);
 VAR_31 = VAR_30->inf->aac_sc;
 FUNC_8(&VAR_31->aac_io_lock, VAR_19);

 if (FUNC_2(VAR_31, &VAR_32)) {
  struct aac_event *VAR_35;

  FUNC_9(VAR_28, 1);
  VAR_29->ccb_h.status = VAR_18;
  VAR_29->ccb_h.sim_priv.entries[0].ptr = VAR_30;
  VAR_35 = FUNC_7(sizeof(struct aac_event), VAR_20,
      VAR_21 | VAR_22);
  if (VAR_35 == ((void*)0)) {
   FUNC_6(VAR_31->aac_dev,
       "Warning, out of memory for event\n");
   return;
  }
  VAR_35->ev_callback = VAR_26;
  VAR_35->ev_arg = VAR_29;
  VAR_35->ev_type = VAR_2;
  FUNC_1(VAR_31, VAR_35);
  return;
 }

 VAR_33 = VAR_32->cm_fib;
 switch (VAR_29->ccb_h.flags & VAR_17) {
 case 130:
  VAR_32->cm_flags |= VAR_0;
  break;
 case 128:
  VAR_32->cm_flags |= VAR_1;
  break;
 case 129:
  break;
 default:
  VAR_32->cm_flags |= VAR_0 | VAR_1;
  break;
 }

 VAR_34 = (struct aac_srb *)&VAR_33->data[0];
 VAR_34->function = VAR_15;
 if (VAR_32->cm_flags & (VAR_0|VAR_1))
  VAR_34->flags = VAR_14;
 if (VAR_32->cm_flags & VAR_0)
  VAR_34->flags = VAR_11;
 else if (VAR_32->cm_flags & VAR_1)
  VAR_34->flags = VAR_12;
 else
  VAR_34->flags = VAR_13;





 VAR_34->cdb_len = VAR_29->csio.cdb_len;
 if (VAR_29->ccb_h.flags & VAR_16)
  FUNC_4(VAR_29->csio.cdb_io.cdb_ptr, (u_int8_t *)&VAR_34->cdb[0],
   VAR_34->cdb_len);
 else
  FUNC_4(VAR_29->csio.cdb_io.cdb_bytes, (u_int8_t *)&VAR_34->cdb[0],
   VAR_34->cdb_len);


 VAR_33->Header.Command = (VAR_31->flags & VAR_10) ?
  VAR_24 : VAR_23;
 VAR_33->Header.Size = sizeof(struct aac_fib_header) +
   sizeof(struct aac_srb);


 VAR_32->cm_sgtable = &VAR_34->sg_map;
 if ((VAR_29->ccb_h.flags & VAR_17) != 129) {




  VAR_32->cm_data = (void *)VAR_29->csio.data_ptr;
  VAR_32->cm_datalen = VAR_29->csio.dxfer_len;
  VAR_34->data_len = VAR_29->csio.dxfer_len;
 } else {
  VAR_32->cm_data = ((void*)0);
  VAR_32->cm_datalen = 0;
  VAR_34->data_len = 0;
 }

 VAR_34->bus = VAR_30->inf->BusNumber - 1;
 VAR_34->target = VAR_29->ccb_h.target_id;
 VAR_34->lun = VAR_29->ccb_h.target_lun;
 VAR_34->timeout = VAR_29->ccb_h.timeout;
 VAR_34->retry_limit = 0;

 VAR_32->cm_complete = VAR_25;
 VAR_32->cm_ccb = VAR_29;
 VAR_32->cm_timestamp = VAR_27;

 VAR_33->Header.XferState =
   VAR_6 |
   VAR_7 |
   VAR_5 |
   VAR_9 |
   VAR_8 |
   VAR_3 |
   VAR_4;

 FUNC_0(VAR_32);
 FUNC_3(VAR_32->cm_sc);
}
