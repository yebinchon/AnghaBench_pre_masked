
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cbfcnp; struct pass_io_req* ccb_ioreq; int ccb_type; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct pass_softc {int state; int incoming_queue; int device_stats; int active_queue; } ;
struct pass_io_req {int start_time; union ccb* alloced_ccb; int ccb; } ;
struct cam_periph {scalar_t__ softc; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int *) ;
 struct pass_io_req* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct pass_io_req*,int ) ;
 int FUNC_3 (int *,struct pass_io_req*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (union ccb*) ;
 int FUNC_7 (union ccb*,int *) ;
 int FUNC_8 (union ccb*) ;
 int FUNC_9 (struct cam_periph*,int ) ;

__attribute__((used)) static void
FUNC_10(struct cam_periph *VAR_4, union ccb *VAR_5)
{
 struct pass_softc *VAR_6;

 VAR_6 = (struct pass_softc *)VAR_4->softc;

 switch (VAR_6->state) {
 case 128: {
  struct pass_io_req *VAR_7;





  VAR_7 = FUNC_1(&VAR_6->incoming_queue);
  if (VAR_7 == ((void*)0)) {
   FUNC_8(VAR_5);
   break;
  }
  FUNC_3(&VAR_6->incoming_queue, VAR_7, VAR_2);
  FUNC_2(&VAR_6->active_queue, VAR_7, VAR_2);



  FUNC_7(VAR_5, &VAR_7->ccb);
  VAR_5->ccb_h.ccb_type = VAR_1;
  VAR_5->ccb_h.ccb_ioreq = VAR_7;
  VAR_5->ccb_h.cbfcnp = VAR_3;
  VAR_7->alloced_ccb = VAR_5;
  FUNC_4(&VAR_7->start_time);
  FUNC_5(VAR_6->device_stats,
       &VAR_7->start_time);

  FUNC_6(VAR_5);




  if (!FUNC_0(&VAR_6->incoming_queue))
   FUNC_9(VAR_4, VAR_0);
  break;
 }
 default:
  break;
 }
}
