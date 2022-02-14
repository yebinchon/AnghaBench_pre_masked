
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vf_gpio_softc {int dummy; } ;
struct gpio_pin {unsigned int gp_flags; int gp_pin; } ;


 int FUNC_0 (struct vf_gpio_softc*) ;
 int FUNC_1 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_2 (struct vf_gpio_softc*) ;
 int FUNC_3 (struct vf_gpio_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct vf_gpio_softc *VAR_2, struct gpio_pin *VAR_3,
    unsigned int VAR_4)
{

 FUNC_0(VAR_2);




 if (VAR_4 & (VAR_0|VAR_1)) {
  VAR_3->gp_flags &= ~(VAR_0|VAR_1);
  if (VAR_4 & VAR_1) {
   VAR_3->gp_flags |= VAR_1;

  } else {
   VAR_3->gp_flags |= VAR_0;
   FUNC_3(VAR_2, FUNC_1(VAR_3->gp_pin),
       (1 << (VAR_3->gp_pin % 32)));
  }
 }

 FUNC_2(VAR_2);
}
