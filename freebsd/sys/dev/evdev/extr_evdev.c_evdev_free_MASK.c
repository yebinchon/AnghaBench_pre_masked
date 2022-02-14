
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct evdev_dev {TYPE_1__* ev_cdev; } ;
struct TYPE_2__ {int * si_drv1; } ;


 int VAR_0 ;
 int FUNC_0 (struct evdev_dev*) ;
 int FUNC_1 (struct evdev_dev*,int ) ;

void
FUNC_2(struct evdev_dev *VAR_1)
{

 if (VAR_1 != ((void*)0) && VAR_1->ev_cdev != ((void*)0) &&
     VAR_1->ev_cdev->si_drv1 != ((void*)0))
  FUNC_0(VAR_1);

 FUNC_1(VAR_1, VAR_0);
}
