
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_pin {unsigned int gp_flags; int gp_pin; } ;
struct bcm_gpio_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcm_gpio_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bcm_gpio_softc*) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_2 (struct bcm_gpio_softc*,int ,int ) ;
 int FUNC_3 (struct bcm_gpio_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct bcm_gpio_softc *VAR_9, struct gpio_pin *VAR_10,
    unsigned int VAR_11)
{

 FUNC_0(VAR_9);




 if (VAR_11 & (VAR_5|VAR_6)) {
  VAR_10->gp_flags &= ~(VAR_5|VAR_6);
  if (VAR_11 & VAR_6) {
   VAR_10->gp_flags |= VAR_6;
   FUNC_2(VAR_9, VAR_10->gp_pin,
       VAR_1);
  } else {
   VAR_10->gp_flags |= VAR_5;
   FUNC_2(VAR_9, VAR_10->gp_pin,
       VAR_0);
  }
 }


 VAR_10->gp_flags &= ~(VAR_8|VAR_7);
 if (VAR_11 & (VAR_8|VAR_7)) {
  if (VAR_11 & VAR_8) {
   VAR_10->gp_flags |= VAR_8;
   FUNC_3(VAR_9, VAR_10->gp_pin, VAR_4);
  } else {
   VAR_10->gp_flags |= VAR_7;
   FUNC_3(VAR_9, VAR_10->gp_pin, VAR_3);
  }
 } else
  FUNC_3(VAR_9, VAR_10->gp_pin, VAR_2);

 FUNC_1(VAR_9);
}
