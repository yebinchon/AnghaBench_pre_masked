
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct cpufreq_dt_softc {int clk; int reg; int dev; } ;
struct cpufreq_dt_opp {int uvolt_target; int freq; int uvolt_max; int uvolt_min; } ;
struct cf_setting {int freq; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int*) ;
 int FUNC_2 (int ,int,int ) ;
 struct cpufreq_dt_opp* FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 struct cpufreq_dt_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int*) ;
 int FUNC_8 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_4, const struct cf_setting *VAR_5)
{
 struct cpufreq_dt_softc *VAR_6;
 const struct cpufreq_dt_opp *VAR_7, *VAR_8;
 uint64_t VAR_9;
 int VAR_10, VAR_11;

 VAR_6 = FUNC_5(VAR_4);

 if (FUNC_1(VAR_6->clk, &VAR_9) != 0) {
  FUNC_6(VAR_4, "Can't get current clk freq\n");
  return (VAR_3);
 }

 VAR_11 = FUNC_7(VAR_6->reg, &VAR_10);
 if (VAR_11 != 0) {







  VAR_8 = FUNC_3(VAR_6->dev, VAR_9);
  if (VAR_8 == ((void*)0)) {
   FUNC_6(VAR_4,
       "Can't find the current freq in opp\n");
   return (VAR_2);
  }
  VAR_10 = VAR_8->uvolt_target;

 }

 VAR_7 = FUNC_3(VAR_6->dev, VAR_5->freq * 1000000);
 if (VAR_7 == ((void*)0)) {
  FUNC_6(VAR_4, "Couldn't find an opp for this freq\n");
  return (VAR_1);
 }
 FUNC_0(VAR_6->dev, "Current freq %ju, uvolt: %d\n", VAR_9, VAR_10);
 FUNC_0(VAR_6->dev, "Target freq %ju, , uvolt: %d\n",
     VAR_7->freq, VAR_7->uvolt_target);

 if (VAR_10 < VAR_7->uvolt_target) {
  FUNC_0(VAR_4, "Changing regulator from %u to %u\n",
      VAR_10, VAR_7->uvolt_target);
  VAR_11 = FUNC_8(VAR_6->reg,
      VAR_7->uvolt_min,
      VAR_7->uvolt_max);
  if (VAR_11 != 0) {
   FUNC_0(VAR_4, "Failed, backout\n");
   return (VAR_3);
  }
 }

 FUNC_0(VAR_4, "Setting clk to %ju\n", VAR_7->freq);
 VAR_11 = FUNC_2(VAR_6->clk, VAR_7->freq, VAR_0);
 if (VAR_11 != 0) {
  FUNC_0(VAR_4, "Failed, backout\n");

  VAR_11 = FUNC_8(VAR_6->reg,
      VAR_8->uvolt_min,
      VAR_8->uvolt_max);
  return (VAR_3);
 }

 if (VAR_10 > VAR_7->uvolt_target) {
  FUNC_0(VAR_4, "Changing regulator from %u to %u\n",
      VAR_10, VAR_7->uvolt_target);
  VAR_11 = FUNC_8(VAR_6->reg,
      VAR_7->uvolt_min,
      VAR_7->uvolt_max);
  if (VAR_11 != 0) {
   FUNC_0(VAR_4, "Failed to switch regulator to %d\n",
       VAR_7->uvolt_target);

   (void)FUNC_2(VAR_6->clk, VAR_8->freq, 0);
   return (VAR_3);
  }
 }

 if (FUNC_1(VAR_6->clk, &VAR_9) == 0)
  FUNC_4(VAR_4, VAR_9);

 return (0);
}
