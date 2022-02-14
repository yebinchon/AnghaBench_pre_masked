
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
struct vop_ioctl_args {int a_command; int a_fflag; struct fiodgname_arg* a_data; struct thread* a_td; struct vnode* a_vp; } ;
struct vnode {int dummy; } ;
struct thread {TYPE_1__* td_proc; } ;
struct fiodgname_arg {int len; } ;
struct cdevsw {int d_flags; int (* d_ioctl ) (struct cdev*,int,struct fiodgname_arg*,int ,struct thread*) ;} ;
struct cdev {scalar_t__ si_refcount; } ;
struct TYPE_5__ {int s_ttydp; struct vnode* s_ttyvp; } ;
struct TYPE_4__ {TYPE_2__* p_session; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_3 (struct vnode*) ;
 int FUNC_4 (struct cdev*) ;
 int FUNC_5 (char const*,int ,int) ;
 int FUNC_6 (struct cdev*,int) ;
 char* FUNC_7 (struct cdev*) ;
 struct cdevsw* FUNC_8 (struct vnode*,struct cdev**,int*) ;
 int FUNC_9 (struct fiodgname_arg*,int) ;
 int VAR_6 ;
 int FUNC_10 (char const*) ;
 int FUNC_11 (struct cdev*,int,struct fiodgname_arg*,int ,struct thread*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct vnode*) ;

__attribute__((used)) static int
FUNC_15(struct vop_ioctl_args *VAR_7)
{
 struct fiodgname_arg *VAR_8;
 struct vnode *VAR_9, *VAR_10;
 struct cdevsw *VAR_11;
 struct thread *VAR_12;
 struct cdev *VAR_13;
 int VAR_14, VAR_15, VAR_16;
 const char *VAR_17;
 u_long VAR_18;

 VAR_10 = VAR_7->a_vp;
 VAR_18 = VAR_7->a_command;
 VAR_12 = VAR_7->a_td;

 VAR_11 = FUNC_8(VAR_10, &VAR_13, &VAR_15);
 if (VAR_11 == ((void*)0))
  return (VAR_4);
 FUNC_0(VAR_13->si_refcount > 0,
     ("devfs: un-referenced struct cdev *(%s)", FUNC_7(VAR_13)));

 switch (VAR_18) {
 case 128:
  *(int *)VAR_7->a_data = VAR_11->d_flags & VAR_0;
  VAR_14 = 0;
  break;
 case 130:



  VAR_8 = VAR_7->a_data;
  VAR_17 = FUNC_7(VAR_13);
  VAR_16 = FUNC_10(VAR_17) + 1;
  if (VAR_16 > VAR_8->len)
   VAR_14 = VAR_1;
  else
   VAR_14 = FUNC_5(VAR_17, FUNC_9(VAR_8, VAR_18), VAR_16);
  break;
 default:
  VAR_14 = VAR_11->d_ioctl(VAR_13, VAR_18, VAR_7->a_data, VAR_7->a_fflag, VAR_12);
 }

 FUNC_6(VAR_13, VAR_15);
 if (VAR_14 == VAR_2)
  VAR_14 = VAR_3;

 if (VAR_14 == 0 && VAR_18 == VAR_5) {

  FUNC_12(&VAR_6);
  if (VAR_12->td_proc->p_session->s_ttyvp == VAR_10) {
   FUNC_13(&VAR_6);
   return (0);
  }

  VAR_9 = VAR_12->td_proc->p_session->s_ttyvp;
  FUNC_3(VAR_10);
  FUNC_1(VAR_12->td_proc->p_session);
  VAR_12->td_proc->p_session->s_ttyvp = VAR_10;
  VAR_12->td_proc->p_session->s_ttydp = FUNC_4(VAR_13);
  FUNC_2(VAR_12->td_proc->p_session);

  FUNC_13(&VAR_6);


  if (VAR_9)
   FUNC_14(VAR_9);
 }
 return (VAR_14);
}
