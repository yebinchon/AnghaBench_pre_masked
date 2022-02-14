
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {int f_min; int f_max; int host_ocr; int caps; } ;
struct TYPE_6__ {int * dev; scalar_t__ pol; scalar_t__ pin; } ;
struct TYPE_5__ {int pol; int * dev; scalar_t__ pin; } ;
struct TYPE_8__ {scalar_t__ pin; int * dev; scalar_t__ pol; } ;
struct aml8726_sdxc_softc {int auto_fill_flush; int* voltages; int * res; scalar_t__ dmatag; scalar_t__ dmamap; scalar_t__ ih_cookie; TYPE_3__ host; int mtx; int ch; TYPE_2__ card_rst; TYPE_1__ vselect; TYPE_4__ pwr_en; scalar_t__ ref_freq; int dev; } ;
typedef int ssize_t ;
typedef int prop ;
typedef int phandle_t ;
typedef scalar_t__ pcell_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct aml8726_sdxc_softc*) ;
 int FUNC_1 (struct aml8726_sdxc_softc*) ;
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
 int FUNC_2 (struct aml8726_sdxc_softc*,int ,int) ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_3 (int *,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (int *,scalar_t__,int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ,char*,scalar_t__*,int) ;
 int FUNC_7 (int ,char*,void**) ;
 int FUNC_8 (char*) ;
 int VAR_31 ;
 scalar_t__ FUNC_9 (struct aml8726_sdxc_softc*) ;
 int FUNC_10 (struct aml8726_sdxc_softc*) ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 scalar_t__ FUNC_11 (int ,int ,int *) ;
 int FUNC_12 (int ,int ,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,scalar_t__*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__,int ,scalar_t__*) ;
 int FUNC_15 (scalar_t__,scalar_t__) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int ,int *) ;
 int FUNC_18 (int ,int ,int,int *,int ,struct aml8726_sdxc_softc*,scalar_t__*) ;
 int FUNC_19 (int ,int ,scalar_t__) ;
 int FUNC_20 (int *,int *,int ) ;
 int FUNC_21 (int ,char*,int) ;
 struct aml8726_sdxc_softc* FUNC_22 (int ) ;
 int FUNC_23 (int ,char*,...) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 scalar_t__ FUNC_26 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_27(device_t VAR_35)
{
 struct aml8726_sdxc_softc *VAR_36 = FUNC_22(VAR_35);
 char *VAR_37;
 char *VAR_38;
 int VAR_39;
 int VAR_40;
 pcell_t VAR_41[3];
 phandle_t VAR_42;
 ssize_t VAR_43;
 device_t VAR_44;
 uint32_t VAR_45;
 uint32_t VAR_46;
 uint32_t VAR_47;

 VAR_36->dev = VAR_35;

 VAR_36->auto_fill_flush = 0;

 VAR_47 = VAR_12 |
     (49 << VAR_16) |
     (7 << VAR_15) |
     (15 << VAR_13) |
     (7 << VAR_17);

 VAR_46 = (2 << VAR_11) |
     (5 << VAR_10);

 VAR_45 = (12 << VAR_5);




 switch (VAR_33) {
 case 130:
  switch (VAR_34) {
  case 128:
   VAR_36->auto_fill_flush = 1;
   VAR_46 |= (6 << VAR_9);
   VAR_45 |= (64 << VAR_3) |
       VAR_6;
   break;
  default:
   VAR_46 |= (7 << VAR_9);
   VAR_45 |= (63 << VAR_3) |
       VAR_1 |
       (255 << VAR_4);

   break;
  }
  break;
 case 129:
  VAR_46 |= (7 << VAR_9);
  VAR_45 |= (63 << VAR_3) |
      VAR_1 |
      (255 << VAR_4);
  break;
 default:
  FUNC_23(VAR_35, "unsupported SoC\n");
  return (VAR_21);

 }

 VAR_42 = FUNC_25(VAR_35);

 VAR_43 = FUNC_6(VAR_42, "clock-frequency", VAR_41, sizeof(VAR_41));
 if ((VAR_43 / sizeof(VAR_41[0])) != 1 || VAR_41[0] == 0) {
  FUNC_23(VAR_35,
      "missing clock-frequency attribute in FDT\n");
  return (VAR_21);
 }

 VAR_36->ref_freq = VAR_41[0];

 VAR_36->pwr_en.dev = ((void*)0);

 VAR_43 = FUNC_6(VAR_42, "mmc-pwr-en", VAR_41, sizeof(VAR_41));
 if (VAR_43 > 0) {
  if ((VAR_43 / sizeof(VAR_41[0])) == 3) {
   VAR_36->pwr_en.dev = FUNC_5(VAR_41[0]);
   VAR_36->pwr_en.pin = VAR_41[1];
   VAR_36->pwr_en.pol = VAR_41[2];
  }

  if (VAR_36->pwr_en.dev == ((void*)0)) {
   FUNC_23(VAR_35,
       "unable to process mmc-pwr-en attribute in FDT\n");
   return (VAR_21);
  }


  if (FUNC_9(VAR_36) != 0 ||
      FUNC_4(VAR_36->pwr_en.dev, VAR_36->pwr_en.pin,
      VAR_22) != 0) {
   FUNC_23(VAR_35,
       "could not use gpio to control power\n");
   return (VAR_21);
  }
 }

 VAR_43 = FUNC_7(VAR_42, "mmc-voltages",
     (void **)&VAR_37);

 if (VAR_43 < 0) {
  FUNC_23(VAR_35, "missing mmc-voltages attribute in FDT\n");
  return (VAR_21);
 }

 VAR_36->voltages[0] = 0;
 VAR_36->voltages[1] = 0;

 VAR_38 = VAR_37;
 VAR_40 = 0;

 while (VAR_43 && VAR_40 < 2) {
  if (FUNC_26("1.8", VAR_38, VAR_43) == 0)
   VAR_36->voltages[VAR_40] = VAR_30;
  else if (FUNC_26("3.3", VAR_38, VAR_43) == 0)
   VAR_36->voltages[VAR_40] = VAR_28 |
       VAR_29;
  else {
   FUNC_23(VAR_35,
       "unknown voltage attribute %.*s in FDT\n",
       VAR_43, VAR_38);
   FUNC_8(VAR_37);
   return (VAR_21);
  }

  VAR_40++;


  while (*VAR_38 && VAR_43) {
   VAR_38++;
   VAR_43--;
  }
  if (VAR_43) {
   VAR_38++;
   VAR_43--;
  }
 }

 FUNC_8(VAR_37);

 VAR_36->vselect.dev = ((void*)0);

 VAR_43 = FUNC_6(VAR_42, "mmc-vselect", VAR_41, sizeof(VAR_41));
 if (VAR_43 > 0) {
  if ((VAR_43 / sizeof(VAR_41[0])) == 2) {
   VAR_36->vselect.dev = FUNC_5(VAR_41[0]);
   VAR_36->vselect.pin = VAR_41[1];
   VAR_36->vselect.pol = 1;
  }

  if (VAR_36->vselect.dev == ((void*)0)) {
   FUNC_23(VAR_35,
       "unable to process mmc-vselect attribute in FDT\n");
   return (VAR_21);
  }





  if (FUNC_3(VAR_36->vselect.dev, VAR_36->vselect.pin, 0) != 0 ||
      FUNC_4(VAR_36->vselect.dev, VAR_36->vselect.pin,
      VAR_22) != 0) {
   FUNC_23(VAR_35,
       "could not use gpio to set voltage\n");
   return (VAR_21);
  }
 }

 if (VAR_40 == 0) {
  FUNC_23(VAR_35, "no voltages in FDT\n");
  return (VAR_21);
 } else if (VAR_40 == 1 && VAR_36->vselect.dev != ((void*)0)) {
  FUNC_23(VAR_35, "only one voltage in FDT\n");
  return (VAR_21);
 } else if (VAR_40 == 2 && VAR_36->vselect.dev == ((void*)0)) {
  FUNC_23(VAR_35, "too many voltages in FDT\n");
  return (VAR_21);
 }

 VAR_36->card_rst.dev = ((void*)0);

 VAR_43 = FUNC_6(VAR_42, "mmc-rst", VAR_41, sizeof(VAR_41));
 if (VAR_43 > 0) {
  if ((VAR_43 / sizeof(VAR_41[0])) == 3) {
   VAR_36->card_rst.dev = FUNC_5(VAR_41[0]);
   VAR_36->card_rst.pin = VAR_41[1];
   VAR_36->card_rst.pol = VAR_41[2];
  }

  if (VAR_36->card_rst.dev == ((void*)0)) {
   FUNC_23(VAR_35,
       "unable to process mmc-rst attribute in FDT\n");
   return (VAR_21);
  }
 }

 if (FUNC_11(VAR_35, VAR_32, VAR_36->res)) {
  FUNC_23(VAR_35, "could not allocate resources for device\n");
  return (VAR_21);
 }

 FUNC_1(VAR_36);

 VAR_39 = FUNC_12(FUNC_16(VAR_35), VAR_0, 0,
     VAR_19, VAR_18, ((void*)0), ((void*)0),
     VAR_7, 1, VAR_7, 0, ((void*)0), ((void*)0), &VAR_36->dmatag);
 if (VAR_39)
  goto fail;

 VAR_39 = FUNC_14(VAR_36->dmatag, 0, &VAR_36->dmamap);

 if (VAR_39)
  goto fail;

 VAR_39 = FUNC_18(VAR_35, VAR_36->res[1], VAR_24 | VAR_23,
     ((void*)0), VAR_31, VAR_36, &VAR_36->ih_cookie);
 if (VAR_39) {
  FUNC_23(VAR_35, "could not setup interrupt handler\n");
  goto fail;
 }

 FUNC_20(&VAR_36->ch, &VAR_36->mtx, VAR_20);

 VAR_36->host.f_min = 200000;
 VAR_36->host.f_max = 100000000;
 VAR_36->host.host_ocr = VAR_36->voltages[0] | VAR_36->voltages[1];
 VAR_36->host.caps = VAR_26 | VAR_25 |
     VAR_27;

 FUNC_10(VAR_36);

 FUNC_2(VAR_36, VAR_14, VAR_47);

 FUNC_2(VAR_36, VAR_8, VAR_46);

 FUNC_2(VAR_36, VAR_2, VAR_45);

 VAR_44 = FUNC_21(VAR_35, "mmc", -1);

 if (!VAR_44) {
  FUNC_23(VAR_35, "could not add mmc\n");
  VAR_39 = VAR_21;
  goto fail;
 }

 VAR_39 = FUNC_24(VAR_44);

 if (VAR_39) {
  FUNC_23(VAR_35, "could not attach mmc\n");
  goto fail;
 }

 return (0);

fail:
 if (VAR_36->ih_cookie)
  FUNC_19(VAR_35, VAR_36->res[1], VAR_36->ih_cookie);

 if (VAR_36->dmamap)
  FUNC_15(VAR_36->dmatag, VAR_36->dmamap);

 if (VAR_36->dmatag)
  FUNC_13(VAR_36->dmatag);

 FUNC_0(VAR_36);

 (void)FUNC_9(VAR_36);

 FUNC_17(VAR_35, VAR_32, VAR_36->res);

 return (VAR_39);
}
