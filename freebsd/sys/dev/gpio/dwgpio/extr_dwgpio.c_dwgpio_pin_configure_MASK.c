
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_pin {unsigned int gp_flags; int gp_pin; } ;
struct dwgpio_softc {int port; } ;


 int FUNC_0 (struct dwgpio_softc*) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dwgpio_softc*) ;
 int FUNC_3 (struct dwgpio_softc*,int ) ;
 int FUNC_4 (struct dwgpio_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct dwgpio_softc *VAR_2,
    struct gpio_pin *VAR_3, unsigned int VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_2);





 VAR_5 = FUNC_3(VAR_2, FUNC_1(VAR_2->port));
 if (VAR_4 & (VAR_0|VAR_1)) {
  VAR_3->gp_flags &= ~(VAR_0|VAR_1);
  if (VAR_4 & VAR_1) {
   VAR_3->gp_flags |= VAR_1;
   VAR_5 |= (1 << VAR_3->gp_pin);
  } else {
   VAR_3->gp_flags |= VAR_0;
   VAR_5 &= ~(1 << VAR_3->gp_pin);
  }
 }

 FUNC_4(VAR_2, FUNC_1(VAR_2->port), VAR_5);
 FUNC_2(VAR_2);
}
