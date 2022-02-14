
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {struct cdev* f_data; int f_vnode; } ;
struct cdevsw {int dummy; } ;
struct cdev {scalar_t__ si_refcount; } ;
struct TYPE_2__ {struct file* td_fpop; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct cdev*,int) ;
 int FUNC_2 (struct cdev*) ;
 struct cdevsw* FUNC_3 (int ,struct cdev**,int*) ;

__attribute__((used)) static int
FUNC_4(struct file *VAR_2, struct cdev **VAR_3, struct cdevsw **VAR_4,
    int *VAR_5)
{

 *VAR_4 = FUNC_3(VAR_2->f_vnode, VAR_3, VAR_5);
 if (*VAR_3 != VAR_2->f_data) {
  if (*VAR_4 != ((void*)0))
   FUNC_1(*VAR_3, *VAR_5);
  return (VAR_0);
 }
 FUNC_0((*VAR_3)->si_refcount > 0,
     ("devfs: un-referenced struct cdev *(%s)", FUNC_2(*VAR_3)));
 if (*VAR_4 == ((void*)0))
  return (VAR_0);
 VAR_1->td_fpop = VAR_2;
 return (0);
}
