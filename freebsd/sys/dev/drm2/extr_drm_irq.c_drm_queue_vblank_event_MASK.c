
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int type; unsigned int sequence; int signal; } ;
struct TYPE_10__ {unsigned int sequence; } ;
union drm_wait_vblank {TYPE_5__ request; TYPE_4__ reply; } ;
struct timeval {int dummy; } ;
struct TYPE_9__ {int link; int destroy; struct drm_file* file_priv; TYPE_1__* event; int pid; } ;
struct TYPE_7__ {int length; int type; } ;
struct TYPE_8__ {unsigned int sequence; TYPE_1__ base; int user_data; } ;
struct drm_pending_vblank_event {int pipe; TYPE_3__ base; TYPE_2__ event; } ;
struct drm_file {int event_space; } ;
struct drm_device {int event_lock; int vblank_event_list; } ;
struct TYPE_12__ {int p_pid; } ;


 int FUNC_0 (int ,char*,int ,int,int,unsigned int) ;
 int FUNC_1 (char*,unsigned int,unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_6__* VAR_8 ;
 unsigned int FUNC_2 (struct drm_device*,int,struct timeval*) ;
 int VAR_9 ;
 int FUNC_3 (struct drm_device*,int) ;
 int FUNC_4 (struct drm_pending_vblank_event*,int ) ;
 int FUNC_5 (int *,int *) ;
 struct drm_pending_vblank_event* FUNC_6 (int,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct drm_device*,struct drm_pending_vblank_event*,unsigned int,struct timeval*) ;

__attribute__((used)) static int FUNC_10(struct drm_device *VAR_10, int VAR_11,
      union drm_wait_vblank *VAR_12,
      struct drm_file *VAR_13)
{
 struct drm_pending_vblank_event *VAR_14;
 struct timeval VAR_15;
 unsigned int VAR_16;
 int VAR_17;

 VAR_14 = FUNC_6(sizeof *VAR_14, VAR_1, VAR_5 | VAR_6);
 if (VAR_14 == ((void*)0)) {
  VAR_17 = -VAR_3;
  goto err_put;
 }

 VAR_14->pipe = VAR_11;
 VAR_14->base.pid = VAR_8->p_pid;
 VAR_14->event.base.type = VAR_0;
 VAR_14->event.base.length = sizeof VAR_14->event;
 VAR_14->event.user_data = VAR_12->request.signal;
 VAR_14->base.event = &VAR_14->event.base;
 VAR_14->base.file_priv = VAR_13;
 VAR_14->base.destroy = VAR_9;

 FUNC_7(&VAR_10->event_lock);

 if (VAR_13->event_space < sizeof VAR_14->event) {
  VAR_17 = -VAR_2;
  goto err_unlock;
 }

 VAR_13->event_space -= sizeof VAR_14->event;
 VAR_16 = FUNC_2(VAR_10, VAR_11, &VAR_15);

 if ((VAR_12->request.type & VAR_7) &&
     (VAR_16 - VAR_12->request.sequence) <= (1 << 23)) {
  VAR_12->request.sequence = VAR_16 + 1;
  VAR_12->reply.sequence = VAR_12->request.sequence;
 }

 FUNC_1("event on vblank count %d, current %d, crtc %d\n",
    VAR_12->request.sequence, VAR_16, VAR_11);

 FUNC_0(VAR_4, "vblank_event_queued %d %d rt %x %d", VAR_8->p_pid, VAR_11,
     VAR_12->request.type, VAR_12->request.sequence);

 VAR_14->event.sequence = VAR_12->request.sequence;
 if ((VAR_16 - VAR_12->request.sequence) <= (1 << 23)) {
  FUNC_3(VAR_10, VAR_11);
  FUNC_9(VAR_10, VAR_14, VAR_16, &VAR_15);
  VAR_12->reply.sequence = VAR_16;
 } else {

  FUNC_5(&VAR_14->base.link, &VAR_10->vblank_event_list);
  VAR_12->reply.sequence = VAR_12->request.sequence;
 }

 FUNC_8(&VAR_10->event_lock);

 return 0;

err_unlock:
 FUNC_8(&VAR_10->event_lock);
 FUNC_4(VAR_14, VAR_1);
err_put:
 FUNC_3(VAR_10, VAR_11);
 return VAR_17;
}
