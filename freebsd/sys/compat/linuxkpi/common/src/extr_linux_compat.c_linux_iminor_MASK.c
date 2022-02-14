
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct linux_cdev {int dev; } ;
struct inode {TYPE_1__* v_rdev; } ;
struct TYPE_2__ {struct linux_cdev* si_drv1; int * si_devsw; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ) ;

unsigned int
FUNC_1(struct inode *VAR_1)
{
 struct linux_cdev *VAR_2;

 if (VAR_1 == ((void*)0) || VAR_1->v_rdev == ((void*)0) ||
     VAR_1->v_rdev->si_devsw != &VAR_0)
  return (-1U);
 VAR_2 = VAR_1->v_rdev->si_drv1;
 if (VAR_2 == ((void*)0))
  return (-1U);

 return (FUNC_0(VAR_2->dev));
}
