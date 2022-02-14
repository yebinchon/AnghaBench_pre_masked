
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int u_int ;
struct aw_pwm_softc {int period; int duty; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct aw_pwm_softc*,int ) ;
 int FUNC_1 (struct aw_pwm_softc*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int* VAR_11 ;
 struct aw_pwm_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_12, u_int VAR_13, u_int VAR_14, u_int VAR_15)
{
 struct aw_pwm_softc *VAR_16;
 uint64_t VAR_17, VAR_18;
 uint64_t VAR_19, VAR_20;
 uint32_t VAR_21;
 int VAR_22;
 int VAR_23;

 VAR_16 = FUNC_2(VAR_12);

 VAR_17 = VAR_10 / VAR_14;
 if (VAR_17 > VAR_3)
  return (VAR_9);
 VAR_18 = VAR_10 / VAR_15;
 if (VAR_18 < VAR_17) {
  FUNC_3(VAR_16->dev, "duty < period\n");
  return (VAR_9);
 }


 VAR_19 = VAR_3;
 VAR_22 = VAR_2;
 VAR_20 = VAR_3 / VAR_17;
 if ((VAR_20 - 1) > VAR_6) {

  for (VAR_23 = 0; VAR_23 < FUNC_4(VAR_11); VAR_23++) {
   if (VAR_11[VAR_23] == 0)
    continue;
   VAR_20 = (VAR_3 * VAR_11[VAR_23]) / VAR_17;
   if ((VAR_20 - 1) < VAR_6 ) {
    VAR_22 = VAR_23;
    VAR_19 = VAR_3 / VAR_11[VAR_23];
    break;
   }
  }
  if (VAR_22 == VAR_2)
   return (VAR_9);
 }

 VAR_21 = FUNC_0(VAR_16, VAR_0);
 if (VAR_21 & VAR_1) {
  FUNC_3(VAR_16->dev, "pwm busy\n");
  return (VAR_8);
 }


 VAR_21 &= ~VAR_2;
 VAR_21 |= VAR_22;
 FUNC_1(VAR_16, VAR_0, VAR_21);


 VAR_21 = ((VAR_19 / VAR_17) << VAR_7) |
   ((VAR_19 / VAR_18) << VAR_5);
 FUNC_1(VAR_16, VAR_4, VAR_21);

 VAR_16->period = VAR_14;
 VAR_16->duty = VAR_15;

 return (0);
}
