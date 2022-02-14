
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_gpio_softc {struct callout** debounce_callouts; } ;
struct callout {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (struct callout*) ;
 int FUNC_2 (struct callout*) ;
 int FUNC_3 (struct callout*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1, int VAR_2)
{
 struct callout *VAR_3;
 struct mv_gpio_softc *VAR_4;

 VAR_4 = (struct mv_gpio_softc *)FUNC_4(VAR_1);

 FUNC_0();

 VAR_3 = VAR_4->debounce_callouts[VAR_2];
 if (VAR_3 == ((void*)0))
  return (VAR_0);

 if (FUNC_1(VAR_3))
  FUNC_2(VAR_3);

 FUNC_3(VAR_3);

 return (0);
}
