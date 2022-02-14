
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiokey {scalar_t__ keycode; int parent_sc; int repeat_callout; scalar_t__ autorepeat; int repeat_delay; int pin; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int ,struct gpiokey*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int*) ;
 int VAR_1 ;
 int FUNC_4 (int ,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_5(void *VAR_2)
{
 struct gpiokey *VAR_3;
 bool VAR_4;

 VAR_3 = VAR_2;

 if (VAR_3->keycode == VAR_0)
  return;

 FUNC_3(VAR_3->pin, &VAR_4);
 if (VAR_4) {
  FUNC_4(VAR_3->parent_sc, VAR_3->keycode, 1);
  if (VAR_3->autorepeat) {
   FUNC_1(&VAR_3->repeat_callout, VAR_3->repeat_delay,
       VAR_1, VAR_3);
  }
 }
 else {
  if (VAR_3->autorepeat &&
      FUNC_0(&VAR_3->repeat_callout))
   FUNC_2(&VAR_3->repeat_callout);
  FUNC_4(VAR_3->parent_sc, VAR_3->keycode, 0);
 }
}
