
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct a37x0_gpio_softc {scalar_t__ sc_npins; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct a37x0_gpio_softc*,int ) ;
 int FUNC_4 (struct a37x0_gpio_softc*,int ,scalar_t__) ;
 int VAR_0 ;
 struct a37x0_gpio_softc* FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1, uint32_t VAR_2)
{
 struct a37x0_gpio_softc *VAR_3;
 uint32_t VAR_4;

 VAR_3 = FUNC_5(VAR_1);
 if (VAR_2 >= VAR_3->sc_npins)
  return (VAR_0);

 VAR_4 = FUNC_3(VAR_3, FUNC_2(VAR_2));
 if ((VAR_4 & FUNC_0(VAR_2)) == 0)
  return (VAR_0);
 VAR_4 = FUNC_3(VAR_3, FUNC_1(VAR_2));
 VAR_4 ^= FUNC_0(VAR_2);
 FUNC_4(VAR_3, FUNC_1(VAR_2), VAR_4);

 return (0);
}
