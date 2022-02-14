
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct bcm_pwm_softc {int mode; int mode2; scalar_t__ period; scalar_t__ ratio; scalar_t__ period2; scalar_t__ ratio2; scalar_t__ freq; int clkman; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bcm_pwm_softc*,scalar_t__) ;
 int FUNC_1 (struct bcm_pwm_softc*,scalar_t__) ;
 int FUNC_2 (struct bcm_pwm_softc*,scalar_t__) ;
 int FUNC_3 (struct bcm_pwm_softc*,scalar_t__) ;
 int FUNC_4 (struct bcm_pwm_softc*,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct bcm_pwm_softc *VAR_2)
{
 uint32_t VAR_3, VAR_4;


 FUNC_0(VAR_2, 0);


 (void)FUNC_5(VAR_2->clkman, VAR_0, 0);

 VAR_4 = 0;

 if (VAR_2->mode == 0 && VAR_2->mode2 == 0)
  return 0;



 VAR_3 = FUNC_5(VAR_2->clkman, VAR_0, VAR_2->freq);
 if (VAR_3 == 0)
  return (VAR_1);
 VAR_2->freq = VAR_3;
 if (VAR_2->mode != 0) {

  FUNC_3(VAR_2, VAR_2->period);
  if (VAR_2->ratio > VAR_2->period)
   VAR_2->ratio = VAR_2->period;
  FUNC_1(VAR_2, VAR_2->ratio);


  if (VAR_2->mode == 1)
   VAR_4 |= 0x81;
  else
   VAR_4 |= 0x1;
 }

 if (VAR_2->mode2 != 0) {

  FUNC_4(VAR_2, VAR_2->period2);
  if (VAR_2->ratio2 > VAR_2->period2)
   VAR_2->ratio2 = VAR_2->period2;
  FUNC_2(VAR_2, VAR_2->ratio2);


  if (VAR_2->mode2 == 1)
   VAR_4 |= 0x8100;
  else
   VAR_4 |= 0x100;
 }


 FUNC_0(VAR_2, VAR_4);

 return (0);
}
