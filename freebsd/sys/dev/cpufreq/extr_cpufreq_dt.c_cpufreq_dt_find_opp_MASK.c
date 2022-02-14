
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct cpufreq_dt_softc {size_t nopp; struct cpufreq_dt_opp const* opp; } ;
struct cpufreq_dt_opp {int freq; } ;
typedef size_t ssize_t ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,...) ;
 struct cpufreq_dt_softc* FUNC_2 (int ) ;

__attribute__((used)) static const struct cpufreq_dt_opp *
FUNC_3(device_t VAR_0, uint64_t VAR_1)
{
 struct cpufreq_dt_softc *VAR_2;
 ssize_t VAR_3;

 VAR_2 = FUNC_2(VAR_0);

 FUNC_1(VAR_0, "Looking for freq %ju\n", VAR_1);
 for (VAR_3 = 0; VAR_3 < VAR_2->nopp; VAR_3++)
  if (FUNC_0(VAR_2->opp[VAR_3].freq, VAR_1))
   return (&VAR_2->opp[VAR_3]);

 FUNC_1(VAR_0, "Couldn't find one\n");
 return (((void*)0));
}
