
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int user_ccb ;
struct TYPE_3__ {int priority; } ;
struct targ_cmd_descr {int func_code; int priority; union ccb* user_ccb; scalar_t__ targ_descr; TYPE_1__ pinfo; } ;
union ccb {struct targ_cmd_descr ccb_h; } ;
struct uio {int uio_resid; } ;
struct targ_softc {int periph; int path; int work_queue; int pending_ccb_queue; } ;
struct cdev {int dummy; } ;
typedef int caddr_t ;
struct TYPE_4__ {int tqe; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,struct targ_cmd_descr*,int ) ;

 int VAR_5 ;


 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (void**) ;
 int FUNC_5 (int*) ;
 TYPE_2__ VAR_6 ;
 union ccb* FUNC_6 (struct targ_softc*,int,int) ;
 struct targ_cmd_descr* FUNC_7 (struct targ_softc*) ;
 int FUNC_8 (struct targ_softc*,union ccb*) ;
 int FUNC_9 (struct targ_softc*,union ccb*,struct targ_cmd_descr*) ;
 int FUNC_10 (struct targ_softc*,struct targ_cmd_descr*,union ccb*) ;
 int VAR_7 ;
 int FUNC_11 (int ,int,struct uio*) ;
 int FUNC_12 (union ccb*) ;
 int FUNC_13 (int ,int) ;

__attribute__((used)) static int
FUNC_14(struct cdev *VAR_8, struct uio *VAR_9, int VAR_10)
{
 union ccb *VAR_11;
 struct targ_softc *VAR_12;
 struct targ_cmd_descr *VAR_13;
 int VAR_14, VAR_15;
 int VAR_16, VAR_17;

 FUNC_4((void **)&VAR_12);
 VAR_14 = VAR_15 = 0;
 FUNC_0(VAR_12->path, VAR_0,
    ("write - uio_resid %zd\n", VAR_9->uio_resid));
 while (VAR_9->uio_resid >= sizeof(VAR_11) && VAR_15 == 0) {
  union ccb *VAR_18;

  VAR_15 = FUNC_11((caddr_t)&VAR_11, sizeof(VAR_11), VAR_9);
  if (VAR_15 != 0) {
   FUNC_0(VAR_12->path, VAR_0,
      ("write - uiomove failed (%d)\n", VAR_15));
   break;
  }
  VAR_17 = FUNC_5(&VAR_11->ccb_h.pinfo.priority);
  if (VAR_17 == VAR_1) {
   VAR_15 = VAR_3;
   break;
  }
  VAR_16 = FUNC_5(&VAR_11->ccb_h.func_code);
  switch (VAR_16) {
  case 130:
  case 128:
  case 129:
   FUNC_2(VAR_12->periph);
   VAR_18 = FUNC_6(VAR_12, VAR_16, VAR_17);
   VAR_13 = (struct targ_cmd_descr *)VAR_18->ccb_h.targ_descr;
   VAR_13->user_ccb = VAR_11;
   VAR_13->func_code = VAR_16;
   FUNC_0(VAR_12->path, VAR_0,
      ("Sent ATIO/INOT (%p)\n", VAR_11));
   FUNC_12(VAR_18);
   FUNC_1(&VAR_12->pending_ccb_queue,
       &VAR_18->ccb_h,
       VAR_6.tqe);
   FUNC_3(VAR_12->periph);
   break;
  default:
   FUNC_2(VAR_12->periph);
   if ((VAR_16 & VAR_5) != 0) {
    FUNC_0(VAR_12->path, VAR_0,
       ("Sending queued ccb %#x (%p)\n",
       VAR_16, VAR_11));
    VAR_13 = FUNC_7(VAR_12);
    VAR_13->user_ccb = VAR_11;
    VAR_13->priority = VAR_17;
    VAR_13->func_code = VAR_16;
    FUNC_1(&VAR_12->work_queue,
        VAR_13, VAR_7);
    FUNC_13(VAR_12->periph, VAR_17);
   } else {
    FUNC_0(VAR_12->path, VAR_0,
       ("Sending inline ccb %#x (%p)\n",
       VAR_16, VAR_11));
    VAR_18 = FUNC_6(VAR_12, VAR_16, VAR_17);
    VAR_13 = (struct targ_cmd_descr *)
      VAR_18->ccb_h.targ_descr;
    VAR_13->user_ccb = VAR_11;
    VAR_13->priority = VAR_17;
    VAR_13->func_code = VAR_16;
    if (FUNC_10(VAR_12, VAR_13, VAR_18) != VAR_2)
     FUNC_9(VAR_12, VAR_18, VAR_13);
    FUNC_8(VAR_12, VAR_18);
   }
   FUNC_3(VAR_12->periph);
   break;
  }
  VAR_14 += sizeof(VAR_11);
 }







 if (VAR_15 != 0 && VAR_14 == 0)
  return (VAR_15);
 if (VAR_14 == 0 && VAR_9->uio_resid != 0)
  return (VAR_4);
 return (0);
}
