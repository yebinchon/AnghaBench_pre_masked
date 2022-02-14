
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdev_privdata {int cdpd_data; int (* cdpd_dtr ) (int ) ;TYPE_1__* cdpd_fp; } ;
struct TYPE_2__ {struct cdev_privdata* f_cdevpriv; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct cdev_privdata*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct cdev_privdata*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;

void
FUNC_6(struct cdev_privdata *VAR_4)
{

 FUNC_3(&VAR_2, VAR_0);
 FUNC_0(VAR_4->cdpd_fp->f_cdevpriv == VAR_4,
     ("devfs_destoy_cdevpriv %p != %p", VAR_4->cdpd_fp->f_cdevpriv, VAR_4));
 VAR_4->cdpd_fp->f_cdevpriv = ((void*)0);
 FUNC_1(VAR_4, VAR_3);
 FUNC_4(&VAR_2);
 (VAR_4->cdpd_dtr)(VAR_4->cdpd_data);
 FUNC_2(VAR_4, VAR_1);
}
