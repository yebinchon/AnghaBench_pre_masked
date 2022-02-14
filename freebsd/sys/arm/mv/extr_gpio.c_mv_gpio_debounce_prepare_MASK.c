
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_gpio_softc {struct callout** debounce_callouts; } ;
struct callout {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct callout*,int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_3, int VAR_4)
{
 struct callout *VAR_5;
 struct mv_gpio_softc *VAR_6;

 VAR_6 = (struct mv_gpio_softc *)FUNC_1(VAR_3);

 VAR_5 = VAR_6->debounce_callouts[VAR_4];
 if (VAR_5 == ((void*)0)) {
  VAR_5 = (struct callout *)FUNC_2(sizeof(struct callout),
      VAR_1, VAR_2);
  VAR_6->debounce_callouts[VAR_4] = VAR_5;
  if (VAR_5 == ((void*)0))
   return (VAR_0);
  FUNC_0(VAR_5, 1);
 }

 return (0);
}
