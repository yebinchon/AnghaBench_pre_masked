
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct jz4780_gpio_softc {TYPE_1__* pins; } ;
typedef int device_t ;
struct TYPE_2__ {size_t pin_caps; } ;


 int VAR_0 ;
 int FUNC_0 (struct jz4780_gpio_softc*) ;
 size_t VAR_1 ;
 int FUNC_1 (struct jz4780_gpio_softc*) ;
 struct jz4780_gpio_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2, uint32_t VAR_3, uint32_t *VAR_4)
{
 struct jz4780_gpio_softc *VAR_5;

 if (VAR_3 >= VAR_1)
  return (VAR_0);

 VAR_5 = FUNC_2(VAR_2);
 FUNC_0(VAR_5);
 *VAR_4 = VAR_5->pins[VAR_3].pin_caps;
 FUNC_1(VAR_5);

 return (0);
}
