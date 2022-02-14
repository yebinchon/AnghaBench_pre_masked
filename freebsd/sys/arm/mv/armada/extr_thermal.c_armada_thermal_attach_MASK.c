
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct armada_thermal_softc {int chip_temperature; int temp_upd; int temp_upd_mtx; int * ctrl_res; int * stat_res; TYPE_1__* tdata; } ;
typedef int device_t ;
struct TYPE_2__ {int (* tsen_init ) (struct armada_thermal_softc*) ;} ;
typedef TYPE_1__ armada_tdata_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 (struct armada_thermal_softc*,int *) ;
 void* FUNC_4 (int ,int ,int*,int ) ;
 int FUNC_5 (int ,int ,int ,int *) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *,int ,int ,struct armada_thermal_softc*) ;
 struct armada_thermal_softc* FUNC_8 (int ) ;
 struct sysctl_ctx_list* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*) ;
 int VAR_9 ;
 int FUNC_12 (int *,char*,int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct armada_thermal_softc*) ;

__attribute__((used)) static int
FUNC_15(device_t VAR_10)
{
 struct armada_thermal_softc *VAR_11;
 const armada_tdata_t *VAR_12;
 struct sysctl_ctx_list *VAR_13;
 struct sysctl_oid_list *VAR_14;
 int VAR_15;
 int VAR_16;

 VAR_11 = FUNC_8(VAR_10);


 VAR_16 = VAR_6;
 VAR_11->stat_res = FUNC_4(VAR_10, VAR_7,
     &VAR_16, VAR_5);
 if (VAR_11->stat_res == ((void*)0)) {
  FUNC_11(VAR_10,
      "Could not allocate memory for the status register\n");
  return (VAR_2);
 }

 VAR_16 = VAR_1;
 VAR_11->ctrl_res = FUNC_4(VAR_10, VAR_7,
     &VAR_16, VAR_5);
 if (VAR_11->ctrl_res == ((void*)0)) {
  FUNC_11(VAR_10,
      "Could not allocate memory for the control register\n");
  FUNC_5(VAR_10, VAR_7,
      FUNC_13(VAR_11->stat_res), VAR_11->stat_res);
  VAR_11->stat_res = ((void*)0);
  return (VAR_2);
 }


 VAR_12 = VAR_11->tdata;
 VAR_12->tsen_init(VAR_11);

 for (VAR_15 = 1000; VAR_15 > 0; VAR_15--) {
  if (FUNC_3(VAR_11, &VAR_11->chip_temperature) == 0)
   break;
  FUNC_0(10);
 }
 if (VAR_15 <= 0) {
  FUNC_5(VAR_10, VAR_7,
      FUNC_13(VAR_11->stat_res), VAR_11->stat_res);
  VAR_11->stat_res = ((void*)0);
  FUNC_5(VAR_10, VAR_7,
      FUNC_13(VAR_11->ctrl_res), VAR_11->ctrl_res);
  VAR_11->ctrl_res = ((void*)0);
  return (VAR_2);
 }

 FUNC_12(&VAR_11->temp_upd_mtx, "Armada Thermal", ((void*)0), VAR_3);

 FUNC_6(&VAR_11->temp_upd, &VAR_11->temp_upd_mtx, 0);

 FUNC_7(&VAR_11->temp_upd, VAR_9, VAR_8, VAR_11);

 VAR_13 = FUNC_9(VAR_10);
 VAR_14 = FUNC_2(FUNC_10(VAR_10));
 FUNC_1(VAR_13, VAR_14, VAR_4, "temperature",
     VAR_0, &VAR_11->chip_temperature, "SoC temperature");

 return (0);
}
