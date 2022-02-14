
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct a10_timer_softc {int timer0_freq; int sc_dev; int * res; int sc_ih; int type; } ;
typedef int device_t ;
typedef int clk_t ;
struct TYPE_5__ {int ocd_data; } ;
struct TYPE_4__ {int tc_frequency; struct a10_timer_softc* tc_priv; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct a10_timer_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;
 int FUNC_1 (struct a10_timer_softc*) ;
 int FUNC_2 (int ,struct a10_timer_softc*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ,int ,int ,int *,struct a10_timer_softc*,int *) ;
 scalar_t__ FUNC_6 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_7 (int ,int*) ;
 int VAR_9 ;
 struct a10_timer_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,...) ;
 int VAR_10 ;
 TYPE_2__* FUNC_10 (int ,int ) ;
 int VAR_11 ;
 int FUNC_11 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_12)
{
 struct a10_timer_softc *VAR_13;
 clk_t VAR_14;
 int VAR_15;

 VAR_13 = FUNC_8(VAR_12);
 VAR_13->type = FUNC_10(VAR_12, VAR_9)->ocd_data;

 if (FUNC_3(VAR_12, VAR_6, VAR_13->res)) {
  FUNC_9(VAR_12, "could not allocate resources\n");
  return (VAR_1);
 }

 VAR_13->sc_dev = VAR_12;


 VAR_15 = FUNC_5(VAR_12, VAR_13->res[VAR_0], VAR_2,
     VAR_5, ((void*)0), VAR_13, &VAR_13->sc_ih);
 if (VAR_15 != 0) {
  FUNC_4(VAR_12, VAR_6, VAR_13->res);
  FUNC_9(VAR_12, "Unable to setup the clock irq handler, "
      "err = %d\n", VAR_15);
  return (VAR_1);
 }

 if (FUNC_6(VAR_12, 0, 0, &VAR_14) != 0)
  VAR_13->timer0_freq = VAR_3;
 else {
  if (FUNC_7(VAR_14, &VAR_13->timer0_freq) != 0) {
   FUNC_9(VAR_12, "Cannot get clock source frequency\n");
   return (VAR_1);
  }
 }
 if (VAR_8) {
  FUNC_9(VAR_13->sc_dev, "clock: hz=%d stathz = %d\n", VAR_10, VAR_11);

  FUNC_9(VAR_13->sc_dev, "event timer clock frequency %ju\n",
      VAR_13->timer0_freq);
  FUNC_9(VAR_13->sc_dev, "timecounter clock frequency %jd\n",
      VAR_7.tc_frequency);
 }

 return (0);
}
