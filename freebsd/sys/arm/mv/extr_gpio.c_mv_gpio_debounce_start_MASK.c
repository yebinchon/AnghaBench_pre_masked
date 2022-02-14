
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_gpio_softc {struct callout** debounce_callouts; } ;
struct mv_gpio_pindev {int member_1; int pin; int dev; int member_0; } ;
struct callout {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct callout*) ;
 scalar_t__ FUNC_2 (struct callout*) ;
 int FUNC_3 (struct callout*,int ,int ,struct mv_gpio_pindev*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int,int ,int ) ;
 int VAR_3 ;
 int FUNC_6 (struct mv_gpio_pindev*) ;

__attribute__((used)) static void
FUNC_7(device_t VAR_4, int VAR_5)
{
 struct callout *VAR_6;
 struct mv_gpio_pindev VAR_7 = {VAR_4, VAR_5};
 struct mv_gpio_pindev *VAR_8;
 struct mv_gpio_softc *VAR_9;
 VAR_9 = (struct mv_gpio_softc *)FUNC_4(VAR_4);

 FUNC_0();

 VAR_6 = VAR_9->debounce_callouts[VAR_5];
 if (VAR_6 == ((void*)0)) {
  FUNC_6(&VAR_7);
  return;
 }

 if (FUNC_2(VAR_6) || FUNC_1(VAR_6)) {
  FUNC_6(&VAR_7);
  return;
 }

 VAR_8 = (struct mv_gpio_pindev *)FUNC_5(sizeof(struct mv_gpio_pindev),
     VAR_1, VAR_2);
 if (VAR_8 == ((void*)0)) {
  FUNC_6(&VAR_7);
  return;
 }
 VAR_8->pin = VAR_5;
 VAR_8->dev = VAR_4;

 FUNC_3(VAR_6, VAR_0, VAR_3, VAR_8);
}
