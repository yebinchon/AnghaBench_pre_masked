
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct oppt {scalar_t__ mhz; } ;
struct imx6_anatop_softc {scalar_t__ cpu_maxmhz_hw; int cpu_overclock_enable; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct oppt* VAR_1 ;
 int FUNC_1 (struct oppt*) ;

__attribute__((used)) static struct oppt *
FUNC_2(struct imx6_anatop_softc *VAR_2, uint32_t VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;

 if (VAR_3 > VAR_2->cpu_maxmhz_hw && !VAR_2->cpu_overclock_enable)
  VAR_3 = VAR_2->cpu_maxmhz_hw;

 VAR_5 = VAR_0;
 VAR_7 = 0;
 for (VAR_6 = 0; VAR_6 < FUNC_1(VAR_1); ++VAR_6) {
  VAR_4 = FUNC_0((int)VAR_3 - (int)VAR_1[VAR_6].mhz);
  if (VAR_5 > VAR_4) {
   VAR_5 = VAR_4;
   VAR_7 = VAR_6;
  }
 }
 return (&VAR_1[VAR_7]);
}
