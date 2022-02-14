
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdev_priv {int cdp_flags; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cdev_priv* FUNC_0 (struct cdev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;

void
FUNC_2(struct cdev *VAR_4)
{
 struct cdev_priv *VAR_5;

 FUNC_1(&VAR_3, VAR_1);
 VAR_5 = FUNC_0(VAR_4);
 VAR_5->cdp_flags &= ~VAR_0;
 VAR_2++;
}
