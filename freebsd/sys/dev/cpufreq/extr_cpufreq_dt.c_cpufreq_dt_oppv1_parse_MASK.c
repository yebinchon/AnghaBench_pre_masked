
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct cpufreq_dt_softc {int nopp; TYPE_1__* opp; int dev; } ;
typedef size_t ssize_t ;
typedef int phandle_t ;
typedef int lat ;
struct TYPE_2__ {int freq; int uvolt_min; int uvolt_max; int uvolt_target; int clk_latency; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int*,int) ;
 int FUNC_1 (int ,char*,int,void**) ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,char*,int,int,int) ;
 int FUNC_3 (int*,int ) ;
 TYPE_1__* FUNC_4 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_5(struct cpufreq_dt_softc *VAR_6, phandle_t VAR_7)
{
 uint32_t *VAR_8, VAR_9;
 ssize_t VAR_10;

 VAR_6->nopp = FUNC_1(VAR_7, "operating-points",
     sizeof(uint32_t) * 2, (void **)&VAR_8);
 if (VAR_6->nopp == -1)
  return (VAR_1);

 if (FUNC_0(VAR_7, "clock-latency", &VAR_9, sizeof(VAR_9)) == -1)
  VAR_9 = VAR_0;

 VAR_6->opp = FUNC_4(sizeof(*VAR_6->opp) * VAR_6->nopp, VAR_2, VAR_4);

 for (VAR_10 = 0; VAR_10 < VAR_6->nopp; VAR_10++) {
  VAR_6->opp[VAR_10].freq = VAR_8[VAR_10 * 2 + 0] * 1000;
  VAR_6->opp[VAR_10].uvolt_min = VAR_8[VAR_10 * 2 + 1];
  VAR_6->opp[VAR_10].uvolt_max = VAR_6->opp[VAR_10].uvolt_min;
  VAR_6->opp[VAR_10].uvolt_target = VAR_6->opp[VAR_10].uvolt_min;
  VAR_6->opp[VAR_10].clk_latency = VAR_9;

  if (VAR_5)
   FUNC_2(VAR_6->dev, "%ju.%03ju MHz, %u uV\n",
       VAR_6->opp[VAR_10].freq / 1000000,
       VAR_6->opp[VAR_10].freq % 1000000,
       VAR_6->opp[VAR_10].uvolt_target);
 }
 FUNC_3(VAR_8, VAR_3);

 return (0);
}
