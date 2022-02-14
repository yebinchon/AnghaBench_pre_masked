
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct am335x_dmtimer_softc {int sysclk_freq; } ;
typedef int int32_t ;


 int FUNC_0 (struct am335x_dmtimer_softc*,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(int VAR_1, void *VAR_2)
{
 struct am335x_dmtimer_softc *VAR_3 = VAR_2;
 int32_t VAR_4;
 uint32_t VAR_5, VAR_6;


 VAR_4 = (VAR_1 + 1) * (VAR_3->sysclk_freq / 1000000);

 VAR_5 = FUNC_0(VAR_3, VAR_0);

 while (VAR_4 > 0) {
  VAR_6 = FUNC_0(VAR_3, VAR_0);
  if (VAR_6 > VAR_5) {
   VAR_4 -= (int32_t)(VAR_6 - VAR_5);
  } else {
   VAR_4 -= (int32_t)((0xFFFFFFFF - VAR_5) + VAR_6);
  }
  VAR_5 = VAR_6;
 }
}
