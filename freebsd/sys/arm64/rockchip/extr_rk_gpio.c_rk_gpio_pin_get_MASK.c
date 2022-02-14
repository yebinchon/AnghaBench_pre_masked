
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rk_gpio_softc {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct rk_gpio_softc*) ;
 int FUNC_1 (struct rk_gpio_softc*,int ) ;
 int FUNC_2 (struct rk_gpio_softc*) ;
 struct rk_gpio_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1, uint32_t VAR_2, unsigned int *VAR_3)
{
 struct rk_gpio_softc *VAR_4;
 uint32_t VAR_5;

 VAR_4 = FUNC_3(VAR_1);

 FUNC_0(VAR_4);
 VAR_5 = FUNC_1(VAR_4, VAR_0);
 FUNC_2(VAR_4);

 *VAR_3 = VAR_5 & (1 << VAR_2) ? 1 : 0;

 return (0);
}
