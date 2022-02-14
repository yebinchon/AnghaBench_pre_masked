
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int tc_counter_mask; int tc_quality; struct am335x_dmtimer_softc* tc_priv; int tc_frequency; int tc_get_timecount; int tc_name; } ;
struct TYPE_3__ {TYPE_2__ tc; } ;
struct am335x_dmtimer_softc {int tclr; TYPE_1__ func; int sysclk_freq; int tmr_name; } ;


 int FUNC_0 (struct am335x_dmtimer_softc*,int ) ;
 int FUNC_1 (struct am335x_dmtimer_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 struct am335x_dmtimer_softc* VAR_11 ;
 int FUNC_3 (int ,struct am335x_dmtimer_softc*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_5(struct am335x_dmtimer_softc *VAR_12)
{
 FUNC_2(VAR_11 == ((void*)0), ("already have a timecounter"));


 FUNC_1(VAR_12, VAR_7, VAR_8);
 while (FUNC_0(VAR_12, VAR_4) & VAR_5)
  continue;

 VAR_12->tclr |= VAR_2 | VAR_1;
 FUNC_1(VAR_12, VAR_6, 0);
 FUNC_1(VAR_12, VAR_3, 0);
 FUNC_1(VAR_12, VAR_0, VAR_12->tclr);

 VAR_12->func.tc.tc_name = VAR_12->tmr_name;
 VAR_12->func.tc.tc_get_timecount = VAR_10;
 VAR_12->func.tc.tc_counter_mask = ~0u;
 VAR_12->func.tc.tc_frequency = VAR_12->sysclk_freq;
 VAR_12->func.tc.tc_quality = 500;
 VAR_12->func.tc.tc_priv = VAR_12;

 VAR_11 = VAR_12;
 FUNC_4(&VAR_12->func.tc);

 FUNC_3(VAR_9, VAR_12);

 return (0);
}
