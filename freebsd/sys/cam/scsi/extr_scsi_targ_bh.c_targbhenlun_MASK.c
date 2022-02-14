
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ status; void* cbfcnp; int func_code; int * ccb_descr; } ;
struct TYPE_5__ {int enable; scalar_t__ grp7_len; scalar_t__ grp6_len; } ;
union ccb {TYPE_2__ ccb_h; TYPE_1__ cel; } ;
struct targbh_softc {int flags; int immed_notify_slist; struct ccb_accept_tio* accept_tio_list; } ;
struct targbh_cmd_desc {struct ccb_accept_tio* atio_link; } ;
struct ccb_immediate_notify {TYPE_2__ ccb_h; } ;
struct ccb_accept_tio {TYPE_2__ ccb_h; } ;
struct cam_periph {int path; scalar_t__ softc; } ;
typedef scalar_t__ cam_status ;
struct TYPE_7__ {int sle; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct ccb_accept_tio*,int ) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 TYPE_3__ VAR_12 ;
 int * FUNC_3 () ;
 int FUNC_4 (struct cam_periph*) ;
 void* VAR_13 ;
 int FUNC_5 (union ccb*) ;
 int FUNC_6 (int ,char*,scalar_t__) ;
 int FUNC_7 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static cam_status
FUNC_8(struct cam_periph *VAR_14)
{
 union ccb VAR_15;
 struct targbh_softc *VAR_16;
 cam_status VAR_17;
 int VAR_18;

 VAR_16 = (struct targbh_softc *)VAR_14->softc;

 if ((VAR_16->flags & VAR_8) != 0)
  return (VAR_1);

 FUNC_7(&VAR_15.ccb_h, VAR_14->path, VAR_0);
 VAR_15.ccb_h.func_code = VAR_10;


 VAR_15.cel.grp6_len = 0;
 VAR_15.cel.grp7_len = 0;
 VAR_15.cel.enable = 1;
 FUNC_5(&VAR_15);
 VAR_17 = VAR_15.ccb_h.status;
 if (VAR_17 != VAR_1) {
  FUNC_6(VAR_14->path,
      "targbhenlun - Enable Lun Rejected with status 0x%x\n",
      VAR_17);
  return (VAR_17);
 }

 VAR_16->flags |= VAR_8;





 for (VAR_18 = 0; VAR_18 < VAR_5; VAR_18++) {
  struct ccb_accept_tio *VAR_19;

  VAR_19 = (struct ccb_accept_tio*)FUNC_2(sizeof(*VAR_19), VAR_7,
            VAR_6);
  if (VAR_19 == ((void*)0)) {
   VAR_17 = VAR_4;
   break;
  }

  VAR_19->ccb_h.ccb_descr = FUNC_3();

  if (VAR_19->ccb_h.ccb_descr == ((void*)0)) {
   FUNC_1(VAR_19, VAR_7);
   VAR_17 = VAR_4;
   break;
  }

  FUNC_7(&VAR_19->ccb_h, VAR_14->path, VAR_0);
  VAR_19->ccb_h.func_code = VAR_9;
  VAR_19->ccb_h.cbfcnp = VAR_13;
  ((struct targbh_cmd_desc*)VAR_19->ccb_h.ccb_descr)->atio_link =
      VAR_16->accept_tio_list;
  VAR_16->accept_tio_list = VAR_19;
  FUNC_5((union ccb *)VAR_19);
  VAR_17 = VAR_19->ccb_h.status;
  if (VAR_17 != VAR_3)
   break;
 }

 if (VAR_18 == 0) {
  FUNC_6(VAR_14->path,
      "targbhenlun - Could not allocate accept tio CCBs: status "
      "= 0x%x\n", VAR_17);
  FUNC_4(VAR_14);
  return (VAR_2);
 }





 for (VAR_18 = 0; VAR_18 < VAR_5; VAR_18++) {
  struct ccb_immediate_notify *VAR_20;

  VAR_20 = (struct ccb_immediate_notify*)FUNC_2(sizeof(*VAR_20),
       VAR_7, VAR_6);

  if (VAR_20 == ((void*)0)) {
   VAR_17 = VAR_4;
   break;
  }

  FUNC_7(&VAR_20->ccb_h, VAR_14->path, VAR_0);
  VAR_20->ccb_h.func_code = VAR_11;
  VAR_20->ccb_h.cbfcnp = VAR_13;
  FUNC_0(&VAR_16->immed_notify_slist, &VAR_20->ccb_h,
      VAR_12.sle);
  FUNC_5((union ccb *)VAR_20);
  VAR_17 = VAR_20->ccb_h.status;
  if (VAR_17 != VAR_3)
   break;
 }

 if (VAR_18 == 0) {
  FUNC_6(VAR_14->path,
      "targbhenlun - Could not allocate immediate notify "
      "CCBs: status = 0x%x\n", VAR_17);
  FUNC_4(VAR_14);
  return (VAR_2);
 }

 return (VAR_1);
}
