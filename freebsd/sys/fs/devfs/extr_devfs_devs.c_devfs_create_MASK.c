
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdev_priv {int cdp_inode; int cdp_flags; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct cdev_priv*,int ) ;
 int FUNC_1 (int ) ;
 struct cdev_priv* FUNC_2 (struct cdev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct cdev*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,int ) ;

void
FUNC_5(struct cdev *VAR_7)
{
 struct cdev_priv *VAR_8;

 FUNC_4(&VAR_6, VAR_1);
 VAR_8 = FUNC_2(VAR_7);
 VAR_8->cdp_flags |= VAR_0;
 VAR_8->cdp_inode = FUNC_1(VAR_5);
 FUNC_3(VAR_7);
 FUNC_0(&VAR_2, VAR_8, VAR_3);
 VAR_4++;
}
