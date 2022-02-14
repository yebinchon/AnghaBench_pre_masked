
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ar71xx_gpio_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ar71xx_gpio_softc*,int ,int) ;
 int FUNC_1 (struct ar71xx_gpio_softc*,int ,int) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(struct ar71xx_gpio_softc *VAR_1, int VAR_2)
{
 uint32_t VAR_3;

 VAR_3 = 1 << VAR_2;

 if (FUNC_2())
  FUNC_0(VAR_1, VAR_0, VAR_3);
 else
  FUNC_1(VAR_1, VAR_0, VAR_3);
}
