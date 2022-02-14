
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int status; int func_code; } ;
union ccb {TYPE_2__ ccb_h; } ;
struct targ_softc {int state; int periph; int user_ccb_queue; int pending_ccb_queue; } ;
struct cam_periph {scalar_t__ softc; int path; } ;
typedef int cam_status ;
struct TYPE_4__ {int tqe; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,TYPE_2__*,int ) ;
 int FUNC_3 (int *,TYPE_2__*,int ) ;
 int VAR_2 ;




 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct targ_softc*) ;
 int FUNC_7 (char*,int) ;
 TYPE_1__ VAR_3 ;
 int FUNC_8 (struct targ_softc*,union ccb*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void
FUNC_10(struct cam_periph *VAR_4, union ccb *VAR_5)
{
 struct targ_softc *VAR_6;
 cam_status VAR_7;

 FUNC_0(VAR_4->path, VAR_0, ("targdone %p\n", VAR_5));
 VAR_6 = (struct targ_softc *)VAR_4->softc;
 FUNC_3(&VAR_6->pending_ccb_queue, &VAR_5->ccb_h,
       VAR_3.tqe);
 VAR_7 = VAR_5->ccb_h.status & VAR_1;


 if ((VAR_6->state & VAR_2) == 0) {
  FUNC_8(VAR_6, VAR_5);
  return;
 }

 if (FUNC_1(&VAR_6->pending_ccb_queue))
  FUNC_9(&VAR_6->pending_ccb_queue);

 switch (VAR_5->ccb_h.func_code) {

 case 128:
 case 129:
 case 131:
 case 130:
  FUNC_2(&VAR_6->user_ccb_queue, &VAR_5->ccb_h,
      VAR_3.tqe);
   FUNC_5(VAR_6->periph);
  FUNC_6(VAR_6);
   FUNC_4(VAR_6->periph);
  break;
 default:
  FUNC_7("targdone: impossible xpt opcode %#x",
        VAR_5->ccb_h.func_code);

 }
}
