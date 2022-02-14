
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uinput_cdev_state {int ucs_selected; int ucs_selp; } ;
struct thread {int td_tid; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct uinput_cdev_state*) ;
 int FUNC_1 (struct uinput_cdev_state*) ;
 int FUNC_2 (struct uinput_cdev_state*) ;
 int FUNC_3 (struct uinput_cdev_state*,char*,int ) ;
 scalar_t__ FUNC_4 (void**) ;
 int FUNC_5 (struct thread*,int *) ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_5, int VAR_6, struct thread *VAR_7)
{
 struct uinput_cdev_state *VAR_8;
 int VAR_9 = 0;

 if (FUNC_4((void **)&VAR_8) != 0)
  return (VAR_1);

 FUNC_3(VAR_8, "poll by thread %d", VAR_7->td_tid);


 if (VAR_6 & (VAR_2 | VAR_4))
  VAR_9 |= (VAR_6 & (VAR_2 | VAR_4));

 if (VAR_6 & (VAR_0 | VAR_3)) {
  FUNC_1(VAR_8);
  if (!FUNC_0(VAR_8))
   VAR_9 = VAR_6 & (VAR_0 | VAR_3);
  else {
   VAR_8->ucs_selected = 1;
   FUNC_5(VAR_7, &VAR_8->ucs_selp);
  }
  FUNC_2(VAR_8);
 }

 return (VAR_9);
}
