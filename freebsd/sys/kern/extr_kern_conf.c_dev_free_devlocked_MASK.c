
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdev_priv {int cdp_flags; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 int FUNC_1 (int *,struct cdev_priv*,int ) ;
 struct cdev_priv* FUNC_2 (struct cdev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct cdev *VAR_5)
{
 struct cdev_priv *VAR_6;

 FUNC_3(&VAR_4, VAR_1);
 VAR_6 = FUNC_2(VAR_5);
 FUNC_0((VAR_6->cdp_flags & VAR_0) == 0,
     ("destroy_dev() was not called after delist_dev(%p)", VAR_5));
 FUNC_1(&VAR_2, VAR_6, VAR_3);
}
