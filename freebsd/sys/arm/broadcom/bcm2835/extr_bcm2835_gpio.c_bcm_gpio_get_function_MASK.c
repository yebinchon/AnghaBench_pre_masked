
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct bcm_gpio_softc {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bcm_gpio_softc*) ;
 int FUNC_2 (struct bcm_gpio_softc*,int ) ;
 int FUNC_3 (struct bcm_gpio_softc*) ;

__attribute__((used)) static uint32_t
FUNC_4(struct bcm_gpio_softc *VAR_0, uint32_t VAR_1)
{
 uint32_t VAR_2, VAR_3, VAR_4;


 VAR_2 = VAR_1 / 10;
 VAR_4 = (VAR_1 - VAR_2 * 10) * 3;

 FUNC_1(VAR_0);
 VAR_3 = (FUNC_2(VAR_0, FUNC_0(VAR_2)) >> VAR_4) & 7;
 FUNC_3(VAR_0);

 return (VAR_3);
}
