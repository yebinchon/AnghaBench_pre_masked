
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct rcc_gpio_softc {scalar_t__ sc_gpio_npins; scalar_t__ sc_output; } ;
typedef int device_t ;
struct TYPE_2__ {int caps; int pin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rcc_gpio_softc*) ;
 int FUNC_1 (struct rcc_gpio_softc*) ;
 scalar_t__ FUNC_2 (struct rcc_gpio_softc*,int ) ;
 struct rcc_gpio_softc* FUNC_3 (int ) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static int
FUNC_4(device_t VAR_4, uint32_t VAR_5, unsigned int *VAR_6)
{
 struct rcc_gpio_softc *VAR_7;
 uint32_t VAR_8;

 VAR_7 = FUNC_3(VAR_4);
 if (VAR_5 >= VAR_7->sc_gpio_npins)
  return (VAR_0);

 FUNC_0(VAR_7);
 if (VAR_3[VAR_5].caps & VAR_1)
  VAR_8 = FUNC_2(VAR_7, VAR_2);
 else
  VAR_8 = VAR_7->sc_output;
 FUNC_1(VAR_7);
 *VAR_6 = (VAR_8 & (1 << VAR_3[VAR_5].pin)) ? 1 : 0;

 return (0);
}
