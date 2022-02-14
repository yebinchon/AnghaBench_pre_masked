
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


struct TYPE_10__ {int periph_data; } ;
struct TYPE_11__ {int flags; scalar_t__ func_code; TYPE_3__ qos; TYPE_6__* path; } ;
struct TYPE_8__ {scalar_t__ tag_action; } ;
union ccb {TYPE_4__ ccb_h; TYPE_1__ csio; } ;
struct xpt_proto {TYPE_2__* ops; } ;
struct mtx {int dummy; } ;
struct cam_sim {int (* sim_action ) (struct cam_sim*,union ccb*) ;struct mtx* mtx; } ;
struct cam_ed {int inq_flags; struct cam_sim* sim; int protocol; int ccbq; } ;
struct TYPE_14__ {int qfrozen_cnt; scalar_t__ entries; } ;
struct cam_devq {scalar_t__ send_openings; TYPE_7__ send_queue; struct mtx send_mtx; int send_active; } ;
struct TYPE_13__ {struct cam_ed* device; } ;
struct TYPE_12__ {scalar_t__ num_highpower; struct mtx xpt_highpower_lock; int highpowerq; } ;
struct TYPE_9__ {int (* debug_out ) (union ccb*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,char*) ;
 int VAR_6 ;
 int FUNC_2 (int *,struct cam_ed*,int ) ;
 scalar_t__ VAR_7 ;
 union ccb* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,union ccb*) ;
 int FUNC_5 (int *,union ccb*) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (TYPE_7__*,int ) ;
 int VAR_8 ;
 int FUNC_8 (struct mtx*) ;
 int FUNC_9 (struct mtx*) ;
 int FUNC_10 (struct mtx*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (union ccb*) ;
 int FUNC_13 (struct cam_sim*,union ccb*) ;
 int FUNC_14 (TYPE_6__*,int) ;
 int FUNC_15 (struct cam_ed*,int) ;
 struct xpt_proto* FUNC_16 (int ) ;
 int FUNC_17 (struct cam_devq*,struct cam_ed*) ;
 TYPE_5__ VAR_9 ;

__attribute__((used)) static void
FUNC_18(struct cam_devq *VAR_10)
{
 struct mtx *VAR_11;

 FUNC_0(VAR_1, ("xpt_run_devq\n"));

 VAR_10->send_queue.qfrozen_cnt++;
 while ((VAR_10->send_queue.entries > 0)
     && (VAR_10->send_openings > 0)
     && (VAR_10->send_queue.qfrozen_cnt <= 1)) {
  struct cam_ed *VAR_12;
  union ccb *VAR_13;
  struct cam_sim *VAR_14;
  struct xpt_proto *VAR_15;

  VAR_12 = (struct cam_ed *)FUNC_7(&VAR_10->send_queue,
          VAR_0);
  FUNC_0(VAR_1,
    ("running device %p\n", VAR_12));

  VAR_13 = FUNC_3(&VAR_12->ccbq, VAR_0);
  if (VAR_13 == ((void*)0)) {
   FUNC_11("device on run queue with no ccbs???\n");
   continue;
  }

  if ((VAR_13->ccb_h.flags & VAR_3) != 0) {

   FUNC_8(&VAR_9.xpt_highpower_lock);
    if (VAR_9.num_highpower <= 0) {






    FUNC_15(VAR_12, 1);
    FUNC_2(&VAR_9.highpowerq, VAR_12,
         VAR_8);

    FUNC_10(&VAR_9.xpt_highpower_lock);
    continue;
   } else {




    VAR_9.num_highpower--;
   }
   FUNC_10(&VAR_9.xpt_highpower_lock);
  }
  FUNC_4(&VAR_12->ccbq, VAR_13);
  FUNC_5(&VAR_12->ccbq, VAR_13);
  VAR_10->send_openings--;
  VAR_10->send_active++;
  FUNC_17(VAR_10, VAR_12);
  FUNC_10(&VAR_10->send_mtx);

  if ((VAR_13->ccb_h.flags & VAR_2) != 0) {




   FUNC_14(VAR_13->ccb_h.path, 1);
  }


  if (VAR_13->ccb_h.func_code == VAR_7) {
   if ((VAR_12->inq_flags & VAR_6) != 0
    && VAR_13->csio.tag_action != VAR_4)
    VAR_13->ccb_h.flags |= VAR_5;
   else




    VAR_13->ccb_h.flags &= ~VAR_5;
  }

  FUNC_1(VAR_12 == VAR_13->ccb_h.path->device,
      ("device (%p) / path->device (%p) mismatch",
   VAR_12, VAR_13->ccb_h.path->device));
  VAR_15 = FUNC_16(VAR_12->protocol);
  if (VAR_15 && VAR_15->ops->debug_out)
   VAR_15->ops->debug_out(VAR_13);






  VAR_14 = VAR_12->sim;
  VAR_11 = VAR_14->mtx;
  if (VAR_11 && !FUNC_9(VAR_11))
   FUNC_8(VAR_11);
  else
   VAR_11 = ((void*)0);
  VAR_13->ccb_h.qos.periph_data = FUNC_6();
  (*(VAR_14->sim_action))(VAR_14, VAR_13);
  if (VAR_11)
   FUNC_10(VAR_11);
  FUNC_8(&VAR_10->send_mtx);
 }
 VAR_10->send_queue.qfrozen_cnt--;
}
