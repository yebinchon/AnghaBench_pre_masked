
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct rcc_gpio_softc {scalar_t__ sc_gpio_npins; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ caps; } ;


 int VAR_0 ;
 struct rcc_gpio_softc* FUNC_0 (int ) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int
FUNC_1(device_t VAR_2, uint32_t VAR_3, uint32_t *VAR_4)
{
 struct rcc_gpio_softc *VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_3 >= VAR_5->sc_gpio_npins)
  return (VAR_0);

 *VAR_4 = VAR_1[VAR_3].caps;

 return (0);
}
