
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnode {int v_vflag; struct cdev* v_rdev; } ;
struct cdevsw {int dummy; } ;
struct cdev_priv {int cdp_flags; } ;
struct cdev {int si_flags; int si_threadcount; struct cdevsw* si_devsw; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int) ;
 struct cdev_priv* FUNC_2 (struct cdev*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_4 ;
 int FUNC_5 (int *,int ) ;

struct cdevsw *
FUNC_6(struct vnode *VAR_5, struct cdev **VAR_6, int *VAR_7)
{
 struct cdevsw *VAR_8;
 struct cdev_priv *VAR_9;
 struct cdev *VAR_10;

 FUNC_5(&VAR_4, VAR_1);
 if ((VAR_5->v_vflag & VAR_3) != 0) {
  VAR_10 = VAR_5->v_rdev;
  if (VAR_10 == ((void*)0))
   return (((void*)0));
  FUNC_0((VAR_10->si_flags & VAR_2) != 0,
      ("Not eternal cdev"));
  *VAR_7 = 0;
  VAR_8 = VAR_10->si_devsw;
  FUNC_0(VAR_8 != ((void*)0), ("Eternal cdev is destroyed"));
  *VAR_6 = VAR_10;
  return (VAR_8);
 }

 VAR_8 = ((void*)0);
 FUNC_3();
 VAR_10 = VAR_5->v_rdev;
 if (VAR_10 == ((void*)0)) {
  FUNC_4();
  return (((void*)0));
 }
 VAR_9 = FUNC_2(VAR_10);
 if ((VAR_9->cdp_flags & VAR_0) == 0) {
  VAR_8 = VAR_10->si_devsw;
  if (VAR_8 != ((void*)0))
   FUNC_1(&VAR_10->si_threadcount, 1);
 }
 FUNC_4();
 if (VAR_8 != ((void*)0)) {
  *VAR_6 = VAR_10;
  *VAR_7 = 1;
 }
 return (VAR_8);
}
