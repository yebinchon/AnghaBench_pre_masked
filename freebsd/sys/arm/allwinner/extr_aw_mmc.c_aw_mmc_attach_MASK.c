
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_3__ {int f_min; int f_max; int host_ocr; int caps; } ;
struct aw_mmc_softc {int aw_timeout; int * devq; int sim_mtx; int * sim; int * aw_res; int aw_intrhand; int aw_mtx; int aw_timeoutc; int * aw_dev; int * ccb; TYPE_1__ aw_host; int * aw_reg_vqmmc; int * aw_reg_vmmc; int aw_clk_mmc; int aw_clk_ahb; int aw_rst_ahb; int * aw_req; struct aw_mmc_conf* aw_mmc_conf; } ;
struct aw_mmc_conf {int dummy; } ;
typedef int phandle_t ;
typedef int * device_t ;
struct TYPE_4__ {scalar_t__ ocd_data; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_0 (int ,char*,int*,int) ;
 int VAR_21 ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int*,int ,char*) ;
 struct sysctl_oid_list* FUNC_2 (int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ FUNC_3 (struct aw_mmc_softc*) ;
 scalar_t__ FUNC_4 (struct aw_mmc_softc*) ;
 scalar_t__ VAR_26 ;
 scalar_t__ FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *,int ,int *) ;
 scalar_t__ FUNC_7 (int *,int ,int,int *,int ,struct aw_mmc_softc*,int *) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int ) ;
 int * FUNC_11 (int ,int ,char*,struct aw_mmc_softc*,int *,int *,int,int,int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int * FUNC_14 (int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int *,int ,char*,int *) ;
 int FUNC_18 (int ,int ,int ) ;
 int VAR_27 ;
 int * FUNC_19 (int *,char*,int) ;
 int FUNC_20 (int *,int *) ;
 char* FUNC_21 (int *) ;
 struct aw_mmc_softc* FUNC_22 (int *) ;
 struct sysctl_ctx_list* FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *,char*) ;
 scalar_t__ FUNC_26 (int *) ;
 int FUNC_27 (int ) ;
 scalar_t__ FUNC_28 (int *,int ,char*,int *) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *,char*,char*,int ) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (int *) ;
 TYPE_2__* FUNC_34 (int *,int ) ;
 scalar_t__ FUNC_35 (int *,int) ;
 scalar_t__ FUNC_36 (int *,int ,char*,int **) ;
 int FUNC_37 (int ) ;
 scalar_t__ FUNC_38 (int *,int *,int ) ;

