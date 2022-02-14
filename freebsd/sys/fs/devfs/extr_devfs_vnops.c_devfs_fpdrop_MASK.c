
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct cdev_privdata* f_cdevpriv; } ;
struct cdev_privdata {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cdev_privdata*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct file *VAR_1)
{
 struct cdev_privdata *VAR_2;

 FUNC_1(&VAR_0);
 if ((VAR_2 = VAR_1->f_cdevpriv) == ((void*)0)) {
  FUNC_2(&VAR_0);
  return;
 }
 FUNC_0(VAR_2);
}
