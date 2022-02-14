
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdevsw {int dummy; } ;
struct cdev_priv {int cdp_flags; } ;
struct cdev {int si_flags; int si_threadcount; struct cdevsw* si_devsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 struct cdev_priv* FUNC_1 (struct cdev*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 (int *,int ) ;

struct cdevsw *
FUNC_5(struct cdev *VAR_4, int *VAR_5)
{
 struct cdevsw *VAR_6;
 struct cdev_priv *VAR_7;

 FUNC_4(&VAR_3, VAR_1);
 if ((VAR_4->si_flags & VAR_2) != 0) {
  *VAR_5 = 0;
  return (VAR_4->si_devsw);
 }
 FUNC_2();
 VAR_6 = VAR_4->si_devsw;
 if (VAR_6 != ((void*)0)) {
  VAR_7 = FUNC_1(VAR_4);
  if ((VAR_7->cdp_flags & VAR_0) == 0)
   FUNC_0(&VAR_4->si_threadcount, 1);
  else
   VAR_6 = ((void*)0);
 }
 FUNC_3();
 if (VAR_6 != ((void*)0))
  *VAR_5 = 1;
 return (VAR_6);
}
