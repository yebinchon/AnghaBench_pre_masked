
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct gpio_pin {int gp_pin; unsigned int gp_flags; } ;
struct ar5315_gpio_softc {int dummy; } ;


 int FUNC_0 (struct ar5315_gpio_softc*,int ,int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct ar5315_gpio_softc*,int ,int) ;
 int FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(struct ar5315_gpio_softc *VAR_2, struct gpio_pin *VAR_3,
    unsigned int VAR_4)
{
 uint32_t VAR_5;

 VAR_5 = 1 << VAR_3->gp_pin;




 if (VAR_4 & (VAR_0|VAR_1)) {
  VAR_3->gp_flags &= ~(VAR_0|VAR_1);
  if (VAR_4 & VAR_1) {
   VAR_3->gp_flags |= VAR_1;
   FUNC_1(VAR_2, FUNC_2(), VAR_5);
  }
  else {
   VAR_3->gp_flags |= VAR_0;
   FUNC_0(VAR_2, FUNC_2(), VAR_5);
  }
 }
}
