
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {struct cdev_privdata* f_cdevpriv; scalar_t__ f_data; } ;
struct cdev_privdata {struct file* cdpd_fp; int * cdpd_dtr; void* cdpd_data; } ;
struct cdev_priv {int cdp_fdpriv; } ;
struct cdev {int dummy; } ;
typedef int d_priv_dtor_t ;
struct TYPE_2__ {struct file* td_fpop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct cdev_privdata*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct cdev_priv* FUNC_1 (struct cdev*) ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_2 (struct cdev_privdata*,int ) ;
 struct cdev_privdata* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int
FUNC_6(void *VAR_7, d_priv_dtor_t *VAR_8)
{
 struct file *VAR_9;
 struct cdev_priv *VAR_10;
 struct cdev_privdata *VAR_11;
 int VAR_12;

 VAR_9 = VAR_6->td_fpop;
 if (VAR_9 == ((void*)0))
  return (VAR_1);
 VAR_10 = FUNC_1((struct cdev *)VAR_9->f_data);
 VAR_11 = FUNC_3(sizeof(struct cdev_privdata), VAR_2, VAR_3);
 VAR_11->cdpd_data = VAR_7;
 VAR_11->cdpd_dtr = VAR_8;
 VAR_11->cdpd_fp = VAR_9;
 FUNC_4(&VAR_4);
 if (VAR_9->f_cdevpriv == ((void*)0)) {
  FUNC_0(&VAR_10->cdp_fdpriv, VAR_11, VAR_5);
  VAR_9->f_cdevpriv = VAR_11;
  FUNC_5(&VAR_4);
  VAR_12 = 0;
 } else {
  FUNC_5(&VAR_4);
  FUNC_2(VAR_11, VAR_2);
  VAR_12 = VAR_0;
 }
 return (VAR_12);
}
