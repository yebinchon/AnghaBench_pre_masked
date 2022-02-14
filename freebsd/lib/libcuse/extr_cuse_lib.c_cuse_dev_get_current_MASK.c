
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cuse_dev_entered {int cmd; struct cuse_dev* cdev; } ;
struct cuse_dev {int dummy; } ;


 struct cuse_dev_entered* FUNC_0 () ;

struct cuse_dev *
FUNC_1(int *VAR_0)
{
 struct cuse_dev_entered *VAR_1;

 VAR_1 = FUNC_0();
 if (VAR_1 == ((void*)0)) {
  if (VAR_0 != ((void*)0))
   *VAR_0 = 0;
  return (((void*)0));
 }
 if (VAR_0 != ((void*)0))
  *VAR_0 = VAR_1->cmd;
 return (VAR_1->cdev);
}