__attribute__((used)) static int
FUNC_39(device_t VAR_28)
{
 device_t VAR_29;
 struct aw_mmc_softc *VAR_30;
 struct sysctl_ctx_list *VAR_31;
 struct sysctl_oid_list *VAR_32;
 uint32_t VAR_33, VAR_34;
 phandle_t VAR_35;
 int VAR_36;

 VAR_35 = FUNC_33(VAR_28);
 VAR_30 = FUNC_22(VAR_28);
 VAR_30->aw_dev = VAR_28;

 VAR_30->aw_mmc_conf = (struct aw_mmc_conf *)FUNC_34(VAR_28, VAR_27)->ocd_data;


 VAR_30->aw_req = ((void*)0);

 if (FUNC_5(VAR_28, VAR_25, VAR_30->aw_res) != 0) {
  FUNC_25(VAR_28, "cannot allocate device resources\n");
  return (VAR_4);
 }
 if (FUNC_7(VAR_28, VAR_30->aw_res[VAR_0],
     VAR_7 | VAR_6, ((void*)0), VAR_24, VAR_30,
     &VAR_30->aw_intrhand)) {
  FUNC_6(VAR_28, VAR_25, VAR_30->aw_res);
  FUNC_25(VAR_28, "cannot setup interrupt handler\n");
  return (VAR_4);
 }
 FUNC_30(&VAR_30->aw_mtx, FUNC_21(VAR_30->aw_dev), "aw_mmc",
     VAR_20);
 FUNC_10(&VAR_30->aw_timeoutc, &VAR_30->aw_mtx, 0);


 if (FUNC_28(VAR_28, 0, "ahb", &VAR_30->aw_rst_ahb) == 0) {
  VAR_36 = FUNC_27(VAR_30->aw_rst_ahb);
  if (VAR_36 != 0) {
   FUNC_25(VAR_28, "cannot de-assert reset\n");
   goto fail;
  }
 }


 VAR_36 = FUNC_17(VAR_28, 0, "ahb", &VAR_30->aw_clk_ahb);
 if (VAR_36 != 0) {
  FUNC_25(VAR_28, "cannot get ahb clock\n");
  goto fail;
 }
 VAR_36 = FUNC_16(VAR_30->aw_clk_ahb);
 if (VAR_36 != 0) {
  FUNC_25(VAR_28, "cannot enable ahb clock\n");
  goto fail;
 }
 VAR_36 = FUNC_17(VAR_28, 0, "mmc", &VAR_30->aw_clk_mmc);
 if (VAR_36 != 0) {
  FUNC_25(VAR_28, "cannot get mmc clock\n");
  goto fail;
 }
 VAR_36 = FUNC_18(VAR_30->aw_clk_mmc, VAR_1,
     VAR_2);
 if (VAR_36 != 0) {
  FUNC_25(VAR_28, "cannot init mmc clock\n");
  goto fail;
 }
 VAR_36 = FUNC_16(VAR_30->aw_clk_mmc);
 if (VAR_36 != 0) {
  FUNC_25(VAR_28, "cannot enable mmc clock\n");
  goto fail;
 }

 VAR_30->aw_timeout = 10;
 VAR_31 = FUNC_23(VAR_28);
 VAR_32 = FUNC_2(FUNC_24(VAR_28));
 FUNC_1(VAR_31, VAR_32, VAR_21, "req_timeout", VAR_3,
     &VAR_30->aw_timeout, 0, "Request timeout in seconds");


 if (FUNC_3(VAR_30) != 0) {
  FUNC_25(VAR_28, "cannot reset the controller\n");
  goto fail;
 }

 if (FUNC_4(VAR_30) != 0) {
  FUNC_25(VAR_30->aw_dev, "Couldn't setup DMA!\n");
  goto fail;
 }

 if (FUNC_0(VAR_35, "bus-width", &VAR_33, sizeof(uint32_t)) <= 0)
  VAR_33 = 4;

 if (FUNC_36(VAR_28, 0, "vmmc-supply",
     &VAR_30->aw_reg_vmmc) == 0) {
  if (VAR_26)
   FUNC_25(VAR_28, "vmmc-supply regulator found\n");
 }
 if (FUNC_36(VAR_28, 0, "vqmmc-supply",
     &VAR_30->aw_reg_vqmmc) == 0 && VAR_26) {
  if (VAR_26)
   FUNC_25(VAR_28, "vqmmc-supply regulator found\n");
 }

 VAR_30->aw_host.f_min = 400000;

 if (FUNC_0(VAR_35, "max-frequency", &VAR_34,
     sizeof(uint32_t)) <= 0)
  VAR_34 = 52000000;
 VAR_30->aw_host.f_max = VAR_34;

 VAR_30->aw_host.host_ocr = VAR_18 | VAR_19;
 VAR_30->aw_host.caps = VAR_10 | VAR_15 |
      VAR_16 | VAR_17 |
      VAR_14 | VAR_11;

 if (VAR_30->aw_reg_vqmmc != ((void*)0)) {
  if (FUNC_35(VAR_30->aw_reg_vqmmc, 1800000) == 0)
   VAR_30->aw_host.caps |= VAR_12;
  if (FUNC_35(VAR_30->aw_reg_vqmmc, 3300000) == 0)
   VAR_30->aw_host.caps |= VAR_13;
 } else
  VAR_30->aw_host.caps |= VAR_13;

 if (VAR_33 >= 4)
  VAR_30->aw_host.caps |= VAR_8;
 if (VAR_33 >= 8)
  VAR_30->aw_host.caps |= VAR_9;
 VAR_29 = FUNC_19(VAR_28, "mmc", -1);
 if (VAR_29 == ((void*)0)) {
  FUNC_25(VAR_28, "attaching MMC bus failed!\n");
  goto fail;
 }
 if (FUNC_26(VAR_29) != 0) {
  FUNC_25(VAR_28, "attaching MMC child failed!\n");
  FUNC_20(VAR_28, VAR_29);
  goto fail;
 }

 return (0);

fail:
 FUNC_9(&VAR_30->aw_timeoutc);
 FUNC_29(&VAR_30->aw_mtx);
 FUNC_8(VAR_28, VAR_30->aw_res[VAR_0], VAR_30->aw_intrhand);
 FUNC_6(VAR_28, VAR_25, VAR_30->aw_res);
 return (VAR_4);
}
