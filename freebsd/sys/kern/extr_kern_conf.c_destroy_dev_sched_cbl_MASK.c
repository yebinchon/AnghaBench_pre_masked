
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdev_priv {int cdp_flags; void (* cdp_dtr_cb ) (void*) ;void* cdp_dtr_cb_arg; } ;
struct cdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct cdev_priv*,int ) ;
 struct cdev_priv* FUNC_1 (struct cdev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct cdev*) ;
 int FUNC_3 () ;
 int VAR_5 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ,int *) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_6(struct cdev *VAR_7, void (*VAR_8)(void *), void *VAR_9)
{
 struct cdev_priv *VAR_10;

 FUNC_4(&VAR_5, VAR_1);
 VAR_10 = FUNC_1(VAR_7);
 if (VAR_10->cdp_flags & VAR_0) {
  FUNC_3();
  return (0);
 }
 FUNC_2(VAR_7);
 VAR_10->cdp_flags |= VAR_0;
 VAR_10->cdp_dtr_cb = VAR_8;
 VAR_10->cdp_dtr_cb_arg = VAR_9;
 FUNC_0(&VAR_3, VAR_10, VAR_2);
 FUNC_3();
 FUNC_5(VAR_6, &VAR_4);
 return (1);
}
