
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct free_cdevsw {int dummy; } ;
struct cdevsw {int dummy; } ;
struct cdev_priv_list {int dummy; } ;
struct cdev_priv {int cdp_c; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cdevsw* FUNC_0 (struct free_cdevsw*) ;
 int FUNC_1 (struct free_cdevsw*) ;
 int FUNC_2 (struct free_cdevsw*,int ) ;
 int FUNC_3 (struct cdev_priv_list*,int *,int ) ;
 struct cdev_priv* FUNC_4 (struct cdev_priv_list*) ;
 int FUNC_5 (struct cdev_priv_list*) ;
 int FUNC_6 (struct cdev_priv_list*,struct cdev_priv*,int ) ;
 int VAR_2 ;
 struct free_cdevsw VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int *) ;
 int VAR_6 ;
 int FUNC_8 (struct cdevsw*,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(void)
{
 struct cdev_priv_list VAR_7;
 struct free_cdevsw VAR_8;
 struct cdev_priv *VAR_9;
 struct cdevsw *VAR_10;

 FUNC_9(&VAR_6, VAR_0);





 FUNC_5(&VAR_7);
 FUNC_3(&VAR_7, &VAR_2, VAR_4);
 VAR_8 = VAR_3;
 FUNC_1(&VAR_3);

 FUNC_10(&VAR_6);

 while ((VAR_9 = FUNC_4(&VAR_7)) != ((void*)0)) {
  FUNC_6(&VAR_7, VAR_9, VAR_4);
  FUNC_7(&VAR_9->cdp_c);
 }
 while ((VAR_10 = FUNC_0(&VAR_8)) != ((void*)0)) {
  FUNC_2(&VAR_8, VAR_5);
  FUNC_8(VAR_10, VAR_1);
 }
}
