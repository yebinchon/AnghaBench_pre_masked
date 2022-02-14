
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct syscon {int dummy; } ;
struct rk_pinctrl_softc {struct syscon* grf; struct syscon* pmu; } ;



__attribute__((used)) static struct syscon *
FUNC_0(struct rk_pinctrl_softc *VAR_0, uint32_t VAR_1)
{
 if (VAR_1 < 2)
  return (VAR_0->pmu);

 return (VAR_0->grf);
}
