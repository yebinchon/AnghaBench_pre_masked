
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct wtap_hal {int hal_md; } ;
struct TYPE_3__ {struct wtap_hal* wp_hal; } ;
struct visibility_plugin {TYPE_1__ base; } ;
struct thread {int dummy; } ;
struct link {int op; int id1; int id2; } ;
struct cdev {scalar_t__ si_drv1; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_4__ {int td_ucred; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;


 int FUNC_4 (struct visibility_plugin*,struct link*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_5 (struct visibility_plugin*,struct link*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int,int,int) ;

int
FUNC_9(struct cdev *VAR_2, u_long VAR_3, caddr_t VAR_4,
    int VAR_5, struct thread *VAR_6)
{
 struct visibility_plugin *VAR_7 =
     (struct visibility_plugin *) VAR_2->si_drv1;
 struct wtap_hal *VAR_8 = VAR_7->base.wp_hal;
 struct link VAR_9;
 int VAR_10;
 int VAR_11 = 0;

 FUNC_2(FUNC_0(VAR_1->td_ucred));
 switch(VAR_3) {
 case 128:
  VAR_10 = *(int *)VAR_4;
  if(VAR_10 == 0)
   FUNC_6(VAR_8->hal_md);
  else
   FUNC_7(VAR_8->hal_md);
  break;
 case 129:
  VAR_9 = *(struct link *)VAR_4;
  if(VAR_9.op == 0)
   FUNC_5(VAR_7, &VAR_9);
  else
   FUNC_4(VAR_7, &VAR_9);



  break;
 default:
  FUNC_3("Unknown WTAP IOCTL\n");
  VAR_11 = VAR_0;
 }

 FUNC_1();
 return VAR_11;
}
