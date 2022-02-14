
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct rk_gpio_softc {int dummy; } ;
typedef int device_t ;


 int FUNC_0 (struct rk_gpio_softc*) ;
 int FUNC_1 (struct rk_gpio_softc*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct rk_gpio_softc*) ;
 int FUNC_3 (struct rk_gpio_softc*,int ,int) ;
 struct rk_gpio_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1, uint32_t VAR_2)
{
 struct rk_gpio_softc *VAR_3;
 uint32_t VAR_4;

 VAR_3 = FUNC_4(VAR_1);

 FUNC_0(VAR_3);
 VAR_4 = FUNC_1(VAR_3, VAR_0);
 if (VAR_4 & (1 << VAR_2))
  VAR_4 &= ~(1 << VAR_2);
 else
  VAR_4 |= (1 << VAR_2);
 FUNC_3(VAR_3, VAR_0, VAR_4);
 FUNC_2(VAR_3);

 return (0);
}
