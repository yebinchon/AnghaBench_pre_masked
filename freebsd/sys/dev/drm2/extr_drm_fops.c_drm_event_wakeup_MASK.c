
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_pending_event {struct drm_file* file_priv; } ;
struct drm_file {int event_poll; int event_space; TYPE_1__* minor; } ;
struct drm_device {int event_lock; } ;
struct TYPE_2__ {struct drm_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct drm_pending_event *VAR_1)
{
 struct drm_file *VAR_2;
 struct drm_device *VAR_3;

 VAR_2 = VAR_1->file_priv;
 VAR_3 = VAR_2->minor->dev;
 FUNC_0(&VAR_3->event_lock, VAR_0);

 FUNC_2(&VAR_2->event_space);
 FUNC_1(&VAR_2->event_poll);
}
