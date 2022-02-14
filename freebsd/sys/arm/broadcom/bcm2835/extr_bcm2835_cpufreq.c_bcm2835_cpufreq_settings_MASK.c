
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cf_setting {int dummy; } ;
struct bcm2835_cpufreq_softc {scalar_t__ arm_min_freq; scalar_t__ arm_max_freq; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct cf_setting*,int*) ;
 struct bcm2835_cpufreq_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct cf_setting*,int ,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2, struct cf_setting *VAR_3, int *VAR_4)
{
 struct bcm2835_cpufreq_softc *VAR_5;

 if (VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
  return (VAR_1);

 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5->arm_min_freq < 0 || VAR_5->arm_max_freq < 0) {
  FUNC_3("device is not configured\n");
  return (VAR_1);
 }


 FUNC_2(VAR_3, VAR_0, sizeof(*VAR_3) * (*VAR_4));

 FUNC_0(VAR_2, VAR_3, VAR_4);

 return (0);
}
