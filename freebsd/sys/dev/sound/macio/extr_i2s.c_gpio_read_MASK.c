
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct aoagpio_softc {int dev; } ;
typedef enum gpio_ctrl { ____Placeholder_gpio_ctrl } gpio_ctrl ;


 int VAR_0 ;
 struct aoagpio_softc** VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static u_int
FUNC_1(enum gpio_ctrl VAR_2)
{
 struct aoagpio_softc *VAR_3;

 if ((VAR_3 = VAR_1[VAR_2]) == ((void*)0))
  return (0);

 return (FUNC_0(VAR_3->dev) & VAR_0);
}
