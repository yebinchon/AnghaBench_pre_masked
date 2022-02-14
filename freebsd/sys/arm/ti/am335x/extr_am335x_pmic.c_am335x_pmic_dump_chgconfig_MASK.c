
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tps65217_chgconfig3_reg {size_t trange; size_t termif; size_t pchrgt; size_t dppmth; size_t ichrg; } ;
struct tps65217_chgconfig2_reg {size_t voreg; size_t vprechg; size_t dyntmr; } ;
struct tps65217_chgconfig1_reg {size_t chg_en; size_t susp; size_t term; size_t reset; size_t ntc_type; size_t tmr_en; size_t timer; } ;
struct tps65217_chgconfig0_reg {size_t battemp; size_t pchgtout; size_t chgtout; size_t active; size_t termi; size_t tsusp; size_t dppm; size_t treg; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int *,int) ;
 int FUNC_1 (int ,char*,char const*) ;
 char const** VAR_4 ;

__attribute__((used)) static void
FUNC_2(device_t VAR_5)
{
 struct tps65217_chgconfig0_reg VAR_6;
 struct tps65217_chgconfig1_reg VAR_7;
 struct tps65217_chgconfig2_reg VAR_8;
 struct tps65217_chgconfig3_reg VAR_9;
 const char *VAR_10[] = {"enabled", "disabled"};
 const char *VAR_11[] = {"disabled", "enabled"};
 const char *VAR_12[] = {"inactive", "active"};
 const char *VAR_13[] = {"false", "true"};
 const char *VAR_14[] = {"4h", "5h", "6h", "8h"};
 const char *VAR_15[] = {"100k", "10k"};
 const char *VAR_16[] = {"2.9V", "2.5V"};
 const char *VAR_17[] = {"0-45 C", "0-60 C"};
 const char *VAR_18[] = {"2.5%", "7.5%", "15%", "18%"};
 const char *VAR_19[] = {"30 min", "60 min"};
 const char *VAR_20[] = {"3.50V", "3.75V", "4.00V", "4.25V"};
 const char *VAR_21[] = {"300mA", "400mA", "500mA", "700mA"};

 FUNC_0(VAR_5, VAR_0, (uint8_t *)&VAR_6, 1);
 FUNC_1(VAR_5, " BAT TEMP/NTC ERROR: %s\n", VAR_13[VAR_6]);
 FUNC_1(VAR_5, " Pre-charge timer time-out: %s\n", VAR_13[VAR_6]);
 FUNC_1(VAR_5, " Charge timer time-out: %s\n", VAR_13[VAR_6]);
 FUNC_1(VAR_5, " Charger active: %s\n", VAR_13[VAR_6]);
 FUNC_1(VAR_5, " Termination current detected: %s\n", VAR_13[VAR_6]);
 FUNC_1(VAR_5, " Thermal suspend: %s\n", VAR_13[VAR_6]);
 FUNC_1(VAR_5, " DPPM active: %s\n", VAR_13[VAR_6]);
 FUNC_1(VAR_5, " Thermal regulation: %s\n", VAR_12[VAR_6]);

 FUNC_0(VAR_5, VAR_1, (uint8_t *)&VAR_7, 1);
 FUNC_1(VAR_5, " Charger: %s\n", VAR_11[VAR_7]);
 FUNC_1(VAR_5, " Suspend charge: %s\n", VAR_12[VAR_7]);
 FUNC_1(VAR_5, " Charge termination: %s\n", VAR_10[VAR_7]);
 FUNC_1(VAR_5, " Charger reset: %s\n", VAR_12[VAR_7]);
 FUNC_1(VAR_5, " NTC TYPE: %s\n", VAR_15[VAR_7]);
 FUNC_1(VAR_5, " Safety timer: %s\n", VAR_11[VAR_7]);
 FUNC_1(VAR_5, " Charge safety timer: %s\n", VAR_14[VAR_7]);

 FUNC_0(VAR_5, VAR_2, (uint8_t *)&VAR_8, 1);
 FUNC_1(VAR_5, " Charge voltage: %s\n", VAR_4[VAR_8]);
 FUNC_1(VAR_5, " Pre-charge to fast charge transition voltage: %s\n",
     VAR_16[VAR_8]);
 FUNC_1(VAR_5, " Dynamic timer function: %s\n", VAR_11[VAR_8]);

 FUNC_0(VAR_5, VAR_3, (uint8_t *)&VAR_9, 1);
 FUNC_1(VAR_5, " Temperature range for charging: %s\n", VAR_17[VAR_9]);
 FUNC_1(VAR_5, " Termination current factor: %s\n", VAR_18[VAR_9]);
 FUNC_1(VAR_5, " Pre-charge time: %s\n", VAR_19[VAR_9]);
 FUNC_1(VAR_5, " Power path DPPM threshold: %s\n", VAR_20[VAR_9]);
 FUNC_1(VAR_5, " Charge current: %s\n", VAR_21[VAR_9]);
}
