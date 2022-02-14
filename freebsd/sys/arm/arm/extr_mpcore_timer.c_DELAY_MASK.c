
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct arm_tmr_softc {int dummy; } ;
typedef int int32_t ;
struct TYPE_4__ {struct arm_tmr_softc* tc_priv; } ;
struct TYPE_3__ {scalar_t__ tc_frequency; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,struct arm_tmr_softc*) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_3 () ;

void
FUNC_4(int VAR_2)
{
 struct arm_tmr_softc *VAR_3;
 int32_t VAR_4;

 FUNC_0();

 if (VAR_0 == ((void*)0) || VAR_1.tc_frequency == 0) {
  for (; VAR_2 > 0; VAR_2--)
   for (VAR_4 = 200; VAR_4 > 0; VAR_4--)
    FUNC_3();


 } else {
  VAR_3 = VAR_0->tc_priv;
  FUNC_2(VAR_2, VAR_3);
 }
 FUNC_1();
}
