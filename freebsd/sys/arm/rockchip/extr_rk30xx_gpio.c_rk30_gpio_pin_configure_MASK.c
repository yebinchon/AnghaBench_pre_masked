
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk30_gpio_softc {int dummy; } ;
struct gpio_pin {unsigned int gp_flags; int gp_pin; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (struct rk30_gpio_softc*) ;
 int FUNC_1 (struct rk30_gpio_softc*) ;
 int FUNC_2 (struct rk30_gpio_softc*,int ,unsigned int) ;
 int FUNC_3 (struct rk30_gpio_softc*,int ,unsigned int) ;

__attribute__((used)) static void
FUNC_4(struct rk30_gpio_softc *VAR_4, struct gpio_pin *VAR_5,
    unsigned int VAR_6)
{

 FUNC_0(VAR_4);



 if (VAR_6 & (VAR_0 | VAR_1)) {
  VAR_5->gp_flags &= ~(VAR_0 | VAR_1);
  if (VAR_6 & VAR_1)
   VAR_5->gp_flags |= VAR_1;
  else
   VAR_5->gp_flags |= VAR_0;
  FUNC_2(VAR_4, VAR_5->gp_pin, VAR_5->gp_flags);
 }

 VAR_5->gp_flags &= ~(VAR_3 | VAR_2);
 if (VAR_6 & (VAR_3 | VAR_2)) {
  if (VAR_6 & VAR_3)
   VAR_5->gp_flags |= VAR_3;
  else
   VAR_5->gp_flags |= VAR_2;
 }
 FUNC_3(VAR_4, VAR_5->gp_pin, VAR_5->gp_flags);
 FUNC_1(VAR_4);
}
