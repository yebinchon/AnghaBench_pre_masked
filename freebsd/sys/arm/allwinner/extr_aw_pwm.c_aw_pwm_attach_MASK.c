
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct aw_pwm_softc {int clk_freq; int enabled; int period; int duty; int busdev; int res; int clk; int dev; } ;
typedef int phandle_t ;
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
 int FUNC_0 (struct aw_pwm_softc*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int* VAR_11 ;
 int FUNC_3 (int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,int *) ;
 int FUNC_8 (int ,int*) ;
 int FUNC_9 (int ,char*,int) ;
 struct aw_pwm_softc* FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,...) ;
 int FUNC_12 (int*) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_13)
{
 struct aw_pwm_softc *VAR_14;
 uint64_t VAR_15;
 uint32_t VAR_16;
 phandle_t VAR_17;
 int VAR_18;

 VAR_14 = FUNC_10(VAR_13);
 VAR_14->dev = VAR_13;

 VAR_18 = FUNC_7(VAR_13, 0, 0, &VAR_14->clk);
 if (VAR_18 != 0) {
  FUNC_11(VAR_13, "cannot get clock\n");
  goto fail;
 }
 VAR_18 = FUNC_6(VAR_14->clk);
 if (VAR_18 != 0) {
  FUNC_11(VAR_13, "cannot enable clock\n");
  goto fail;
 }

 VAR_18 = FUNC_8(VAR_14->clk, &VAR_14->clk_freq);
 if (VAR_18 != 0) {
  FUNC_11(VAR_13, "cannot get clock frequency\n");
  goto fail;
 }

 if (FUNC_4(VAR_13, VAR_12, &VAR_14->res) != 0) {
  FUNC_11(VAR_13, "cannot allocate resources for device\n");
  VAR_18 = VAR_9;
  goto fail;
 }


 VAR_16 = FUNC_0(VAR_14, VAR_0);
 if (VAR_16 & (VAR_2 | VAR_1))
  VAR_14->enabled = 1;

 VAR_16 = FUNC_0(VAR_14, VAR_0);
 VAR_16 &= VAR_3;
 if (VAR_16 > FUNC_12(VAR_11)) {
  FUNC_11(VAR_13, "Bad prescaler %x, cannot guess current settings\n", VAR_16);
  goto skipcfg;
 }
 VAR_15 = VAR_14->clk_freq / VAR_11[VAR_16];

 VAR_16 = FUNC_0(VAR_14, VAR_4);
 VAR_14->period = VAR_10 /
  (VAR_15 / ((VAR_16 >> VAR_8) & VAR_7));
 VAR_14->duty = VAR_10 /
  (VAR_15 / ((VAR_16 >> VAR_6) & VAR_5));

skipcfg:




 VAR_17 = FUNC_13(VAR_13);
 FUNC_1(FUNC_2(VAR_17), VAR_13);

 VAR_14->busdev = FUNC_9(VAR_13, "pwmbus", -1);

 return (FUNC_5(VAR_13));

fail:
 FUNC_3(VAR_13);
 return (VAR_18);
}
