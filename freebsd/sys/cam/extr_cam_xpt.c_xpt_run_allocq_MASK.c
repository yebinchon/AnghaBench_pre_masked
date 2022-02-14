
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union ccb {int ccb_h; } ;
typedef scalar_t__ uint32_t ;
struct cam_periph {int periph_allocating; scalar_t__ immediate_priority; int periph_allocated; int flags; int (* periph_start ) (struct cam_periph*,union ccb*) ;scalar_t__ scheduled_priority; int ccb_list; TYPE_3__* path; int periph_run_task; } ;
struct TYPE_5__ {int total_openings; } ;
struct cam_ed {TYPE_1__ ccbq; } ;
struct TYPE_8__ {int sle; } ;
struct TYPE_7__ {struct cam_ed* device; } ;
struct TYPE_6__ {int xpt_taskq; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (struct cam_periph*,int ) ;
 int FUNC_3 (struct cam_periph*) ;
 int FUNC_4 (struct cam_periph*) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 TYPE_4__ VAR_5 ;
 int FUNC_6 (struct cam_periph*,union ccb*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 union ccb* FUNC_9 (struct cam_periph*) ;
 union ccb* FUNC_10 (struct cam_periph*) ;
 int FUNC_11 (union ccb*) ;
 int FUNC_12 (int *,TYPE_3__*,scalar_t__) ;
 TYPE_2__ VAR_6 ;

__attribute__((used)) static void
FUNC_13(struct cam_periph *VAR_7, int VAR_8)
{
 struct cam_ed *VAR_9;
 union ccb *VAR_10;
 uint32_t VAR_11;

 FUNC_2(VAR_7, VAR_4);
 if (VAR_7->periph_allocating)
  return;
 FUNC_3(VAR_7);
 VAR_7->periph_allocating = 1;
 FUNC_0(VAR_0, ("xpt_run_allocq(%p)\n", VAR_7));
 VAR_9 = VAR_7->path->device;
 VAR_10 = ((void*)0);
restart:
 while ((VAR_11 = FUNC_5(VAR_7->scheduled_priority,
     VAR_7->immediate_priority)) != VAR_2 &&
     (VAR_7->periph_allocated - (VAR_10 != ((void*)0) ? 1 : 0) <
      VAR_9->ccbq.total_openings || VAR_11 <= VAR_3)) {

  if (VAR_10 == ((void*)0) &&
      (VAR_10 = FUNC_10(VAR_7)) == ((void*)0)) {
   if (VAR_8) {
    VAR_10 = FUNC_9(VAR_7);
    goto restart;
   }
   if (VAR_7->flags & VAR_1)
    break;
   FUNC_3(VAR_7);
   VAR_7->flags |= VAR_1;
   FUNC_7(VAR_6.xpt_taskq,
       &VAR_7->periph_run_task);
   break;
  }
  FUNC_12(&VAR_10->ccb_h, VAR_7->path, VAR_11);
  if (VAR_11 == VAR_7->immediate_priority) {
   VAR_7->immediate_priority = VAR_2;
   FUNC_0(VAR_0,
     ("waking cam_periph_getccb()\n"));
   FUNC_1(&VAR_7->ccb_list, &VAR_10->ccb_h,
       VAR_5.sle);
   FUNC_8(&VAR_7->ccb_list);
  } else {
   VAR_7->scheduled_priority = VAR_2;
   FUNC_0(VAR_0,
     ("calling periph_start()\n"));
   VAR_7->periph_start(VAR_7, VAR_10);
  }
  VAR_10 = ((void*)0);
 }
 if (VAR_10 != ((void*)0))
  FUNC_11(VAR_10);
 VAR_7->periph_allocating = 0;
 FUNC_4(VAR_7);
}
