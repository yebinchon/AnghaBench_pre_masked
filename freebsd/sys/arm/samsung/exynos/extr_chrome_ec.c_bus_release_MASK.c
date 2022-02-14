
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ec_softc {scalar_t__ ec_gpio; int our_gpio; int dev; } ;
typedef int * device_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(struct ec_softc *VAR_1)
{
 device_t VAR_2;

 if (VAR_1->our_gpio == 0 || VAR_1->ec_gpio == 0) {
  FUNC_3(VAR_1->dev, "i2c arbitrator is not configured\n");
  return (1);
 }

 VAR_2 = FUNC_2(FUNC_1("gpio"), 0);
 if (VAR_2 == ((void*)0)) {
  FUNC_3(VAR_1->dev, "cant find gpio_dev\n");
  return (1);
 }

 FUNC_0(VAR_2, VAR_1->our_gpio, VAR_0);

 return (0);
}
