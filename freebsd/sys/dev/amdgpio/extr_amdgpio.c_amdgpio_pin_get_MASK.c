
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct amdgpio_softc {TYPE_1__* sc_gpio_pins; } ;
typedef int device_t ;
struct TYPE_2__ {int gp_flags; } ;


 int FUNC_0 (struct amdgpio_softc*) ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (struct amdgpio_softc*) ;
 size_t FUNC_3 (int ) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t FUNC_4 (struct amdgpio_softc*,size_t) ;
 int FUNC_5 (struct amdgpio_softc*,size_t) ;
 struct amdgpio_softc* FUNC_6 (int ) ;
 int FUNC_7 (char*,size_t,...) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_6, uint32_t VAR_7, unsigned int *VAR_8)
{
 struct amdgpio_softc *VAR_9;
 uint32_t VAR_10, VAR_11;

 VAR_9 = FUNC_6(VAR_6);

 FUNC_7("pin %d\n", VAR_7);
 if (!FUNC_5(VAR_9, VAR_7))
  return (VAR_0);

 *VAR_8 = 0;

 FUNC_0(VAR_9);

 VAR_10 = FUNC_1(VAR_7);
 VAR_11 = FUNC_4(VAR_9, VAR_10);

 if ((VAR_9->sc_gpio_pins[VAR_7].gp_flags & VAR_3) != 0) {
  if (VAR_11 & FUNC_3(VAR_4))
   *VAR_8 = VAR_1;
  else
   *VAR_8 = VAR_2;
 } else {
  if (VAR_11 & FUNC_3(VAR_5))
   *VAR_8 = VAR_1;
  else
   *VAR_8 = VAR_2;
 }

 FUNC_7("pin %d value 0x%x\n", VAR_7, *VAR_8);

 FUNC_2(VAR_9);

 return (0);
}
