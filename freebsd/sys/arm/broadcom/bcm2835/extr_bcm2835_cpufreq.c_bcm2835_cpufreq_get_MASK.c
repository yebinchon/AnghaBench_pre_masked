
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cf_setting {int * dev; int lat; void* power; void* volts; int freq; } ;
struct bcm2835_cpufreq_softc {int dummy; } ;
typedef int * device_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (struct bcm2835_cpufreq_softc*) ;
 int FUNC_2 (struct bcm2835_cpufreq_softc*) ;
 int FUNC_3 (struct bcm2835_cpufreq_softc*,int ) ;
 struct bcm2835_cpufreq_softc* FUNC_4 (int *) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (struct cf_setting*,void*,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_4, struct cf_setting *VAR_5)
{
 struct bcm2835_cpufreq_softc *VAR_6;
 int VAR_7;

 if (VAR_5 == ((void*)0))
  return (VAR_2);

 VAR_6 = FUNC_4(VAR_4);
 FUNC_6(VAR_5, VAR_1, sizeof(*VAR_5));
 VAR_5->dev = ((void*)0);


 FUNC_1(VAR_6);
 VAR_7 = FUNC_3(VAR_6,
     VAR_0);
 FUNC_2(VAR_6);
 if (VAR_7 < 0) {
  FUNC_5(VAR_4, "can't get clock\n");
  return (VAR_2);
 }


 VAR_5->freq = FUNC_0(VAR_7);

 VAR_5->volts = VAR_1;

 VAR_5->power = VAR_1;

 VAR_5->lat = VAR_3;

 VAR_5->dev = VAR_4;

 return (0);
}
