
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_pwm_softc {int freq; int period; int ratio; int period2; int ratio2; int sc_mem_res; int sc_m_bsh; int sc_m_bst; int * clkman; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bcm_pwm_softc*) ;
 int FUNC_1 (int ,int ,int*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int * FUNC_4 (int ,int ) ;
 struct bcm_pwm_softc* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_3)
{
 struct bcm_pwm_softc *VAR_4;
 int VAR_5;

 if (FUNC_6(VAR_3) != 0) {
  FUNC_7(VAR_3, "only one PWM controller supported\n");
  return (VAR_0);
 }

 VAR_4 = FUNC_5(VAR_3);
 VAR_4->sc_dev = VAR_3;

 VAR_4->clkman = FUNC_4(FUNC_3("bcm2835_clkman"), 0);
 if (VAR_4->clkman == ((void*)0)) {
  FUNC_7(VAR_3, "cannot find Clock Manager\n");
  return (VAR_0);
 }

 VAR_5 = 0;
 VAR_4->sc_mem_res = FUNC_1(VAR_3, VAR_2, &VAR_5,
     VAR_1);
 if (!VAR_4->sc_mem_res) {
  FUNC_7(VAR_3, "cannot allocate memory window\n");
  return (VAR_0);
 }

 VAR_4->sc_m_bst = FUNC_9(VAR_4->sc_mem_res);
 VAR_4->sc_m_bsh = FUNC_8(VAR_4->sc_mem_res);


 FUNC_0(VAR_4);

 VAR_4->freq = 125000000;
 VAR_4->period = 10000;
 VAR_4->ratio = 2500;
 VAR_4->period2 = 10000;
 VAR_4->ratio2 = 2500;

 return (FUNC_2(VAR_3));
}
