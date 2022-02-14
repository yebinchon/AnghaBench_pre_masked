
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uio {int dummy; } ;
struct drm_pending_event {int (* destroy ) (struct drm_pending_event*) ;TYPE_1__* event; } ;
struct drm_file {int event_space; int event_list; } ;
struct drm_device {int event_lock; } ;
struct cdev {int dummy; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_4__ {int p_pid; } ;
struct TYPE_3__ {int length; int type; } ;


 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 scalar_t__ FUNC_2 (void**) ;
 scalar_t__ FUNC_3 (struct drm_file*,struct uio*,struct drm_pending_event**) ;
 struct drm_device* FUNC_4 (struct cdev*) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int *,int ,char*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct drm_pending_event*) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int ,struct uio*) ;

int
FUNC_11(struct cdev *VAR_6, struct uio *VAR_7, int VAR_8)
{
 struct drm_file *VAR_9;
 struct drm_device *VAR_10;
 struct drm_pending_event *VAR_11;
 ssize_t VAR_12;

 VAR_12 = FUNC_2((void **)&VAR_9);
 if (VAR_12 != 0) {
  FUNC_1("can't find authenticator\n");
  return (VAR_1);
 }

 VAR_10 = FUNC_4(VAR_6);
 FUNC_7(&VAR_10->event_lock);
 while (FUNC_5(&VAR_9->event_list)) {
  if ((VAR_8 & VAR_3) != 0) {
   VAR_12 = VAR_0;
   goto out;
  }
  VAR_12 = FUNC_6(&VAR_9->event_space, &VAR_10->event_lock,
            VAR_4, "drmrea", 0);
        if (VAR_12 != 0)
         goto out;
 }

 while (FUNC_3(VAR_9, VAR_7, &VAR_11)) {
  FUNC_8(&VAR_10->event_lock);
  VAR_12 = FUNC_10(VAR_11->event, VAR_11->event->length, VAR_7);
  FUNC_0(VAR_2, "drm_event_dequeued %d %d %d", VAR_5->p_pid,
      VAR_11->event->type, VAR_11->event->length);

  VAR_11->destroy(VAR_11);
  if (VAR_12 != 0)
   return (VAR_12);
  FUNC_7(&VAR_10->event_lock);
 }

out:
 FUNC_8(&VAR_10->event_lock);
 return (VAR_12);
}
