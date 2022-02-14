
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timecounter {struct sp804_timer_softc* tc_priv; } ;
struct sp804_timer_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static unsigned
FUNC_1(struct timecounter *VAR_1)
{
 struct sp804_timer_softc *VAR_2 = VAR_1->tc_priv;
 return 0xffffffff - FUNC_0(VAR_0);
}
