
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct bcm_systimer_softc {int dummy; } ;
typedef int int32_t ;
struct TYPE_2__ {int tc_frequency; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(int VAR_2, void *VAR_3)
{
 struct bcm_systimer_softc *VAR_4;
 int32_t VAR_5;
 uint32_t VAR_6, VAR_7;

 VAR_4 = (struct bcm_systimer_softc *) VAR_3;


 VAR_5 = VAR_2 * (VAR_1.tc_frequency / 1000000) + 1;

 VAR_6 = FUNC_0(VAR_0);

 while (VAR_5 > 0) {
  VAR_7 = FUNC_0(VAR_0);
  if (VAR_7 == VAR_6)
   continue;
  if (VAR_7>VAR_6) {
   VAR_5 -= (int32_t)(VAR_7 - VAR_6);
  } else {
   VAR_5 -= (int32_t)((0xFFFFFFFF - VAR_6) + VAR_7);
  }
  VAR_6 = VAR_7;
 }
}
