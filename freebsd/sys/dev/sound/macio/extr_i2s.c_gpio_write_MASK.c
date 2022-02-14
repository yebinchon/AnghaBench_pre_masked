
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct aoagpio_softc {int dev; } ;
typedef enum gpio_ctrl { ____Placeholder_gpio_ctrl } gpio_ctrl ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct aoagpio_softc** VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(enum gpio_ctrl VAR_3, u_int VAR_4)
{
 struct aoagpio_softc *VAR_5;
 u_int VAR_6;

 if ((VAR_5 = VAR_2[VAR_3]) == ((void*)0))
  return;

 VAR_6 = VAR_1;
 if (VAR_4)
  VAR_6 |= VAR_0;

 FUNC_0(VAR_5->dev, VAR_6);
}
