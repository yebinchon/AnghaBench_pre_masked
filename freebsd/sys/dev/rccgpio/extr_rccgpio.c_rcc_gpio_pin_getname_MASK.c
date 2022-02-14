
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct rcc_gpio_softc {scalar_t__ sc_gpio_npins; } ;
typedef int device_t ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rcc_gpio_softc* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,int ) ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static int
FUNC_2(device_t VAR_3, uint32_t VAR_4, char *VAR_5)
{
 struct rcc_gpio_softc *VAR_6;

 VAR_6 = FUNC_0(VAR_3);
 if (VAR_4 >= VAR_6->sc_gpio_npins)
  return (VAR_0);

 FUNC_1(VAR_5, VAR_2[VAR_4].name, VAR_1);

 return (0);
}
