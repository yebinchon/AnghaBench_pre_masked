
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {struct cdev_privdata* f_cdevpriv; } ;
struct cdev_privdata {void* cdpd_data; } ;
struct TYPE_2__ {struct file* td_fpop; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

int
FUNC_0(void **VAR_3)
{
 struct file *VAR_4;
 struct cdev_privdata *VAR_5;
 int VAR_6;

 VAR_4 = VAR_2->td_fpop;
 if (VAR_4 == ((void*)0))
  return (VAR_0);
 VAR_5 = VAR_4->f_cdevpriv;
 if (VAR_5 != ((void*)0)) {
  VAR_6 = 0;
  *VAR_3 = VAR_5->cdpd_data;
 } else
  VAR_6 = VAR_1;
 return (VAR_6);
}
