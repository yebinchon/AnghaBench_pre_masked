
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct am335x_ehrpwm_softc {int sc_pwm_period; int sc_pwm_dutyA; int sc_pwm_dutyB; int * sc_mem_res; int sc_mem_rid; int * sc_busdev; void* sc_chanB_oid; void* sc_chanA_oid; void* sc_period_oid; void* sc_freq_oid; void* sc_clkdiv_oid; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct am335x_ehrpwm_softc*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (struct am335x_ehrpwm_softc*,int ,int) ;
 int VAR_15 ;
 int FUNC_2 (struct am335x_ehrpwm_softc*) ;
 int FUNC_3 (struct am335x_ehrpwm_softc*) ;
 int VAR_16 ;
 void* FUNC_4 (struct sysctl_ctx_list*,int ,int ,char*,int,struct am335x_ehrpwm_softc*,int ,int ,char*,char*) ;
 int FUNC_5 (struct sysctl_oid*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_6 (struct am335x_ehrpwm_softc*) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int * FUNC_7 (int ,int ,int *,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int ,int *) ;
 int * FUNC_11 (int ,char*,int) ;
 struct am335x_ehrpwm_softc* FUNC_12 (int ) ;
 struct sysctl_ctx_list* FUNC_13 (int ) ;
 struct sysctl_oid* FUNC_14 (int ) ;
 int FUNC_15 (int ,char*) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_27)
{
 struct am335x_ehrpwm_softc *VAR_28;
 uint32_t VAR_29;
 struct sysctl_ctx_list *VAR_30;
 struct sysctl_oid *VAR_31;

 VAR_28 = FUNC_12(VAR_27);
 VAR_28->sc_dev = VAR_27;

 FUNC_3(VAR_28);

 VAR_28->sc_mem_res = FUNC_7(VAR_27, VAR_17,
     &VAR_28->sc_mem_rid, VAR_16);
 if (VAR_28->sc_mem_res == ((void*)0)) {
  FUNC_15(VAR_27, "cannot allocate memory resources\n");
  goto fail;
 }


 VAR_30 = FUNC_13(VAR_28->sc_dev);
 VAR_31 = FUNC_14(VAR_28->sc_dev);

 VAR_28->sc_clkdiv_oid = FUNC_4(VAR_30, FUNC_5(VAR_31), VAR_15,
     "clkdiv", VAR_4 | VAR_3, VAR_28, 0,
     VAR_23, "I", "PWM clock prescaler");

 VAR_28->sc_freq_oid = FUNC_4(VAR_30, FUNC_5(VAR_31), VAR_15,
     "freq", VAR_4 | VAR_3, VAR_28, 0,
     VAR_25, "I", "PWM frequency");

 VAR_28->sc_period_oid = FUNC_4(VAR_30, FUNC_5(VAR_31), VAR_15,
     "period", VAR_4 | VAR_3, VAR_28, 0,
     VAR_26, "I", "PWM period");

 VAR_28->sc_chanA_oid = FUNC_4(VAR_30, FUNC_5(VAR_31), VAR_15,
     "dutyA", VAR_4 | VAR_3, VAR_28, 0,
     VAR_24, "I", "Channel A duty cycles");

 VAR_28->sc_chanB_oid = FUNC_4(VAR_30, FUNC_5(VAR_31), VAR_15,
     "dutyB", VAR_4 | VAR_3, VAR_28, 0,
     VAR_24, "I", "Channel B duty cycles");


 VAR_29 = FUNC_0(VAR_28, VAR_11);
 VAR_29 &= ~(VAR_18 | VAR_22);
 FUNC_1(VAR_28, VAR_11, VAR_29);

 VAR_28->sc_pwm_period = VAR_5;
 VAR_28->sc_pwm_dutyA = 0;
 VAR_28->sc_pwm_dutyB = 0;
 FUNC_6(VAR_28);

 FUNC_1(VAR_28, VAR_12, VAR_28->sc_pwm_period - 1);
 FUNC_1(VAR_28, VAR_9, VAR_28->sc_pwm_dutyA);
 FUNC_1(VAR_28, VAR_10, VAR_28->sc_pwm_dutyB);

 FUNC_1(VAR_28, VAR_7, (VAR_2 | VAR_0));
 FUNC_1(VAR_28, VAR_8, (VAR_2 | VAR_1));


 VAR_29 &= ~VAR_19;
 VAR_29 |= VAR_20 | VAR_21;
 FUNC_1(VAR_28, VAR_11, VAR_29);

 FUNC_1(VAR_28, VAR_13, 0xf);
 VAR_29 = FUNC_0(VAR_28, VAR_14);

 if ((VAR_28->sc_busdev = FUNC_11(VAR_27, "pwmbus", -1)) == ((void*)0)) {
  FUNC_15(VAR_27, "Cannot add child pwmbus\n");

 }

 FUNC_9(VAR_27);
 return (FUNC_8(VAR_27));
fail:
 FUNC_2(VAR_28);
 if (VAR_28->sc_mem_res)
  FUNC_10(VAR_27, VAR_17,
      VAR_28->sc_mem_rid, VAR_28->sc_mem_res);

 return(VAR_6);
}
