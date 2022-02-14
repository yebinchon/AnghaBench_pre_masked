
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int dummy; } ;
struct drm_file {int event_poll; int event_list; } ;
struct drm_device {int event_lock; } ;
struct cdev {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (void**) ;
 struct drm_device* FUNC_4 (struct cdev*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct thread*,int *) ;

int
FUNC_9(struct cdev *VAR_4, int VAR_5, struct thread *VAR_6)
{
 struct drm_file *VAR_7;
 struct drm_device *VAR_8;
 int VAR_9, VAR_10;

 VAR_9 = FUNC_3((void **)&VAR_7);
 if (VAR_9 != 0) {
  FUNC_2("can't find authenticator\n");
  return (VAR_0);
 }

 VAR_8 = FUNC_4(VAR_4);

 VAR_10 = 0;
 FUNC_6(&VAR_8->event_lock);
 if ((VAR_5 & (VAR_2 | VAR_3)) != 0) {
  if (FUNC_5(&VAR_7->event_list)) {
   FUNC_0(VAR_1, "drm_poll empty list");
   FUNC_8(VAR_6, &VAR_7->event_poll);
  } else {
   VAR_10 |= VAR_5 & (VAR_2 | VAR_3);
   FUNC_1(VAR_1, "drm_poll revents %x", VAR_10);
  }
 }
 FUNC_7(&VAR_8->event_lock);
 return (VAR_10);
}
