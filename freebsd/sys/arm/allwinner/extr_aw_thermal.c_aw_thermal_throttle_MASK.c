
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct aw_thermal_softc {int throttle; TYPE_2__* levels; int min_freq; } ;
typedef int * device_t ;
struct TYPE_4__ {int freq; } ;
struct TYPE_5__ {TYPE_1__ total_set; } ;


 int FUNC_0 (int *,TYPE_2__*,int*) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct aw_thermal_softc *VAR_2, int VAR_3)
{
 device_t VAR_4;
 int VAR_5, VAR_6;

 if (VAR_3 == VAR_2->throttle)
  return;

 if (VAR_3 != 0) {

  VAR_4 = FUNC_3(FUNC_2("cpufreq"), 0);
  if (VAR_4 == ((void*)0))
   return;
  VAR_5 = VAR_1;
  VAR_6 = FUNC_0(VAR_4, VAR_2->levels, &VAR_5);
  if (VAR_6 != 0 || VAR_5 == 0)
   return;
  VAR_2->min_freq = VAR_2->levels[VAR_5 - 1].total_set.freq;
  VAR_6 = FUNC_1(VAR_4, &VAR_2->levels[VAR_5 - 1],
      VAR_0);
  if (VAR_6 != 0)
   return;
 }

 VAR_2->throttle = VAR_3;
}
