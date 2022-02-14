
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thread {int td_tid; } ;
struct evdev_client {int ec_selected; int ec_selp; scalar_t__ ec_revoked; } ;
struct cdev {int dummy; } ;


 int FUNC_0 (struct evdev_client*) ;
 int FUNC_1 (struct evdev_client*) ;
 int FUNC_2 (struct evdev_client*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct evdev_client*,char*,int ) ;
 int FUNC_4 (void**) ;
 int FUNC_5 (struct thread*,int *) ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_4, int VAR_5, struct thread *VAR_6)
{
 struct evdev_client *VAR_7;
 int VAR_8;
 int VAR_9 = 0;

 VAR_8 = FUNC_4((void **)&VAR_7);
 if (VAR_8 != 0)
  return (VAR_2);

 FUNC_3(VAR_7, "poll by thread %d", VAR_6->td_tid);

 if (VAR_7->ec_revoked)
  return (VAR_0);

 if (VAR_5 & (VAR_1 | VAR_3)) {
  FUNC_1(VAR_7);
  if (!FUNC_0(VAR_7))
   VAR_9 = VAR_5 & (VAR_1 | VAR_3);
  else {
   VAR_7->ec_selected = 1;
   FUNC_5(VAR_6, &VAR_7->ec_selp);
  }
  FUNC_2(VAR_7);
 }

 return (VAR_9);
}
