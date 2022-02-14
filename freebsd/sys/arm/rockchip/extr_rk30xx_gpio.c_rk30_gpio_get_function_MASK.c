
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int uint32_t ;
struct rk30_gpio_softc {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct rk30_gpio_softc*,int ) ;
 int VAR_2 ;

__attribute__((used)) static uint32_t
FUNC_1(struct rk30_gpio_softc *VAR_3, uint32_t VAR_4)
{

 if (FUNC_0(VAR_3, VAR_2) & (1U << VAR_4))
  return (VAR_1);
 else
  return (VAR_0);
}
