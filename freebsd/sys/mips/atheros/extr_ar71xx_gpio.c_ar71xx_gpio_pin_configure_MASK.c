
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_pin {unsigned int gp_flags; int gp_pin; } ;
struct ar71xx_gpio_softc {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct ar71xx_gpio_softc*,int ) ;
 int FUNC_1 (struct ar71xx_gpio_softc*,int ) ;

__attribute__((used)) static void
FUNC_2(struct ar71xx_gpio_softc *VAR_2, struct gpio_pin *VAR_3,
    unsigned int VAR_4)
{




 if (VAR_4 & (VAR_0|VAR_1)) {
  VAR_3->gp_flags &= ~(VAR_0|VAR_1);
  if (VAR_4 & VAR_1) {
   VAR_3->gp_flags |= VAR_1;
   FUNC_1(VAR_2, VAR_3->gp_pin);
  } else {
   VAR_3->gp_flags |= VAR_0;
   FUNC_0(VAR_2, VAR_3->gp_pin);
  }
 }
}
