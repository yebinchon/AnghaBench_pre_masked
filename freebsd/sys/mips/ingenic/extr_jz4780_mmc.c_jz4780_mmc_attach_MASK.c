
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_2__ {int f_max; int f_min; int host_ocr; int caps; int mode; } ;
struct jz4780_mmc_softc {int sc_timeout; int * sc_clk; int * sc_res; int sc_intrhand; int sc_mtx; int sc_timeoutc; TYPE_1__ sc_host; int * sc_dev; int sc_bsh; int sc_bst; int * sc_req; } ;
typedef int ssize_t ;
typedef int prop ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int * device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*,int*,int) ;
 int VAR_12 ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int*,int ,char*) ;
 struct sysctl_oid_list* FUNC_2 (int ) ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,int ,int *) ;
 scalar_t__ FUNC_5 (int *,int ,int,int *,int ,struct jz4780_mmc_softc*,int *) ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int *,char*,int) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int *) ;
 struct jz4780_mmc_softc* FUNC_13 (int *) ;
 struct sysctl_ctx_list* FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,char*,...) ;
 scalar_t__ FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (struct jz4780_mmc_softc*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_19 (struct jz4780_mmc_softc*) ;
 scalar_t__ FUNC_20 (struct jz4780_mmc_softc*) ;
 int VAR_17 ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,int ,char*,int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;

__attribute__((used)) static int
FUNC_26(device_t VAR_18)
{
 struct jz4780_mmc_softc *VAR_19;
 struct sysctl_ctx_list *VAR_20;
 struct sysctl_oid_list *VAR_21;
 device_t VAR_22;
 ssize_t VAR_23;
 pcell_t VAR_24;
 phandle_t VAR_25;

 VAR_19 = FUNC_13(VAR_18);
 VAR_19->sc_dev = VAR_18;
 VAR_19->sc_req = ((void*)0);
 if (FUNC_3(VAR_18, VAR_16, VAR_19->sc_res) != 0) {
  FUNC_16(VAR_18, "cannot allocate device resources\n");
  return (VAR_1);
 }
 VAR_19->sc_bst = FUNC_25(VAR_19->sc_res[VAR_5]);
 VAR_19->sc_bsh = FUNC_24(VAR_19->sc_res[VAR_5]);
 if (FUNC_5(VAR_18, VAR_19->sc_res[VAR_4],
     VAR_3 | VAR_2, ((void*)0), VAR_14, VAR_19,
     &VAR_19->sc_intrhand)) {
  FUNC_4(VAR_18, VAR_16, VAR_19->sc_res);
  FUNC_16(VAR_18, "cannot setup interrupt handler\n");
  return (VAR_1);
 }
 VAR_19->sc_timeout = 10;
 VAR_20 = FUNC_14(VAR_18);
 VAR_21 = FUNC_2(FUNC_15(VAR_18));
 FUNC_1(VAR_20, VAR_21, VAR_12, "req_timeout", VAR_0,
     &VAR_19->sc_timeout, 0, "Request timeout in seconds");
 FUNC_22(&VAR_19->sc_mtx, FUNC_12(VAR_19->sc_dev), "jz4780_mmc",
     VAR_11);
 FUNC_8(&VAR_19->sc_timeoutc, &VAR_19->sc_mtx, 0);


 if (FUNC_19(VAR_19) != 0) {
  FUNC_16(VAR_18, "cannot reset the controller\n");
  goto fail;
 }
 if (VAR_15 == 0 && FUNC_20(VAR_19) != 0) {
  FUNC_16(VAR_19->sc_dev, "Couldn't setup DMA!\n");
  VAR_15 = 1;
 }
 if (VAR_13)
  FUNC_16(VAR_19->sc_dev, "DMA status: %s\n",
      VAR_15 ? "disabled" : "enabled");

 VAR_25 = FUNC_23(VAR_18);

 VAR_19->sc_host.f_max = 24000000;
 VAR_23 = FUNC_0(VAR_25, "max-frequency", &VAR_24, sizeof(VAR_24));
 if (VAR_23 / sizeof(VAR_24) == 1)
  VAR_19->sc_host.f_max = VAR_24;
 VAR_19->sc_host.f_min = VAR_19->sc_host.f_max / 128;

 VAR_19->sc_host.host_ocr = VAR_9 | VAR_10;
 VAR_19->sc_host.caps = VAR_8;
 VAR_19->sc_host.mode = VAR_17;




 VAR_23 = FUNC_0(VAR_25, "bus-width", &VAR_24, sizeof(VAR_24));
 if (VAR_23 / sizeof(VAR_24) != 1)
  VAR_19->sc_host.caps |= VAR_6 | VAR_7;
 else if (VAR_24 == 8)
  VAR_19->sc_host.caps |= VAR_7;
 else if (VAR_24 == 4)
  VAR_19->sc_host.caps |= VAR_6;

 if (FUNC_18(VAR_19) != 0) {
  FUNC_16(VAR_18, "cannot activate mmc clock\n");
  goto fail;
 }

 VAR_22 = FUNC_10(VAR_18, "mmc", -1);
 if (VAR_22 == ((void*)0)) {
  FUNC_16(VAR_18, "attaching MMC bus failed!\n");
  goto fail;
 }
 if (FUNC_17(VAR_22) != 0) {
  FUNC_16(VAR_18, "attaching MMC child failed!\n");
  FUNC_11(VAR_18, VAR_22);
  goto fail;
 }

 return (0);

fail:
 FUNC_7(&VAR_19->sc_timeoutc);
 FUNC_21(&VAR_19->sc_mtx);
 FUNC_6(VAR_18, VAR_19->sc_res[VAR_4], VAR_19->sc_intrhand);
 FUNC_4(VAR_18, VAR_16, VAR_19->sc_res);
 if (VAR_19->sc_clk != ((void*)0))
  FUNC_9(VAR_19->sc_clk);
 return (VAR_1);
}
