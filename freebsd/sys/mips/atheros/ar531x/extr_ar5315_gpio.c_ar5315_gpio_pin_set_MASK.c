
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ar5315_gpio_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct ar5315_gpio_softc*,int ) ;
 int FUNC_1 (struct ar5315_gpio_softc*,int ,int) ;
 int FUNC_2 () ;
 struct ar5315_gpio_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_0, uint32_t VAR_1, unsigned int VAR_2)
{
 struct ar5315_gpio_softc *VAR_3 = FUNC_3(VAR_0);
 uint32_t VAR_4;

 VAR_4 = FUNC_0(VAR_3, FUNC_2());

 if(VAR_2 == 1) {
  VAR_4 |= (1 << VAR_1);
 } else {
  VAR_4 &= ~(1 << VAR_1);
 }

 FUNC_1(VAR_3, FUNC_2(), VAR_4);

 return (0);
}
