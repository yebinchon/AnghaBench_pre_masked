
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct evdev_dev {scalar_t__ ev_rep_key; int ev_rep_callout; } ;


 int FUNC_0 (struct evdev_dev*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct evdev_dev *VAR_1)
{

 FUNC_0(VAR_1);

 if (VAR_1->ev_rep_key != VAR_0) {
  FUNC_1(&VAR_1->ev_rep_callout);
  VAR_1->ev_rep_key = VAR_0;
 }
}
