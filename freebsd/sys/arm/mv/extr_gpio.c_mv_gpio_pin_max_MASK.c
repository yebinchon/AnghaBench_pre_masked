
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_gpio_softc {int pin_num; } ;
typedef int device_t ;


 int VAR_0 ;
 struct mv_gpio_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_1, int *VAR_2)
{
 struct mv_gpio_softc *VAR_3;
 if (VAR_2 == ((void*)0))
  return (VAR_0);

 VAR_3 = FUNC_0(VAR_1);
 *VAR_2 = VAR_3->pin_num;

 return (0);
}
