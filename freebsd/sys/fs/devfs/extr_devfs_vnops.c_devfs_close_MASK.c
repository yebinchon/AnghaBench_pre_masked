
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vop_close_args {int a_fflag; struct thread* a_td; struct vnode* a_vp; } ;
struct vnode {int v_iflag; int * v_data; struct cdev* v_rdev; } ;
struct thread {struct proc* td_proc; } ;
struct proc {TYPE_1__* p_session; } ;
struct cdevsw {int d_flags; int (* d_close ) (struct cdev*,int,int ,struct thread*) ;} ;
struct cdev {scalar_t__ si_refcount; } ;
struct TYPE_3__ {int * s_ttydp; struct vnode* s_ttyvp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*) ;
 int VAR_5 ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct vnode*) ;
 int FUNC_6 (struct vnode*) ;
 int FUNC_7 (struct vnode*) ;
 int FUNC_8 (struct vnode*,int ) ;
 int FUNC_9 (struct cdev*) ;
 struct cdevsw* FUNC_10 (struct cdev*,int*) ;
 int FUNC_11 (struct cdev*,int) ;
 int FUNC_12 (struct cdev*) ;
 int VAR_8 ;
 int FUNC_13 (struct cdev*,int,int ,struct thread*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct vnode*) ;
 int FUNC_17 (struct vnode*) ;
 int FUNC_18 (struct vnode*,int) ;
 int FUNC_19 (struct vnode*) ;

__attribute__((used)) static int
FUNC_20(struct vop_close_args *VAR_9)
{
 struct vnode *VAR_10 = VAR_9->a_vp, *VAR_11;
 struct thread *VAR_12 = VAR_9->a_td;
 struct proc *VAR_13;
 struct cdev *VAR_14 = VAR_10->v_rdev;
 struct cdevsw *VAR_15;
 int VAR_16, VAR_17, VAR_18, VAR_19;





 if (VAR_10->v_data == ((void*)0))
  return (0);
 if (VAR_12 != ((void*)0)) {
  VAR_13 = VAR_12->td_proc;
  FUNC_1(VAR_13);
  if (VAR_10 == VAR_13->p_session->s_ttyvp) {
   FUNC_2(VAR_13);
   VAR_11 = ((void*)0);
   FUNC_14(&VAR_8);
   if (VAR_10 == VAR_13->p_session->s_ttyvp) {
    FUNC_3(VAR_13->p_session);
    FUNC_5(VAR_10);
    if (FUNC_9(VAR_14) == 2 &&
        (VAR_10->v_iflag & VAR_7) == 0) {
     VAR_13->p_session->s_ttyvp = ((void*)0);
     VAR_13->p_session->s_ttydp = ((void*)0);
     VAR_11 = VAR_10;
    }
    FUNC_6(VAR_10);
    FUNC_4(VAR_13->p_session);
   }
   FUNC_15(&VAR_8);
   if (VAR_11 != ((void*)0))
    FUNC_19(VAR_11);
  } else
   FUNC_2(VAR_13);
 }
 VAR_15 = FUNC_10(VAR_14, &VAR_18);
 if (VAR_15 == ((void*)0))
  return (VAR_1);
 VAR_16 = 0;
 FUNC_5(VAR_10);
 if (VAR_10->v_iflag & VAR_7) {

  VAR_16 |= VAR_4 | VAR_3;
 } else if (VAR_15->d_flags & VAR_0) {

 } else if (FUNC_9(VAR_14) > 1) {
  FUNC_6(VAR_10);
  FUNC_11(VAR_14, VAR_18);
  return (0);
 }
 if (FUNC_9(VAR_14) == 1)
  VAR_16 |= VAR_2;
 FUNC_17(VAR_10);
 FUNC_6(VAR_10);
 VAR_19 = FUNC_7(VAR_10);
 FUNC_8(VAR_10, 0);
 FUNC_0(VAR_14->si_refcount > 0,
     ("devfs_close() on un-referenced struct cdev *(%s)", FUNC_12(VAR_14)));
 VAR_17 = VAR_15->d_close(VAR_14, VAR_9->a_fflag | VAR_16, VAR_6, VAR_12);
 FUNC_11(VAR_14, VAR_18);
 FUNC_18(VAR_10, VAR_19 | VAR_5);
 FUNC_16(VAR_10);
 return (VAR_17);
}
