
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra124_coretemp_softc {int dev; int * tsens_dev; scalar_t__ cpu_id; scalar_t__ tsens_id; } ;
typedef scalar_t__ phandle_t ;
typedef int pcell_t ;


 int VAR_0 ;
 int * FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__ FUNC_4 (scalar_t__,char*) ;
 int FUNC_5 (scalar_t__,char*,char*,int ,scalar_t__*,int*,int **) ;

__attribute__((used)) static int
FUNC_6(struct tegra124_coretemp_softc *VAR_1)
{
 int VAR_2, VAR_3;
 phandle_t VAR_4, VAR_5;
 pcell_t *VAR_6;

 VAR_4 = FUNC_1(0);
 VAR_4 = FUNC_4(VAR_4, "thermal-zones");
 if (VAR_4 <= 0) {
  FUNC_3(VAR_1->dev, "Cannot find 'thermal-zones'.\n");
  return (VAR_0);
 }

 VAR_4 = FUNC_4(VAR_4, "cpu");
 if (VAR_4 <= 0) {
  FUNC_3(VAR_1->dev, "Cannot find 'cpu'\n");
  return (VAR_0);
 }
 VAR_2 = FUNC_5(VAR_4, "thermal-sensors",
     "#thermal-sensor-cells", 0, &VAR_5, &VAR_3, &VAR_6);
 if (VAR_2 != 0) {
  FUNC_3(VAR_1->dev,
      "Cannot parse 'thermal-sensors' property.\n");
  return (VAR_0);
 }
 if (VAR_3 != 1) {
  FUNC_3(VAR_1->dev,
      "Invalid format of 'thermal-sensors' property(%d).\n",
      VAR_3);
  return (VAR_0);
 }

 VAR_1->tsens_id = 0x100 + VAR_1->cpu_id;
 FUNC_2(VAR_6);

 VAR_1->tsens_dev = FUNC_0(VAR_5);
 if (VAR_1->tsens_dev == ((void*)0)) {
  FUNC_3(VAR_1->dev,
      "Cannot find thermal sensors device.");
  return (VAR_0);
 }
 return (0);
}
