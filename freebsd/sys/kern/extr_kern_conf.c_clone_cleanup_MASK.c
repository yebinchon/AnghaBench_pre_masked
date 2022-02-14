
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct clonedevs {int head; } ;
struct cdev_priv {int cdp_flags; } ;
struct cdev {int si_flags; int si_name; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 struct cdev* FUNC_2 (int *) ;
 int FUNC_3 (struct cdev*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct cdev_priv* FUNC_4 (struct cdev*) ;
 int FUNC_5 (struct cdev*) ;
 scalar_t__ FUNC_6 (struct cdev*) ;
 int FUNC_7 (struct cdev*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (struct clonedevs*,int ) ;
 int VAR_4 ;

void
FUNC_11(struct clonedevs **VAR_5)
{
 struct cdev *VAR_6;
 struct cdev_priv *VAR_7;
 struct clonedevs *VAR_8;

 VAR_8 = *VAR_5;
 if (VAR_8 == ((void*)0))
  return;
 FUNC_8();
 while (!FUNC_1(&VAR_8->head)) {
  VAR_6 = FUNC_2(&VAR_8->head);
  FUNC_3(VAR_6, VAR_4);
  FUNC_0(VAR_6->si_flags & VAR_2,
      ("Dev %p(%s) should be on clonelist", VAR_6, VAR_6->si_name));
  VAR_6->si_flags &= ~VAR_2;
  VAR_7 = FUNC_4(VAR_6);
  if (!(VAR_7->cdp_flags & VAR_0)) {
   VAR_7->cdp_flags |= VAR_0;
   FUNC_0(VAR_6->si_flags & VAR_3,
    ("Driver has goofed in cloning underways udev %jx unit %x",
    (uintmax_t)FUNC_6(VAR_6), FUNC_7(VAR_6)));
   FUNC_5(VAR_6);
  }
 }
 FUNC_9();
 FUNC_10(VAR_8, VAR_1);
 *VAR_5 = ((void*)0);
}
