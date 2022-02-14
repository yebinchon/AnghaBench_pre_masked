
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct aw_gpio_softc {TYPE_1__* padconf; } ;
typedef int device_t ;
struct TYPE_2__ {int npins; } ;


 struct aw_gpio_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_0, int *VAR_1)
{
 struct aw_gpio_softc *VAR_2;

 VAR_2 = FUNC_0(VAR_0);

 *VAR_1 = VAR_2->padconf->npins - 1;
 return (0);
}
