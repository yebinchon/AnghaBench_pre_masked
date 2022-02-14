
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct aw_gpio_softc {TYPE_2__* padconf; } ;
typedef int phandle_t ;
typedef scalar_t__ pcell_t ;
typedef int device_t ;
struct TYPE_4__ {int npins; TYPE_1__* pins; } ;
struct TYPE_3__ {scalar_t__ port; scalar_t__ pin; } ;


 struct aw_gpio_softc* FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_0, phandle_t VAR_1, phandle_t VAR_2, int VAR_3,
    pcell_t *VAR_4, uint32_t *VAR_5, uint32_t *VAR_6)
{
 struct aw_gpio_softc *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_0(VAR_0);


 for (VAR_8 = 0; VAR_8 < VAR_7->padconf->npins; VAR_8++)
  if (VAR_7->padconf->pins[VAR_8].port == VAR_4[0] &&
      VAR_7->padconf->pins[VAR_8].pin == VAR_4[1]) {
   *VAR_5 = VAR_8;
   break;
  }
 *VAR_6 = VAR_4[VAR_3 - 1];

 return (0);
}
