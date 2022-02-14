
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct am335x_ehrpwm_softc {size_t sc_pwm_clkdiv; int sc_pwm_freq; int sc_pwm_period; } ;


 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct am335x_ehrpwm_softc *VAR_2)
{
 int VAR_3;

 VAR_3 = VAR_1[VAR_2->sc_pwm_clkdiv];
 VAR_2->sc_pwm_freq = VAR_0 / (1 * VAR_3) / VAR_2->sc_pwm_period;
}
