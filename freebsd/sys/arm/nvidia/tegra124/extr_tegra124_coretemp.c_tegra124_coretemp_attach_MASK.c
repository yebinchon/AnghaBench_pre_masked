
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra124_coretemp_softc {int core_max_temp; int cpu_id; int dev; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int,int *,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int,int ,int ,int ,char*,char*) ;
 int FUNC_2 (struct sysctl_oid*) ;
 int VAR_8 ;
 int FUNC_3 (int ) ;
 struct tegra124_coretemp_softc* FUNC_4 (int ) ;
 struct sysctl_ctx_list* FUNC_5 (int ) ;
 struct sysctl_oid* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct tegra124_coretemp_softc*) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_9)
{
 struct tegra124_coretemp_softc *VAR_10;
 device_t VAR_11;
 struct sysctl_oid *VAR_12;
 struct sysctl_ctx_list *VAR_13;
 int VAR_14;

 VAR_10 = FUNC_4(VAR_9);
 VAR_10->dev = VAR_9;
 VAR_10->cpu_id = FUNC_7(VAR_9);
 VAR_10->core_max_temp = 102000;
 VAR_11 = FUNC_3(VAR_9);

 VAR_14 = FUNC_8(VAR_10);
 if (VAR_14 != 0)
  return (VAR_14);

 VAR_13 = FUNC_5(VAR_9);

 VAR_12 = FUNC_0(VAR_13,
     FUNC_2(FUNC_6(VAR_11)), VAR_7,
     "coretemp", VAR_5, ((void*)0), "Per-CPU thermal information");




 FUNC_1(VAR_13, FUNC_2(FUNC_6(VAR_11)),
     VAR_7, "temperature", VAR_6 | VAR_5 | VAR_4,
     VAR_9, VAR_2, VAR_8, "IK",
     "Current temperature");
 FUNC_1(VAR_13, FUNC_2(VAR_12), VAR_7, "delta",
     VAR_6 | VAR_5 | VAR_4, VAR_9, VAR_0,
     VAR_8, "I",
     "Delta between TCC activation and current temperature");
 FUNC_1(VAR_13, FUNC_2(VAR_12), VAR_7, "resolution",
     VAR_6 | VAR_5 | VAR_4, VAR_9, VAR_1,
     VAR_8, "I",
     "Resolution of CPU thermal sensor");
 FUNC_1(VAR_13, FUNC_2(VAR_12), VAR_7, "tjmax",
     VAR_6 | VAR_5 | VAR_4, VAR_9, VAR_3,
     VAR_8, "IK",
     "TCC activation temperature");

 return (0);
}
