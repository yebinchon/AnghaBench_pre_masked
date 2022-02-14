
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct imx51_gpio_softc {int sc_mtx; } ;
struct gpio_pin {unsigned int gp_flags; int gp_pin; } ;


 int FUNC_0 (struct imx51_gpio_softc*,int ,unsigned int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct imx51_gpio_softc*,int ) ;
 int FUNC_2 (struct imx51_gpio_softc*,int ,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct imx51_gpio_softc *VAR_8, struct gpio_pin *VAR_9,
    unsigned int VAR_10)
{
 u_int VAR_11, VAR_12;

 FUNC_3(&VAR_8->sc_mtx);
 if (VAR_10 & (VAR_0 | VAR_2)) {
  VAR_11 = VAR_9->gp_flags & ~(VAR_0 | VAR_2);
  if (VAR_10 & VAR_2) {
   if (VAR_10 & VAR_4) {
    VAR_12 = 0;
   } else if (VAR_10 & VAR_3) {
    VAR_12 = 1;
   } else {
    if (VAR_10 & VAR_1)
     VAR_12 = FUNC_1(VAR_8, VAR_7);
    else
     VAR_12 = FUNC_1(VAR_8, VAR_5);
    VAR_12 = (VAR_12 >> VAR_9->gp_pin) & 1;
   }
   VAR_11 |= VAR_2;
   FUNC_2(VAR_8, VAR_5, (VAR_12 << VAR_9->gp_pin));
   FUNC_2(VAR_8, VAR_6, (1U << VAR_9->gp_pin));
  } else {
   VAR_11 |= VAR_0;
   FUNC_0(VAR_8, VAR_6, (1U << VAR_9->gp_pin));
  }
  VAR_9->gp_flags = VAR_11;
 }

 FUNC_4(&VAR_8->sc_mtx);
}
