
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv_gpio_softc {size_t pin_num; TYPE_1__* gpio_setup; } ;
struct mv_gpio_pindev {size_t pin; int dev; } ;
struct TYPE_2__ {int gp_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,size_t,int) ;
 int FUNC_4 (int ,size_t,int) ;

__attribute__((used)) static void
FUNC_5(struct mv_gpio_pindev *VAR_2)
{
 struct mv_gpio_softc *VAR_3;
 VAR_3 = (struct mv_gpio_softc *)FUNC_2(VAR_2->dev);

 if (VAR_2->pin >= VAR_3->pin_num)
  return;

 FUNC_0();

 if (VAR_3->gpio_setup[VAR_2->pin].gp_flags & (VAR_1 |
     VAR_0))
  FUNC_3(VAR_2->dev, VAR_2->pin, 1);
 else
  FUNC_4(VAR_2->dev, VAR_2->pin, 1);

 FUNC_1();

 return;
}
