
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ec_softc {int * dev_gpio; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(struct ec_softc *VAR_4, int VAR_5)
{

 VAR_4->dev_gpio = FUNC_3(FUNC_2("gpio"), 0);
 if (VAR_4->dev_gpio == ((void*)0)) {
  FUNC_4(VAR_4->dev, "Error: failed to get the GPIO dev\n");
  return (1);
 }

 FUNC_1(VAR_4->dev_gpio, VAR_0, VAR_3);

 if (VAR_5) {
  FUNC_0(VAR_4->dev_gpio, VAR_0, VAR_2);
 } else {
  FUNC_0(VAR_4->dev_gpio, VAR_0, VAR_1);
 }

 return (0);
}
