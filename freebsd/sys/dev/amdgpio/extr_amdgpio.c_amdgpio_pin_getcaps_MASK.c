
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct amdgpio_softc {TYPE_1__* sc_gpio_pins; } ;
typedef int device_t ;
struct TYPE_2__ {size_t gp_caps; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpio_softc*,size_t) ;
 struct amdgpio_softc* FUNC_1 (int ) ;
 int FUNC_2 (char*,size_t,...) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1, uint32_t VAR_2, uint32_t *VAR_3)
{
 struct amdgpio_softc *VAR_4;

 VAR_4 = FUNC_1(VAR_1);

 FUNC_2("pin %d\n", VAR_2);
 if (!FUNC_0(VAR_4, VAR_2))
  return (VAR_0);

 *VAR_3 = VAR_4->sc_gpio_pins[VAR_2].gp_caps;

 FUNC_2("pin %d caps 0x%x\n", VAR_2, *VAR_3);

 return (0);
}
