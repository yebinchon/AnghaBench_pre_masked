
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysctl_oid {int dummy; } ;
struct TYPE_2__ {struct bcm2835_cpufreq_softc* ich_arg; int ich_func; } ;
struct bcm2835_cpufreq_softc {int arm_max_freq; int arm_min_freq; int core_max_freq; int core_min_freq; int sdram_max_freq; int sdram_min_freq; TYPE_1__ init_hook; scalar_t__ min_voltage_core; scalar_t__ max_voltage_core; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sysctl_oid* FUNC_0 (int *,int ,int ,char*,int,int *,char*) ;
 int FUNC_1 (int *,int ,int ,char*,int,struct bcm2835_cpufreq_softc*,int ,int ,char*,char*) ;
 int FUNC_2 (struct sysctl_oid*) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;
 struct bcm2835_cpufreq_softc* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int *,int,char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_10 (int *) ;
 int VAR_19 ;

__attribute__((used)) static int
FUNC_11(device_t VAR_20)
{
 struct bcm2835_cpufreq_softc *VAR_21;
 struct sysctl_oid *VAR_22;


 VAR_21 = FUNC_6(VAR_20);
 VAR_21->dev = VAR_20;


 VAR_21->arm_max_freq = -1;
 VAR_21->arm_min_freq = -1;
 VAR_21->core_max_freq = -1;
 VAR_21->core_min_freq = -1;
 VAR_21->sdram_max_freq = -1;
 VAR_21->sdram_min_freq = -1;
 VAR_21->max_voltage_core = 0;
 VAR_21->min_voltage_core = 0;


 if (FUNC_7(VAR_20) == 0) {
  FUNC_10(&VAR_8);

  VAR_22 = FUNC_0(&VAR_8,
      FUNC_3(VAR_6), VAR_5, "cpufreq",
      VAR_0, ((void*)0), "");


  FUNC_1(&VAR_8, FUNC_2(VAR_22),
      VAR_5, "arm_freq", VAR_3 | VAR_1, VAR_21, 0,
      VAR_9, "IU",
      "ARM frequency (Hz)");
  FUNC_1(&VAR_8, FUNC_2(VAR_22),
      VAR_5, "core_freq", VAR_3 | VAR_1, VAR_21, 0,
      VAR_10, "IU",
      "Core frequency (Hz)");
  FUNC_1(&VAR_8, FUNC_2(VAR_22),
      VAR_5, "sdram_freq", VAR_3 | VAR_1, VAR_21, 0,
      VAR_11, "IU",
      "SDRAM frequency (Hz)");


  FUNC_1(&VAR_8, FUNC_2(VAR_22),
      VAR_5, "turbo", VAR_3 | VAR_1, VAR_21, 0,
      VAR_13, "IU",
      "Disables dynamic clocking");


  FUNC_1(&VAR_8, FUNC_2(VAR_22),
      VAR_5, "voltage_core", VAR_3 | VAR_1, VAR_21, 0,
      VAR_14, "I",
      "ARM/GPU core voltage"
      "(offset from 1.2V in units of 0.025V)");
  FUNC_1(&VAR_8, FUNC_2(VAR_22),
      VAR_5, "voltage_sdram", VAR_3 | VAR_2, VAR_21,
      0, VAR_15, "I",
      "SDRAM voltage (offset from 1.2V in units of 0.025V)");


  FUNC_1(&VAR_8, FUNC_2(VAR_22),
      VAR_5, "voltage_sdram_c", VAR_3 | VAR_1, VAR_21,
      0, VAR_16, "I",
      "SDRAM controller voltage"
      "(offset from 1.2V in units of 0.025V)");
  FUNC_1(&VAR_8, FUNC_2(VAR_22),
      VAR_5, "voltage_sdram_i", VAR_3 | VAR_1, VAR_21,
      0, VAR_17, "I",
      "SDRAM I/O voltage (offset from 1.2V in units of 0.025V)");
  FUNC_1(&VAR_8, FUNC_2(VAR_22),
      VAR_5, "voltage_sdram_p", VAR_3 | VAR_1, VAR_21,
      0, VAR_18, "I",
      "SDRAM phy voltage (offset from 1.2V in units of 0.025V)");


  FUNC_1(&VAR_8, FUNC_2(VAR_22),
      VAR_5, "temperature", VAR_3 | VAR_0, VAR_21, 0,
      VAR_12, "I",
      "SoC temperature (thousandths of a degree C)");
 }


 FUNC_9(&VAR_19, 1, "vcsema");


 VAR_21->init_hook.ich_func = VAR_7;
 VAR_21->init_hook.ich_arg = VAR_21;

 if (FUNC_4(&VAR_21->init_hook) != 0) {
  FUNC_8(VAR_20, "config_intrhook_establish failed\n");
  return (VAR_4);
 }


 FUNC_5(VAR_20);

 return (0);
}
