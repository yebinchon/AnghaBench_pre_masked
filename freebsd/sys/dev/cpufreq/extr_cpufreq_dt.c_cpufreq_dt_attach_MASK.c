
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct cpufreq_dt_softc {int clk; int cpus; int reg; int dev; } ;
typedef scalar_t__ phandle_t ;
typedef int opp ;
typedef enum opp_version { ____Placeholder_opp_version } opp_version ;
typedef int device_t ;
typedef int copp ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (scalar_t__,char*,scalar_t__*,int) ;
 scalar_t__ FUNC_3 (scalar_t__,char*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int ,scalar_t__,int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct cpufreq_dt_softc*,scalar_t__) ;
 int FUNC_9 (struct cpufreq_dt_softc*,scalar_t__) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 struct cpufreq_dt_softc* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ,scalar_t__,char*,int *) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static int
FUNC_19(device_t VAR_3)
{
 struct cpufreq_dt_softc *VAR_4;
 phandle_t VAR_5;
 phandle_t VAR_6, VAR_7, VAR_8;
 int VAR_9;
 uint64_t VAR_10;
 int VAR_11 = 0;
 enum opp_version VAR_12;

 VAR_4 = FUNC_12(VAR_3);
 VAR_4->dev = VAR_3;
 VAR_5 = FUNC_16(FUNC_11(VAR_3));

 if (FUNC_17(VAR_3, VAR_5,
     "cpu-supply", &VAR_4->reg) != 0) {
  if (FUNC_17(VAR_3, VAR_5,
      "cpu0-supply", &VAR_4->reg) != 0) {
   FUNC_14(VAR_3, "no regulator for %s\n",
       FUNC_15(FUNC_11(VAR_3)));
   return (VAR_0);
  }
 }

 if (FUNC_5(VAR_3, VAR_5, 0, &VAR_4->clk) != 0) {
  FUNC_14(VAR_3, "no clock for %s\n",
      FUNC_15(FUNC_11(VAR_3)));
  FUNC_18(VAR_4->reg);
  return (VAR_0);
 }

 if (FUNC_3(VAR_5, "operating-points")) {
  VAR_12 = VAR_1;
  VAR_11 = FUNC_8(VAR_4, VAR_5);
  if (VAR_11 != 0) {
   FUNC_14(VAR_3, "Failed to parse opp-v1 table\n");
   return (VAR_11);
  }
  FUNC_2(VAR_5, "operating-points", &VAR_7,
      sizeof(VAR_7));
 } else {
  VAR_12 = VAR_2;
  VAR_11 = FUNC_9(VAR_4, VAR_5);
  if (VAR_11 != 0) {
   FUNC_14(VAR_3, "Failed to parse opp-v2 table\n");
   return (VAR_11);
  }
  FUNC_2(VAR_5, "operating-points-v2", &VAR_7,
      sizeof(VAR_7));
 }




 FUNC_1(&VAR_4->cpus);
 VAR_9 = FUNC_13(FUNC_11(VAR_3));
 for (VAR_6 = VAR_5; VAR_6 > 0; VAR_6 = FUNC_4(VAR_6), VAR_9++) {
  VAR_8 = -1;
  if (VAR_12 == VAR_1)
   FUNC_2(VAR_6, "operating-points", &VAR_8,
       sizeof(VAR_8));
  else if (VAR_12 == VAR_2)
   FUNC_2(VAR_6, "operating-points-v2",
       &VAR_8, sizeof(VAR_8));
  if (VAR_7 == VAR_8)
   FUNC_0(VAR_9, &VAR_4->cpus);
 }

 if (FUNC_6(VAR_4->clk, &VAR_10) == 0)
  FUNC_7(VAR_3, VAR_10);

 FUNC_10(VAR_3);

 return (0);
}
