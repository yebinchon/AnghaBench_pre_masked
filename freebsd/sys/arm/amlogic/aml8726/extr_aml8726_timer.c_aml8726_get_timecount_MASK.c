
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timecounter {scalar_t__ tc_priv; } ;
struct aml8726_timer_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct aml8726_timer_softc*,int ) ;

__attribute__((used)) static unsigned
FUNC_1(struct timecounter *VAR_1)
{
 struct aml8726_timer_softc *VAR_2 =
     (struct aml8726_timer_softc *)VAR_1->tc_priv;

 return FUNC_0(VAR_2, VAR_0);
}
