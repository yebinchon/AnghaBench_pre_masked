
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct mv_thermal_softc {int cur_sensor; struct mv_thermal_config* config; int * syscon; int dev; int mtx; } ;
struct mv_thermal_config {int type; int ncpus; } ;
typedef int phandle_t ;
typedef int name ;
typedef int device_t ;
typedef int desc ;
struct TYPE_2__ {scalar_t__ ocd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int **) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int ,int,int ,char*,char*) ;
 struct sysctl_oid_list* FUNC_2 (int ) ;
 int FUNC_3 (struct mv_thermal_softc*) ;
 int VAR_5 ;
 int FUNC_4 (struct mv_thermal_softc*) ;
 int FUNC_5 (int ) ;
 struct mv_thermal_softc* FUNC_6 (int ) ;
 struct sysctl_ctx_list* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int *,int ,int *,int ) ;
 int VAR_6 ;
 int FUNC_11 (int ) ;
 TYPE_1__* FUNC_12 (int ,int ) ;
 int FUNC_13 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_7)
{
 struct mv_thermal_softc *VAR_8;
 struct sysctl_ctx_list *VAR_9;
 struct sysctl_oid_list *VAR_10;
 phandle_t VAR_11;
 char VAR_12[255];
 char VAR_13[255];
 int VAR_14;

 VAR_8 = FUNC_6(VAR_7);
 VAR_8->dev = VAR_7;
 VAR_11 = FUNC_11(VAR_7);

 VAR_8->config = (struct mv_thermal_config *)
     FUNC_12(VAR_7, VAR_5)->ocd_data;

 FUNC_10(&VAR_8->mtx, FUNC_5(VAR_7), ((void*)0), VAR_3);


 if (FUNC_0(VAR_8->dev, &VAR_8->syscon) != 0 ||
     VAR_8->syscon == ((void*)0)) {
  FUNC_9(VAR_7, "cannot get syscon for device\n");
  return (VAR_2);
 }

 VAR_8->cur_sensor = -1;
 switch (VAR_8->config->type) {
 case 129:
  FUNC_3(VAR_8);
  break;
 case 128:
  FUNC_4(VAR_8);
  break;
 }

 VAR_9 = FUNC_7(VAR_7);
 VAR_10 = FUNC_2(FUNC_8(VAR_7));

 FUNC_1(VAR_9, VAR_10, VAR_4, "internal",
     VAR_1 | VAR_0,
     VAR_7, 0, VAR_6,
     "IK",
     "Internal Temperature");

 for (VAR_14 = 0; VAR_14 < VAR_8->config->ncpus; VAR_14++) {
  FUNC_13(VAR_12, sizeof(VAR_12), "cpu%d", VAR_14);
  FUNC_13(VAR_13, sizeof(VAR_13), "CPU%d Temperature", VAR_14);
  FUNC_1(VAR_9, VAR_10, VAR_4, VAR_12,
      VAR_1 | VAR_0,
      VAR_7, VAR_14 + 1, VAR_6,
      "IK",
      VAR_13);
 }

 return (0);
}
