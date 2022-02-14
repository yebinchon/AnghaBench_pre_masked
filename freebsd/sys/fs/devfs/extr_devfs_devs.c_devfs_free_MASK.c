
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdev_priv {scalar_t__ cdp_maxdirent; struct cdev_priv* cdp_dirents; int cdp_inode; } ;
struct cdev {int * si_cred; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cdev_priv* FUNC_0 (struct cdev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cdev_priv*,int ) ;

void
FUNC_4(struct cdev *VAR_2)
{
 struct cdev_priv *VAR_3;

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_2->si_cred != ((void*)0))
  FUNC_1(VAR_2->si_cred);
 FUNC_2(VAR_3->cdp_inode);
 if (VAR_3->cdp_maxdirent > 0)
  FUNC_3(VAR_3->cdp_dirents, VAR_1);
 FUNC_3(VAR_3, VAR_0);
}
