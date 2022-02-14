
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpiokey {int debounce_interval; int debounce_callout; } ;


 int FUNC_0 (struct gpiokey*) ;
 int FUNC_1 (struct gpiokey*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int ,struct gpiokey*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(void *VAR_2)
{
 struct gpiokey *VAR_3;
 int VAR_4;

 VAR_3 = VAR_2;

 FUNC_0(VAR_3);
 VAR_4 = (VAR_1 * VAR_3->debounce_interval) / 1000;
 if (VAR_4 == 0)
  VAR_4 = 1;
 if (!FUNC_2(&VAR_3->debounce_callout))
  FUNC_3(&VAR_3->debounce_callout, VAR_4,
      VAR_0, VAR_3);
 FUNC_1(VAR_3);
}
