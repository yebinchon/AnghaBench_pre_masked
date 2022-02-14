
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int tv_usec; int tv_sec; } ;
struct TYPE_5__ {unsigned long sequence; int tv_usec; int tv_sec; } ;
struct TYPE_6__ {int pid; TYPE_1__* file_priv; int link; } ;
struct drm_pending_vblank_event {TYPE_2__ event; int pipe; TYPE_3__ base; } ;
struct drm_device {int event_lock; } ;
struct TYPE_4__ {int event_list; } ;


 int FUNC_0 (int ,char*,int ,int ,unsigned long) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct drm_device *VAR_1,
  struct drm_pending_vblank_event *VAR_2,
  unsigned long VAR_3, struct timeval *VAR_4)
{
 FUNC_1(!FUNC_4(&VAR_1->event_lock));
 VAR_2->event.sequence = VAR_3;
 VAR_2->event.tv_sec = VAR_4->tv_sec;
 VAR_2->event.tv_usec = VAR_4->tv_usec;

 FUNC_3(&VAR_2->base.link,
        &VAR_2->base.file_priv->event_list);
 FUNC_2(&VAR_2->base);
 FUNC_0(VAR_0, "vblank_event_delivered %d %d %d",
     VAR_2->base.pid, VAR_2->pipe, VAR_2->event.sequence);
}
