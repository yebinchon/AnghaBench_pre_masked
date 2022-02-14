
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {char pin; char pol; int * dev; } ;
struct aml8726_usb_phy_softc {int npwr_en; int res; struct aml8726_usb_phy_gpio* pwr_en; TYPE_1__ hub_rst; scalar_t__ force_aca; int dev; } ;
struct aml8726_usb_phy_gpio {char pin; char pol; int * dev; } ;
typedef int ssize_t ;
typedef int phandle_t ;
typedef char pcell_t ;
typedef int device_t ;




 int VAR_0 ;
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
 int FUNC_0 (struct aml8726_usb_phy_softc*,int ) ;
 int FUNC_1 (struct aml8726_usb_phy_softc*,int ) ;
 int FUNC_2 (struct aml8726_usb_phy_softc*,int ,int) ;
 int FUNC_3 (int) ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_4 (int *,char,int ) ;
 scalar_t__ FUNC_5 (int *,char,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 void* FUNC_6 (char) ;
 int FUNC_7 (int ,char*,int,void**) ;
 int FUNC_8 (int ,char*,void**) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char) ;
 int FUNC_11 (char) ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__ FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 struct aml8726_usb_phy_softc* FUNC_14 (int ) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (struct aml8726_usb_phy_gpio*,int ) ;
 scalar_t__ FUNC_17 (int,int ,int ) ;
 int FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_20(device_t VAR_24)
{
 struct aml8726_usb_phy_softc *VAR_25 = FUNC_14(VAR_24);
 char *VAR_26;
 int VAR_27;
 int VAR_28;
 pcell_t *VAR_29;
 phandle_t VAR_30;
 ssize_t VAR_31;
 uint32_t VAR_32;
 uint32_t VAR_33;
 uint32_t VAR_34;

 VAR_25->dev = VAR_24;

 if (FUNC_12(VAR_24, VAR_23, VAR_25->res)) {
  FUNC_15(VAR_24, "can not allocate resources for device\n");
  return (VAR_16);
 }

 VAR_30 = FUNC_18(VAR_24);

 VAR_31 = FUNC_8(VAR_30, "force-aca",
     (void **)&VAR_26);

 VAR_25->force_aca = VAR_17;

 if (VAR_31 > 0) {
  if (FUNC_19(VAR_26, "true", VAR_31) == 0)
   VAR_25->force_aca = VAR_21;
 }

 FUNC_9(VAR_26);

 VAR_27 = 0;

 VAR_31 = FUNC_7(VAR_30, "usb-pwr-en",
     3 * sizeof(pcell_t), (void **)&VAR_29);
 VAR_28 = (VAR_31 > 0) ? VAR_31 : 0;

 VAR_25->npwr_en = 0;
 VAR_25->pwr_en = (struct aml8726_usb_phy_gpio *)
     FUNC_17(VAR_28 * sizeof (*VAR_25->pwr_en), VAR_19, VAR_20);

 for (VAR_33 = 0; VAR_33 < VAR_28; VAR_33++) {
  VAR_25->pwr_en[VAR_33].dev = FUNC_6(VAR_29[VAR_33 * 3]);
  VAR_25->pwr_en[VAR_33].pin = VAR_29[VAR_33 * 3 + 1];
  VAR_25->pwr_en[VAR_33].pol = VAR_29[VAR_33 * 3 + 2];

  if (VAR_25->pwr_en[VAR_33].dev == ((void*)0)) {
   VAR_27 = 1;
   break;
  }
 }

 FUNC_9(VAR_29);

 VAR_31 = FUNC_7(VAR_30, "usb-hub-rst",
     3 * sizeof(pcell_t), (void **)&VAR_29);
 if (VAR_31 > 0) {
  VAR_25->hub_rst.dev = FUNC_6(VAR_29[0]);
  VAR_25->hub_rst.pin = VAR_29[1];
  VAR_25->hub_rst.pol = VAR_29[2];

  if (VAR_31 > 1 || VAR_25->hub_rst.dev == ((void*)0))
   VAR_27 = 1;
 }

 FUNC_9(VAR_29);

 if (VAR_27) {
  FUNC_15(VAR_24, "unable to parse gpio\n");
  goto fail;
 }


 for (VAR_33 = 0; VAR_33 < VAR_28; VAR_33++) {
  if (FUNC_4(VAR_25->pwr_en[VAR_33].dev, VAR_25->pwr_en[VAR_33].pin,
      FUNC_11(VAR_25->pwr_en[VAR_33].pol)) != 0 ||
      FUNC_5(VAR_25->pwr_en[VAR_33].dev, VAR_25->pwr_en[VAR_33].pin,
      VAR_18) != 0) {
   FUNC_15(VAR_24,
       "could not use gpio to control power\n");
   goto fail;
  }

  VAR_25->npwr_en++;
 }





 VAR_34 = FUNC_1(VAR_25, VAR_9);

 VAR_34 &= ~(VAR_6 |
     VAR_3 |
     VAR_7 |
     VAR_5);

 switch (VAR_22) {
 case 129:
 case 128:
  VAR_34 |= VAR_6;
  break;
 default:
  VAR_32 = 2;
  VAR_34 |= VAR_8;
  VAR_34 |= ((VAR_32 - 1) << VAR_4) &
      VAR_3;
  VAR_34 |= VAR_5;
  break;
 }

 FUNC_2(VAR_25, VAR_9, VAR_34);

 FUNC_0(VAR_25, VAR_9);





 VAR_34 = FUNC_1(VAR_25, VAR_15);

 VAR_34 &= ~VAR_13;

 switch (VAR_22) {
 case 129:
 case 128:
  VAR_34 |= VAR_12;
  break;
 default:
  VAR_34 |= VAR_11;
  break;
 }

 VAR_34 |= VAR_14;

 FUNC_2(VAR_25, VAR_15, VAR_34);

 FUNC_0(VAR_25, VAR_15);

 FUNC_3(500);





 VAR_34 &= ~VAR_14;

 FUNC_2(VAR_25, VAR_15, VAR_34);

 FUNC_0(VAR_25, VAR_15);

 FUNC_3(1000);




 VAR_34 = FUNC_1(VAR_25, VAR_15);
 if ((VAR_34 & VAR_10) == 0)
  FUNC_15(VAR_24, "PHY Clock not detected\n");





 if (VAR_25->force_aca) {
  VAR_34 = FUNC_1(VAR_25, VAR_2);

  VAR_34 |= VAR_0;

  FUNC_2(VAR_25, VAR_2, VAR_34);

  FUNC_0(VAR_25, VAR_2);

  FUNC_3(50);

  VAR_34 = FUNC_1(VAR_25, VAR_2);

  if ((VAR_34 & VAR_1) != 0) {
   FUNC_15(VAR_24,
       "force-aca requires newer silicon\n");
   goto fail;
  }
 }




 if (VAR_25->hub_rst.dev != ((void*)0)) {
  VAR_27 = 0;

  if (FUNC_4(VAR_25->hub_rst.dev, VAR_25->hub_rst.pin,
      FUNC_11(VAR_25->hub_rst.pol)) != 0 ||
      FUNC_5(VAR_25->hub_rst.dev, VAR_25->hub_rst.pin,
      VAR_18) != 0)
   VAR_27 = 1;

  FUNC_3(30);

  if (FUNC_4(VAR_25->hub_rst.dev, VAR_25->hub_rst.pin,
      FUNC_10(VAR_25->hub_rst.pol)) != 0)
   VAR_27 = 1;

  FUNC_3(60000);

  if (VAR_27) {
   FUNC_15(VAR_24,
       "could not use gpio to reset hub\n");
   goto fail;
  }
 }

 return (0);

fail:

 VAR_33 = VAR_25->npwr_en;
 while (VAR_33-- != 0) {
  FUNC_4(VAR_25->pwr_en[VAR_33].dev, VAR_25->pwr_en[VAR_33].pin,
      FUNC_10(VAR_25->pwr_en[VAR_33].pol));
 }

 FUNC_16 (VAR_25->pwr_en, VAR_19);
 VAR_25->pwr_en = ((void*)0);

 FUNC_13(VAR_24, VAR_23, VAR_25->res);

 return (VAR_16);
}
