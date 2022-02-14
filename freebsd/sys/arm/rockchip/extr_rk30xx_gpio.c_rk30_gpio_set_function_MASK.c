
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct rk30_gpio_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct rk30_gpio_softc*) ;
 scalar_t__ FUNC_1 (struct rk30_gpio_softc*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct rk30_gpio_softc*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct rk30_gpio_softc *VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
 uint32_t VAR_5;


 FUNC_0(VAR_2);
 VAR_5 = FUNC_1(VAR_2, VAR_1);
 if (VAR_4 == VAR_0)
  VAR_5 |= (1U << VAR_3);
 else
  VAR_5 &= ~(1U << VAR_3);
 FUNC_2(VAR_2, VAR_1, VAR_5);
}
