
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdev_dev {struct evdev_client* ev_grabber; } ;
struct evdev_client {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct evdev_dev*) ;

int
FUNC_1(struct evdev_dev *VAR_1, struct evdev_client *VAR_2)
{

 FUNC_0(VAR_1);

 if (VAR_1->ev_grabber != VAR_2)
  return (VAR_0);

 VAR_1->ev_grabber = ((void*)0);

 return (0);
}
