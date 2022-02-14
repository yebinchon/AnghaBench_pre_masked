
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdev_priv {scalar_t__ cdp_inode; } ;
struct cdev {int dummy; } ;
typedef int priv ;
typedef int kvm_t ;
typedef int dev_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct cdev*) ;
 scalar_t__ FUNC_2 (int *,unsigned long,struct cdev_priv*,int) ;
 int FUNC_3 (char*,struct cdev*) ;

dev_t
FUNC_4(kvm_t *VAR_0, struct cdev *VAR_1)
{
 struct cdev_priv VAR_2;

 FUNC_0(VAR_0);
 if (FUNC_2(VAR_0, (unsigned long)FUNC_1(VAR_1), &VAR_2,
     sizeof(VAR_2))) {
  return ((dev_t)VAR_2.cdp_inode);
 } else {
  FUNC_3("can't convert cdev *%p to a dev_t\n", VAR_1);
  return (-1);
 }
}
