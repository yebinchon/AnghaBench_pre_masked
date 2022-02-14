
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct cpufreq_dt_softc {int nopp; TYPE_1__* opp; int dev; } ;
typedef scalar_t__ phandle_t ;
typedef scalar_t__ pcell_t ;
typedef int opp_xref ;
typedef int lat ;
typedef int cell ;
struct TYPE_3__ {int freq; int clk_latency; int turbo_mode; int opp_suspend; scalar_t__ uvolt_target; scalar_t__ uvolt_max; scalar_t__ uvolt_min; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,scalar_t__*,int) ;
 int FUNC_2 (scalar_t__,char*,int,void**) ;
 scalar_t__ FUNC_3 (scalar_t__,char*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_9 (int,int ,int ) ;

__attribute__((used)) static int
FUNC_10(struct cpufreq_dt_softc *VAR_5, phandle_t VAR_6)
{
 phandle_t VAR_7, VAR_8, VAR_9;
 pcell_t VAR_10[2];
 uint32_t *VAR_11, VAR_12;
 int VAR_13, VAR_14;

 if (FUNC_1(VAR_6, "operating-points-v2", &VAR_9,
     sizeof(VAR_9)) == -1) {
  FUNC_7(VAR_5->dev, "Cannot get xref to oppv2 table\n");
  return (VAR_1);
 }

 VAR_8 = FUNC_4(VAR_9);
 if (VAR_8 == VAR_9)
  return (VAR_1);

 if (!FUNC_3(VAR_8, "opp-shared")) {
  FUNC_7(VAR_5->dev, "Only opp-shared is supported\n");
  return (VAR_1);
 }

 for (VAR_7 = FUNC_0(VAR_8); VAR_7 > 0; VAR_7 = FUNC_5(VAR_7))
  VAR_5->nopp += 1;

 VAR_5->opp = FUNC_9(sizeof(*VAR_5->opp) * VAR_5->nopp, VAR_2, VAR_3);

 for (VAR_14 = 0, VAR_8 = FUNC_0(VAR_8); VAR_8 > 0;
      VAR_8 = FUNC_5(VAR_8), VAR_14++) {

  if (FUNC_1(VAR_8, "opp-hz", VAR_10,
      sizeof(VAR_10)) == -1)
   continue;

  VAR_5->opp[VAR_14].freq = VAR_10[0];
  VAR_5->opp[VAR_14].freq <<= 32;
  VAR_5->opp[VAR_14].freq |= VAR_10[1];

  if (FUNC_1(VAR_8, "clock-latency", &VAR_12,
      sizeof(VAR_12)) == -1)
   VAR_5->opp[VAR_14].clk_latency = VAR_0;
  else
   VAR_5->opp[VAR_14].clk_latency = (int)VAR_12;

  if (FUNC_3(VAR_8, "turbo-mode"))
   VAR_5->opp[VAR_14].turbo_mode = 1;
  if (FUNC_3(VAR_8, "opp-suspend"))
   VAR_5->opp[VAR_14].opp_suspend = 1;

  VAR_13 = FUNC_2(VAR_8, "opp-microvolt",
    sizeof(*VAR_11), (void **)&VAR_11);
  if (VAR_13 == 1) {
   VAR_5->opp[VAR_14].uvolt_target = VAR_11[0];
   VAR_5->opp[VAR_14].uvolt_min = VAR_11[0];
   VAR_5->opp[VAR_14].uvolt_max = VAR_11[0];
  } else if (VAR_13 == 3) {
   VAR_5->opp[VAR_14].uvolt_target = VAR_11[0];
   VAR_5->opp[VAR_14].uvolt_min = VAR_11[1];
   VAR_5->opp[VAR_14].uvolt_max = VAR_11[2];
  } else {
   FUNC_7(VAR_5->dev,
       "Wrong count of opp-microvolt property\n");
   FUNC_6(VAR_11);
   FUNC_8(VAR_5->opp, VAR_2);
   return (VAR_1);
  }
  FUNC_6(VAR_11);

  if (VAR_4)
   FUNC_7(VAR_5->dev, "%ju.%03ju Mhz (%u uV)\n",
       VAR_5->opp[VAR_14].freq / 1000000,
       VAR_5->opp[VAR_14].freq % 1000000,
       VAR_5->opp[VAR_14].uvolt_target);
 }
 return (0);
}
