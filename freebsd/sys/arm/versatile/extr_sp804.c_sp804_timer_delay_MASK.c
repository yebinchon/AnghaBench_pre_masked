
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int tc_frequency; } ;
struct sp804_timer_softc {TYPE_1__ tc; } ;
typedef int int32_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(int VAR_0, void *VAR_1)
{
 struct sp804_timer_softc *VAR_2 = VAR_1;
 int32_t VAR_3;
 uint32_t VAR_4, VAR_5;


 VAR_3 = VAR_0 * ((VAR_2->tc.tc_frequency / 1000000) + 1);

 VAR_4 = FUNC_0(&VAR_2->tc);

 while (VAR_3 > 0) {
  VAR_5 = FUNC_0(&VAR_2->tc);
  if (VAR_5 == VAR_4)
   continue;
  if (VAR_5 > VAR_4) {
   VAR_3 -= (int32_t)(VAR_5 - VAR_4);
  } else {
   VAR_3 -= (int32_t)((0xFFFFFFFF - VAR_4) + VAR_5);
  }
  VAR_4 = VAR_5;
 }
}
