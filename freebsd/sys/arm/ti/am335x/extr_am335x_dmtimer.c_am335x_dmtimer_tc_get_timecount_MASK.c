
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timecounter {struct am335x_dmtimer_softc* tc_priv; } ;
struct am335x_dmtimer_softc {int dummy; } ;


 int FUNC_0 (struct am335x_dmtimer_softc*,int ) ;
 int VAR_0 ;

__attribute__((used)) static unsigned
FUNC_1(struct timecounter *VAR_1)
{
 struct am335x_dmtimer_softc *VAR_2;

 VAR_2 = VAR_1->tc_priv;

 return (FUNC_0(VAR_2, VAR_0));
}
