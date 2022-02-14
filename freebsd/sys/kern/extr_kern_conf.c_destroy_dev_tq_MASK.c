
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdev {int dummy; } ;
struct cdev_priv {int cdp_flags; void (* cdp_dtr_cb ) (void*) ;void* cdp_dtr_cb_arg; struct cdev cdp_c; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 struct cdev_priv* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct cdev_priv*,int ) ;
 int VAR_1 ;
 int FUNC_4 (struct cdev*) ;
 int VAR_2 ;
 int FUNC_5 () ;
 int FUNC_6 (struct cdev*) ;
 int FUNC_7 () ;
 int FUNC_8 () ;

__attribute__((used)) static void
FUNC_9(void *VAR_3, int VAR_4)
{
 struct cdev_priv *VAR_5;
 struct cdev *VAR_6;
 void (*VAR_7)(void *);
 void *VAR_8;

 FUNC_5();
 while (!FUNC_1(&VAR_2)) {
  VAR_5 = FUNC_2(&VAR_2);
  VAR_6 = &VAR_5->cdp_c;
  FUNC_0(VAR_5->cdp_flags & VAR_0,
      ("cdev %p in dev_destroy_tq without CDP_SCHED_DTR", VAR_5));
  FUNC_3(&VAR_2, VAR_5, VAR_1);
  VAR_7 = VAR_5->cdp_dtr_cb;
  VAR_8 = VAR_5->cdp_dtr_cb_arg;
  FUNC_4(VAR_6);
  FUNC_8();
  FUNC_6(VAR_6);
  if (VAR_7 != ((void*)0))
   VAR_7(VAR_8);
  FUNC_5();
 }
 FUNC_7();
}
