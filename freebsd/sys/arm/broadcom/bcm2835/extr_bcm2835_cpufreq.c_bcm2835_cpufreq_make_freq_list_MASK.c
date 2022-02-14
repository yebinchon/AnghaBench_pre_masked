
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cf_setting {int freq; int volts; void* dev; void* lat; } ;
struct bcm2835_cpufreq_softc {int arm_max_freq; int arm_min_freq; scalar_t__ turbo_mode; int max_voltage_core; int min_voltage_core; } ;
typedef void* device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 struct bcm2835_cpufreq_softc* FUNC_0 (void*) ;

__attribute__((used)) static int
FUNC_1(device_t VAR_4, struct cf_setting *VAR_5,
    int *VAR_6)
{
 struct bcm2835_cpufreq_softc *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12;

 VAR_7 = FUNC_0(VAR_4);
 VAR_8 = VAR_7->arm_max_freq;
 VAR_9 = VAR_7->arm_min_freq;


 VAR_11 = VAR_8 % VAR_1;
 VAR_8 -= VAR_11;
 if (VAR_8 < VAR_9)
  VAR_8 = VAR_9;


 if (VAR_7->turbo_mode != VAR_0)
  if (VAR_9 > VAR_3)
   VAR_9 = VAR_3;
 VAR_12 = 0;
 VAR_10 = VAR_7->min_voltage_core;
 VAR_5[VAR_12].freq = VAR_8;
 VAR_5[VAR_12].volts = VAR_10;
 VAR_5[VAR_12].lat = VAR_2;
 VAR_5[VAR_12].dev = VAR_4;
 VAR_12++;
 if (VAR_8 != VAR_9) {
  VAR_5[VAR_12].freq = VAR_9;
  VAR_5[VAR_12].volts = VAR_10;
  VAR_5[VAR_12].lat = VAR_2;
  VAR_5[VAR_12].dev = VAR_4;
  VAR_12++;
 }

 *VAR_6 = VAR_12;

 return (0);
}
