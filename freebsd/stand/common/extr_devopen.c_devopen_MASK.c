
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct open_file {TYPE_1__* f_dev; struct devdesc* f_devdata; } ;
struct devdesc {TYPE_1__* d_dev; } ;
struct TYPE_4__ {int (* arch_getdev ) (void**,char const*,char const**) ;} ;
struct TYPE_3__ {int (* dv_open ) (struct open_file*,struct devdesc*) ;scalar_t__ dv_type; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (struct devdesc*) ;
 int FUNC_1 (struct open_file*) ;
 int FUNC_2 (void**,char const*,char const**) ;
 int FUNC_3 (struct open_file*,struct devdesc*) ;

int
FUNC_4(struct open_file *VAR_2, const char *VAR_3, const char **VAR_4)
{
 struct devdesc *VAR_5;
 int VAR_6;

 VAR_6 = VAR_1.arch_getdev((void **)&VAR_5, VAR_3, VAR_4);
 if (VAR_6)
  return (VAR_6);


 VAR_2->f_dev = VAR_5->d_dev;
 VAR_2->f_devdata = VAR_5;
 VAR_6 = VAR_5->d_dev->dv_open(VAR_2, VAR_5);
 if (VAR_6 != 0) {
  VAR_2->f_devdata = ((void*)0);
  FUNC_0(VAR_5);
  return (VAR_6);
 }
 return (0);
}
