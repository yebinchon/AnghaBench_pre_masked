
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx {int dummy; } ;
struct evdev_dev {struct mtx* ev_lock; int ev_lock_type; } ;


 int VAR_0 ;
 int FUNC_0 (struct evdev_dev*) ;

int
FUNC_1(struct evdev_dev *VAR_1, struct mtx *VAR_2)
{

 VAR_1->ev_lock_type = VAR_0;
 VAR_1->ev_lock = VAR_2;
 return (FUNC_0(VAR_1));
}
