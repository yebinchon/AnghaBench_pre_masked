
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_gpio_softc {int dummy; } ;
struct gpio_pin {unsigned int gp_flags; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct tegra_gpio_softc*,int ,struct gpio_pin*,int) ;

__attribute__((used)) static void
FUNC_1(struct tegra_gpio_softc *VAR_3, struct gpio_pin *VAR_4,
    unsigned int VAR_5)
{

 if ((VAR_5 & (VAR_1|VAR_2)) == 0)
  return;


 VAR_4->gp_flags &= ~(VAR_1 | VAR_2);
 if (VAR_5 & VAR_2) {
  VAR_4->gp_flags |= VAR_2;
  FUNC_0(VAR_3, VAR_0, VAR_4, 1);
 } else {
  VAR_4->gp_flags |= VAR_1;
  FUNC_0(VAR_3, VAR_0, VAR_4, 0);
 }
}
