
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int host_ocr; int caps; void* f_max; void* f_min; } ;
struct TYPE_4__ {int pol; int * dev; scalar_t__ pin; } ;
struct TYPE_6__ {scalar_t__ pin; int * dev; scalar_t__ pol; } ;
struct aml8726_mmc_softc {scalar_t__ ref_freq; int* voltages; int * res; scalar_t__ dmatag; scalar_t__ dmamap; scalar_t__ ih_cookie; TYPE_2__ host; int mtx; int ch; TYPE_1__ vselect; TYPE_3__ pwr_en; int port; int dev; } ;
typedef int ssize_t ;
typedef int prop ;
typedef int phandle_t ;
typedef scalar_t__ pcell_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct aml8726_mmc_softc*) ;
 int FUNC_1 (struct aml8726_mmc_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int *,scalar_t__,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,char*,scalar_t__*,int) ;
 int FUNC_6 (int ,char*,void**) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct aml8726_mmc_softc*,int) ;
 void* FUNC_11 (struct aml8726_mmc_softc*,int ) ;
 int VAR_17 ;
 scalar_t__ FUNC_12 (struct aml8726_mmc_softc*) ;
 int VAR_18 ;
 scalar_t__ FUNC_13 (int ,int ,int *) ;
 int FUNC_14 (int ,int ,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,scalar_t__*) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__,int ,scalar_t__*) ;
 int FUNC_17 (scalar_t__,scalar_t__) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int ,int *) ;
 int FUNC_20 (int ,int ,int,int *,int ,struct aml8726_mmc_softc*,scalar_t__*) ;
 int FUNC_21 (int ,int ,scalar_t__) ;
 int FUNC_22 (int *,int *,int ) ;
 int FUNC_23 (int ,char*,int) ;
 struct aml8726_mmc_softc* FUNC_24 (int ) ;
 int FUNC_25 (int ,char*,...) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ) ;
 scalar_t__ FUNC_28 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_29(device_t VAR_19)
{
 struct aml8726_mmc_softc *VAR_20 = FUNC_24(VAR_19);
 char *VAR_21;
 char *VAR_22;
 char *VAR_23;
 int VAR_24;
 int VAR_25;
 pcell_t VAR_26[3];
 phandle_t VAR_27;
 ssize_t VAR_28;
 device_t VAR_29;

 VAR_20->dev = VAR_19;

 VAR_27 = FUNC_27(VAR_19);

 VAR_20->ref_freq = FUNC_9(VAR_27);

 if (VAR_20->ref_freq == 0) {
  FUNC_25(VAR_19, "missing clocks attribute in FDT\n");
  return (VAR_8);
 }






 VAR_28 = FUNC_5(VAR_27, "pinctrl-0", VAR_26, sizeof(VAR_26));

 if ((VAR_28 / sizeof(VAR_26[0])) != 1 || VAR_26[0] == 0) {
  FUNC_25(VAR_19, "missing pinctrl-0 attribute in FDT\n");
  return (VAR_8);
 }

 VAR_28 = FUNC_6(FUNC_7(VAR_26[0]), "amlogic,function",
     (void **)&VAR_21);

 if (VAR_28 < 0) {
  FUNC_25(VAR_19,
      "missing amlogic,function attribute in FDT\n");
  return (VAR_8);
 }

 if (FUNC_28("sdio-a", VAR_21, VAR_28) == 0)
  VAR_20->port = VAR_2;
 else if (FUNC_28("sdio-b", VAR_21, VAR_28) == 0)
  VAR_20->port = VAR_3;
 else if (FUNC_28("sdio-c", VAR_21, VAR_28) == 0)
  VAR_20->port = VAR_4;
 else {
  FUNC_25(VAR_19, "unknown function attribute %.*s in FDT\n",
      VAR_28, VAR_21);
  FUNC_8(VAR_21);
  return (VAR_8);
 }

 FUNC_8(VAR_21);

 VAR_20->pwr_en.dev = ((void*)0);

 VAR_28 = FUNC_5(VAR_27, "mmc-pwr-en", VAR_26, sizeof(VAR_26));
 if (VAR_28 > 0) {
  if ((VAR_28 / sizeof(VAR_26[0])) == 3) {
   VAR_20->pwr_en.dev = FUNC_4(VAR_26[0]);
   VAR_20->pwr_en.pin = VAR_26[1];
   VAR_20->pwr_en.pol = VAR_26[2];
  }

  if (VAR_20->pwr_en.dev == ((void*)0)) {
   FUNC_25(VAR_19,
       "unable to process mmc-pwr-en attribute in FDT\n");
   return (VAR_8);
  }


  if (FUNC_12(VAR_20) != 0 ||
      FUNC_3(VAR_20->pwr_en.dev, VAR_20->pwr_en.pin,
      VAR_9) != 0) {
   FUNC_25(VAR_19,
       "could not use gpio to control power\n");
   return (VAR_8);
  }
 }

 VAR_28 = FUNC_6(VAR_27, "mmc-voltages",
     (void **)&VAR_22);

 if (VAR_28 < 0) {
  FUNC_25(VAR_19, "missing mmc-voltages attribute in FDT\n");
  return (VAR_8);
 }

 VAR_20->voltages[0] = 0;
 VAR_20->voltages[1] = 0;

 VAR_23 = VAR_22;
 VAR_25 = 0;

 while (VAR_28 && VAR_25 < 2) {
  if (FUNC_28("1.8", VAR_23, VAR_28) == 0)
   VAR_20->voltages[VAR_25] = VAR_16;
  else if (FUNC_28("3.3", VAR_23, VAR_28) == 0)
   VAR_20->voltages[VAR_25] = VAR_14 |
       VAR_15;
  else {
   FUNC_25(VAR_19,
       "unknown voltage attribute %.*s in FDT\n",
       VAR_28, VAR_23);
   FUNC_8(VAR_22);
   return (VAR_8);
  }

  VAR_25++;


  while (*VAR_23 && VAR_28) {
   VAR_23++;
   VAR_28--;
  }
  if (VAR_28) {
   VAR_23++;
   VAR_28--;
  }
 }

 FUNC_8(VAR_22);

 VAR_20->vselect.dev = ((void*)0);

 VAR_28 = FUNC_5(VAR_27, "mmc-vselect", VAR_26, sizeof(VAR_26));
 if (VAR_28 > 0) {
  if ((VAR_28 / sizeof(VAR_26[0])) == 2) {
   VAR_20->vselect.dev = FUNC_4(VAR_26[0]);
   VAR_20->vselect.pin = VAR_26[1];
   VAR_20->vselect.pol = 1;
  }

  if (VAR_20->vselect.dev == ((void*)0)) {
   FUNC_25(VAR_19,
     "unable to process mmc-vselect attribute in FDT\n");
   return (VAR_8);
  }





  if (FUNC_2(VAR_20->vselect.dev, VAR_20->vselect.pin, 0) != 0 ||
      FUNC_3(VAR_20->vselect.dev, VAR_20->vselect.pin,
      VAR_9) != 0) {
   FUNC_25(VAR_19,
       "could not use gpio to set voltage\n");
   return (VAR_8);
  }
 }

 if (VAR_25 == 0) {
  FUNC_25(VAR_19, "no voltages in FDT\n");
  return (VAR_8);
 } else if (VAR_25 == 1 && VAR_20->vselect.dev != ((void*)0)) {
  FUNC_25(VAR_19, "only one voltage in FDT\n");
  return (VAR_8);
 } else if (VAR_25 == 2 && VAR_20->vselect.dev == ((void*)0)) {
  FUNC_25(VAR_19, "too many voltages in FDT\n");
  return (VAR_8);
 }

 if (FUNC_13(VAR_19, VAR_18, VAR_20->res)) {
  FUNC_25(VAR_19, "could not allocate resources for device\n");
  return (VAR_8);
 }

 FUNC_1(VAR_20);

 VAR_24 = FUNC_14(FUNC_18(VAR_19), VAR_0, 0,
     VAR_6, VAR_5, ((void*)0), ((void*)0),
     VAR_1, 1, VAR_1, 0, ((void*)0), ((void*)0), &VAR_20->dmatag);
 if (VAR_24)
  goto fail;

 VAR_24 = FUNC_16(VAR_20->dmatag, 0, &VAR_20->dmamap);

 if (VAR_24)
  goto fail;

 VAR_24 = FUNC_20(VAR_19, VAR_20->res[1], VAR_11 | VAR_10,
     ((void*)0), VAR_17, VAR_20, &VAR_20->ih_cookie);
 if (VAR_24) {
  FUNC_25(VAR_19, "could not setup interrupt handler\n");
  goto fail;
 }

 FUNC_22(&VAR_20->ch, &VAR_20->mtx, VAR_7);

 VAR_20->host.f_min = FUNC_11(VAR_20, FUNC_10(VAR_20, 200000));
 VAR_20->host.f_max = FUNC_11(VAR_20, FUNC_10(VAR_20, 50000000));
 VAR_20->host.host_ocr = VAR_20->voltages[0] | VAR_20->voltages[1];
 VAR_20->host.caps = VAR_12 | VAR_13;

 VAR_29 = FUNC_23(VAR_19, "mmc", -1);

 if (!VAR_29) {
  FUNC_25(VAR_19, "could not add mmc\n");
  VAR_24 = VAR_8;
  goto fail;
 }

 VAR_24 = FUNC_26(VAR_29);

 if (VAR_24) {
  FUNC_25(VAR_19, "could not attach mmc\n");
  goto fail;
 }

 return (0);

fail:
 if (VAR_20->ih_cookie)
  FUNC_21(VAR_19, VAR_20->res[1], VAR_20->ih_cookie);

 if (VAR_20->dmamap)
  FUNC_17(VAR_20->dmatag, VAR_20->dmamap);

 if (VAR_20->dmatag)
  FUNC_15(VAR_20->dmatag);

 FUNC_0(VAR_20);

 FUNC_12(VAR_20);

 FUNC_19(VAR_19, VAR_18, VAR_20->res);

 return (VAR_24);
}
