
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ec_softc {int ec_gpio; int our_gpio; int dev; } ;
typedef int * device_t ;


 int FUNC_0 (int *,int ,int*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(struct ec_softc *VAR_1)
{
 device_t VAR_2;
 int VAR_3;

 if (VAR_1->our_gpio == 0 || VAR_1->ec_gpio == 0) {
  FUNC_4(VAR_1->dev, "i2c arbitrator is not configured\n");
  return (1);
 }

 VAR_2 = FUNC_3(FUNC_2("gpio"), 0);
 if (VAR_2 == ((void*)0)) {
  FUNC_4(VAR_1->dev, "cant find gpio_dev\n");
  return (1);
 }


 FUNC_1(VAR_2, VAR_1->our_gpio, VAR_0);




 FUNC_0(VAR_2, VAR_1->ec_gpio, &VAR_3);

 if (VAR_3 == 1) {

  return (0);
 }


 return (-1);
}
