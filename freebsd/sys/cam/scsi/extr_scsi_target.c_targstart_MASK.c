
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct targ_softc {int abort_queue; int work_queue; int path; } ;
struct targ_cmd_descr {int priority; TYPE_2__* user_ccb; } ;
struct cam_periph {int path; scalar_t__ softc; } ;
struct TYPE_3__ {int status; } ;
struct TYPE_4__ {TYPE_1__ ccb_h; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct targ_cmd_descr* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct targ_cmd_descr*,int ) ;
 int FUNC_3 (int *,struct targ_cmd_descr*,int ) ;
 int FUNC_4 (struct targ_softc*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (struct targ_softc*,union ccb*,struct targ_cmd_descr*) ;
 int FUNC_7 (struct targ_softc*,struct targ_cmd_descr*,union ccb*) ;
 int VAR_2 ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (union ccb*) ;
 int FUNC_10 (struct cam_periph*,int ) ;

__attribute__((used)) static void
FUNC_11(struct cam_periph *VAR_3, union ccb *VAR_4)
{
 struct targ_softc *VAR_5;
 struct targ_cmd_descr *VAR_6, *VAR_7;
 int VAR_8;

 VAR_5 = (struct targ_softc *)VAR_3->softc;
 FUNC_0(VAR_5->path, VAR_0, ("targstart %p\n", VAR_4));

 VAR_6 = FUNC_1(&VAR_5->work_queue);
 if (VAR_6 == ((void*)0)) {
  FUNC_9(VAR_4);
 } else {
  FUNC_3(&VAR_5->work_queue, VAR_6, VAR_2);
  VAR_7 = FUNC_1(&VAR_5->work_queue);


  VAR_8 = FUNC_7(VAR_5, VAR_6, VAR_4);
  if (VAR_8 == 0)
   VAR_8 = FUNC_6(VAR_5, VAR_4, VAR_6);
  if (VAR_8 != 0) {
   FUNC_8(VAR_3->path,
       "targsendccb failed, err %d\n", VAR_8);
   FUNC_9(VAR_4);
   FUNC_5(&VAR_6->user_ccb->ccb_h.status,
          VAR_1);
   FUNC_2(&VAR_5->abort_queue, VAR_6, VAR_2);
   FUNC_4(VAR_5);
  }


  if (VAR_7 != ((void*)0))
   FUNC_10(VAR_3, VAR_7->priority);
 }
}
