
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct mv_gpio_softc {scalar_t__ pin_num; } ;
struct mv_gpio_pindev {scalar_t__ pin; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_2(struct mv_gpio_pindev *VAR_1)
{
 uint32_t VAR_2, VAR_3;
 struct mv_gpio_softc *VAR_4;
 VAR_4 = (struct mv_gpio_softc *)FUNC_0(VAR_1->dev);
 VAR_3 = VAR_1->pin;

 if (VAR_3 >= VAR_4->pin_num)
  return;

 VAR_2 = VAR_0;

 FUNC_1(VAR_1->dev, VAR_2, VAR_3);
}
