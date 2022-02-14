
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef int u_long ;
struct thread {int dummy; } ;
struct targ_softc {int state; int path; int * periph; } ;
struct ioc_enable_lun {int grp7_len; int grp6_len; int lun_id; int target_id; int path_id; } ;
struct cdev {int dummy; } ;
struct TYPE_2__ {int status; int cbfcnp; int func_code; } ;
struct ccb_debug {TYPE_1__ ccb_h; int flags; } ;
struct cam_path {int dummy; } ;
typedef int cam_status ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;



 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ccb_debug*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void**) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct targ_softc*) ;
 int VAR_9 ;
 int FUNC_7 (struct targ_softc*,struct cam_path*,int ,int ) ;
 int FUNC_8 (union ccb*) ;
 int FUNC_9 (struct cam_path**,int *,int ,int ,int ) ;
 int FUNC_10 (struct cam_path*) ;
 int FUNC_11 (struct cam_path*) ;
 int FUNC_12 (struct cam_path*) ;
 int FUNC_13 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int
FUNC_14(struct cdev *VAR_10, u_long VAR_11, caddr_t VAR_12, int VAR_13, struct thread *VAR_14)
{
 struct targ_softc *VAR_15;
 cam_status VAR_16;

 FUNC_3((void **)&VAR_15);

 switch (VAR_11) {
 case 128:
 {
  struct ioc_enable_lun *VAR_17;
  struct cam_path *VAR_18;

  VAR_17 = (struct ioc_enable_lun *)VAR_12;
  VAR_16 = FUNC_9(&VAR_18, ((void*)0),
       VAR_17->path_id,
       VAR_17->target_id,
       VAR_17->lun_id);
  if (VAR_16 != VAR_5) {
   FUNC_4("Couldn't create path, status %#x\n", VAR_16);
   break;
  }
  FUNC_11(VAR_18);
  VAR_16 = FUNC_7(VAR_15, VAR_18, VAR_17->grp6_len,
        VAR_17->grp7_len);
  FUNC_12(VAR_18);
  FUNC_10(VAR_18);
  break;
 }
 case 129:
  if (VAR_15->periph == ((void*)0)) {
   VAR_16 = VAR_2;
   break;
  }
  FUNC_1(VAR_15->periph);
  VAR_16 = FUNC_6(VAR_15);
  FUNC_2(VAR_15->periph);
  break;
 case 130:
 {
  struct ccb_debug VAR_19;


  if ((VAR_15->state & VAR_7) == 0) {
   VAR_16 = VAR_2;
   break;
  }
  FUNC_0(&VAR_19, sizeof VAR_19);
  if (*((int *)VAR_12) != 0)
   VAR_19.flags = VAR_1;
  else
   VAR_19.flags = VAR_0;
  FUNC_13(&VAR_19.ccb_h, VAR_15->path, VAR_3);
  VAR_19.ccb_h.func_code = VAR_8;
  VAR_19.ccb_h.cbfcnp = VAR_9;
  FUNC_8((union ccb *)&VAR_19);
  VAR_16 = VAR_19.ccb_h.status & VAR_6;
  break;
 }
 default:
  VAR_16 = VAR_4;
  break;
 }

 return (FUNC_5(VAR_16));
}
