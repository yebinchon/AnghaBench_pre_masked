
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdev_dev {int ev_mtx; int * ev_lock; int ev_lock_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct evdev_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int *,int ) ;

int
FUNC_3(struct evdev_dev *VAR_2)
{
 int VAR_3;

 VAR_2->ev_lock_type = VAR_0;
 VAR_2->ev_lock = &VAR_2->ev_mtx;
 FUNC_2(&VAR_2->ev_mtx, "evmtx", ((void*)0), VAR_1);

 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3 != 0)
  FUNC_1(&VAR_2->ev_mtx);

 return (VAR_3);
}
