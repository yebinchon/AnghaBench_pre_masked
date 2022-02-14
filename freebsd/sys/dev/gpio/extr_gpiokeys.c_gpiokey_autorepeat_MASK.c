
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiokey {scalar_t__ keycode; int repeat; int repeat_callout; int parent_sc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,void (*) (void*),struct gpiokey*) ;
 int FUNC_1 (int ,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 struct gpiokey *VAR_2;

 VAR_2 = VAR_1;

 if (VAR_2->keycode == VAR_0)
  return;

 FUNC_1(VAR_2->parent_sc, VAR_2->keycode, 1);

 FUNC_0(&VAR_2->repeat_callout, VAR_2->repeat,
      FUNC_2, VAR_2);
}
