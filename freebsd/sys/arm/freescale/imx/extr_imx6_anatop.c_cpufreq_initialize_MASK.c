
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct oppt {int mv; int mhz; } ;
struct imx6_anatop_softc {int refosc_mhz; int cpu_maxmv; int cpu_maxmhz; int cpu_minmv; int cpu_minmhz; int cpu_maxmhz_hw; int cpu_overclock_enable; int cpu_curmhz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,int ,int ,char*,int,int *,int ,char*) ;
 int FUNC_1 (int *,int ,int ,char*,int,struct imx6_anatop_softc*,int ,int ,char*,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int *) ;
 int VAR_8 ;
 struct oppt* FUNC_4 (struct imx6_anatop_softc*,int ) ;
 int FUNC_5 (struct imx6_anatop_softc*,struct oppt*) ;
 int VAR_9 ;
 int VAR_10 ;
 size_t FUNC_6 (int ) ;
 int * VAR_11 ;

__attribute__((used)) static void
FUNC_7(struct imx6_anatop_softc *VAR_12)
{
 uint32_t VAR_13;
 struct oppt * VAR_14;

 FUNC_0(((void*)0), FUNC_2(VAR_8),
     VAR_7, "cpu_mhz", VAR_1, &VAR_12->cpu_curmhz, 0,
     "CPU frequency");

 FUNC_1(((void*)0), FUNC_2(VAR_8),
     VAR_7, "cpu_minmhz", VAR_3 | VAR_2 | VAR_0,
     VAR_12, 0, VAR_10, "IU", "Minimum CPU frequency");

 FUNC_1(((void*)0), FUNC_2(VAR_8),
     VAR_7, "cpu_maxmhz", VAR_3 | VAR_2 | VAR_0,
     VAR_12, 0, VAR_9, "IU", "Maximum CPU frequency");

 FUNC_0(((void*)0), FUNC_2(VAR_8),
     VAR_7, "cpu_maxmhz_hw", VAR_1, &VAR_12->cpu_maxmhz_hw, 0,
     "Maximum CPU frequency allowed by hardware");

 FUNC_0(((void*)0), FUNC_2(VAR_8),
     VAR_7, "cpu_overclock_enable", VAR_2,
     &VAR_12->cpu_overclock_enable, 0,
     "Allow setting CPU frequency higher than cpu_maxmhz_hw");






 VAR_12->refosc_mhz = 24;
 VAR_13 = (FUNC_6(VAR_4) &
     VAR_5) >> VAR_6;
 VAR_12->cpu_maxmhz_hw = VAR_11[VAR_13];
 VAR_12->cpu_maxmhz = VAR_12->cpu_maxmhz_hw;

 FUNC_3("hw.imx6.cpu_minmhz", &VAR_12->cpu_minmhz);
 VAR_14 = FUNC_4(VAR_12, VAR_12->cpu_minmhz);
 VAR_12->cpu_minmhz = VAR_14->mhz;
 VAR_12->cpu_minmv = VAR_14->mv;

 FUNC_3("hw.imx6.cpu_maxmhz", &VAR_12->cpu_maxmhz);
 VAR_14 = FUNC_4(VAR_12, VAR_12->cpu_maxmhz);
 VAR_12->cpu_maxmhz = VAR_14->mhz;
 VAR_12->cpu_maxmv = VAR_14->mv;
 FUNC_5(VAR_12, VAR_14);
}
