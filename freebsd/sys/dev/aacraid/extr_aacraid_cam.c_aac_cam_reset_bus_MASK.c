
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* entries; } ;
struct TYPE_8__ {TYPE_2__ sim_priv; int status; } ;
union ccb {TYPE_3__ ccb_h; } ;
typedef int u_int32_t ;
struct cam_sim {int dummy; } ;
struct aac_vmioctl {int * IoctlBuf; int IoctlCmd; scalar_t__ ObjId; int MethId; int ObjType; int Command; } ;
struct aac_softc {int aac_dev; int scsi_method_id; } ;
struct aac_resetbus {scalar_t__ BusNumber; } ;
struct aac_fib_header {int dummy; } ;
struct TYPE_9__ {int Size; int XferState; int Command; } ;
struct aac_fib {int * data; TYPE_4__ Header; } ;
struct aac_event {int ev_type; union ccb* ev_arg; int ev_callback; } ;
struct aac_command {scalar_t__ cm_datalen; int cm_timestamp; struct aac_fib* cm_fib; } ;
struct aac_cam {TYPE_5__* inf; } ;
struct TYPE_10__ {scalar_t__ BusNumber; struct aac_softc* aac_sc; } ;
struct TYPE_6__ {struct aac_cam* ptr; } ;


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
 int FUNC_0 (struct aac_softc*,struct aac_event*) ;
 scalar_t__ FUNC_1 (struct aac_softc*,struct aac_command**) ;
 int FUNC_2 (struct aac_command*) ;
 scalar_t__ FUNC_3 (struct aac_command*) ;
 int FUNC_4 (struct aac_vmioctl*,int) ;
 scalar_t__ FUNC_5 (struct cam_sim*) ;
 int FUNC_6 (int ,char*) ;
 struct aac_event* FUNC_7 (int,int ,int) ;
 int FUNC_8 (char*) ;
 int VAR_20 ;
 int FUNC_9 (struct cam_sim*,int) ;

__attribute__((used)) static u_int32_t
FUNC_10(struct cam_sim *VAR_21, union ccb *VAR_22)
{
 struct aac_command *VAR_23;
 struct aac_fib *VAR_24;
 struct aac_softc *VAR_25;
 struct aac_cam *VAR_26;
 struct aac_vmioctl *VAR_27;
 struct aac_resetbus *VAR_28;
 u_int32_t VAR_29;

 VAR_26 = (struct aac_cam *)FUNC_5(VAR_21);
 VAR_25 = VAR_26->inf->aac_sc;

 if (VAR_25 == ((void*)0)) {
  FUNC_8("aac: Null sc?\n");
  return (VAR_9);
 }

 if (FUNC_1(VAR_25, &VAR_23)) {
  struct aac_event *VAR_30;

  FUNC_9(VAR_21, 1);
  VAR_22->ccb_h.status = VAR_11;
  VAR_22->ccb_h.sim_priv.entries[0].ptr = VAR_26;
  VAR_30 = FUNC_7(sizeof(struct aac_event), VAR_14,
   VAR_15 | VAR_16);
  if (VAR_30 == ((void*)0)) {
   FUNC_6(VAR_25->aac_dev,
    "Warning, out of memory for event\n");
   return (VAR_9);
  }
  VAR_30->ev_callback = VAR_19;
  VAR_30->ev_arg = VAR_22;
  VAR_30->ev_type = VAR_0;
  FUNC_0(VAR_25, VAR_30);
  return (VAR_9);
 }

 VAR_24 = VAR_23->cm_fib;
 VAR_23->cm_timestamp = VAR_20;
 VAR_23->cm_datalen = 0;

 VAR_24->Header.Size =
  sizeof(struct aac_fib_header) + sizeof(struct aac_vmioctl);
 VAR_24->Header.XferState =
  VAR_5 |
  VAR_6 |
  VAR_2 |
  VAR_4 |
  VAR_8 |
  VAR_7 |
  VAR_1 |
  VAR_3;
 VAR_24->Header.Command = VAR_12;

 VAR_27 = (struct aac_vmioctl *)&VAR_24->data[0];
 FUNC_4(VAR_27, sizeof(struct aac_vmioctl));

 VAR_27->Command = VAR_18;
 VAR_27->ObjType = VAR_13;
 VAR_27->MethId = VAR_25->scsi_method_id;
 VAR_27->ObjId = 0;
 VAR_27->IoctlCmd = VAR_17;

 VAR_28 = (struct aac_resetbus *)&VAR_27->IoctlBuf[0];
 VAR_28->BusNumber = VAR_26->inf->BusNumber - 1;

 if (FUNC_3(VAR_23) != 0) {
  FUNC_6(VAR_25->aac_dev,"Error sending ResetBus command\n");
  VAR_29 = VAR_9;
 } else {
  VAR_29 = VAR_10;
 }
 FUNC_2(VAR_23);
 return (VAR_29);
}
