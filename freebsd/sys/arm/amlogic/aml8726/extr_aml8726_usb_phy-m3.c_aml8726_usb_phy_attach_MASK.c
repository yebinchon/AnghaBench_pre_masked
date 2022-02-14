
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct aml8726_usb_phy_softc {int npwr_en; int res; struct aml8726_usb_phy_gpio* pwr_en; int dev; } ;
struct aml8726_usb_phy_gpio {void* pol; void* pin; int * dev; } ;
typedef scalar_t__ ssize_t ;
typedef int phandle_t ;
typedef void* pcell_t ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct aml8726_usb_phy_softc*,int ) ;
 int FUNC_1 (struct aml8726_usb_phy_softc*,int ) ;
 int FUNC_2 (struct aml8726_usb_phy_softc*,int ,int) ;
 int FUNC_3 (int) ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_4 (int *,void*,int ) ;
 scalar_t__ FUNC_5 (int *,void*,int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int * FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (int ,char*,int,void**) ;
 int FUNC_8 (void**) ;
 int FUNC_9 (void*) ;
 int FUNC_10 (void*) ;
 scalar_t__ FUNC_11 (char*,int*) ;
 int VAR_24 ;
 scalar_t__ FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 struct aml8726_usb_phy_softc* FUNC_14 (int ) ;
 int FUNC_15 (int ,char*) ;
 int FUNC_16 (struct aml8726_usb_phy_gpio*,int ) ;
 scalar_t__ FUNC_17 (int,int ,int ) ;
 int FUNC_18 (int ) ;

__attribute__((used)) static int
FUNC_19(device_t VAR_25)
{
 struct aml8726_usb_phy_softc *VAR_26 = FUNC_14(VAR_25);
 int VAR_27;
 int VAR_28;
 pcell_t *VAR_29;
 phandle_t VAR_30;
 ssize_t VAR_31;
 uint32_t VAR_32;
 uint32_t VAR_33;
 uint32_t VAR_34;
 uint32_t VAR_35;
 uint32_t VAR_36;

 VAR_26->dev = VAR_25;

 if (FUNC_11("/soc/usb@c9040000", &VAR_34) != 0) {
  FUNC_15(VAR_25, "missing usb@c9040000 node in FDT\n");
  return (VAR_20);
 }

 if (FUNC_11("/soc/usb@c90c0000", &VAR_35) != 0) {
  FUNC_15(VAR_25, "missing usb@c90c0000 node in FDT\n");
  return (VAR_20);
 }

 if (FUNC_12(VAR_25, VAR_24, VAR_26->res)) {
  FUNC_15(VAR_25, "can not allocate resources for device\n");
  return (VAR_20);
 }

 VAR_30 = FUNC_18(VAR_25);

 VAR_27 = 0;

 VAR_31 = FUNC_7(VAR_30, "usb-pwr-en",
     3 * sizeof(pcell_t), (void **)&VAR_29);
 VAR_28 = (VAR_31 > 0) ? VAR_31 : 0;

 VAR_26->npwr_en = 0;
 VAR_26->pwr_en = (struct aml8726_usb_phy_gpio *)
     FUNC_17(VAR_28 * sizeof (*VAR_26->pwr_en), VAR_22, VAR_23);

 for (VAR_33 = 0; VAR_33 < VAR_28; VAR_33++) {
  VAR_26->pwr_en[VAR_33].dev = FUNC_6(VAR_29[VAR_33 * 3]);
  VAR_26->pwr_en[VAR_33].pin = VAR_29[VAR_33 * 3 + 1];
  VAR_26->pwr_en[VAR_33].pol = VAR_29[VAR_33 * 3 + 2];

  if (VAR_26->pwr_en[VAR_33].dev == ((void*)0)) {
   VAR_27 = 1;
   break;
  }
 }

 FUNC_8(VAR_29);

 if (VAR_27) {
  FUNC_15(VAR_25, "unable to parse gpio\n");
  goto fail;
 }


 for (VAR_33 = 0; VAR_33 < VAR_28; VAR_33++) {
  if (FUNC_4(VAR_26->pwr_en[VAR_33].dev, VAR_26->pwr_en[VAR_33].pin,
      FUNC_10(VAR_26->pwr_en[VAR_33].pol)) != 0 ||
      FUNC_5(VAR_26->pwr_en[VAR_33].dev, VAR_26->pwr_en[VAR_33].pin,
      VAR_21) != 0) {
   FUNC_15(VAR_25,
       "could not use gpio to control power\n");
   goto fail;
  }

  VAR_26->npwr_en++;
 }





 VAR_32 = 2;

 VAR_36 = FUNC_1(VAR_26, VAR_14);

 VAR_36 &= ~(VAR_9 | VAR_12);

 VAR_36 &= ~(VAR_3 | VAR_7);
 VAR_36 &= ~(VAR_1 | VAR_5);
 VAR_36 &= ~(VAR_0 | VAR_4);
 VAR_36 &= ~(VAR_2 | VAR_6);

 VAR_36 |= VAR_13;
 VAR_36 |= ((VAR_32 - 1) << VAR_10) &
     VAR_9;
 VAR_36 |= VAR_11;

 FUNC_2(VAR_26, VAR_14, VAR_36);
 FUNC_0(VAR_26, VAR_14);





 VAR_36 |= (VAR_3 | VAR_7);

 FUNC_2(VAR_26, VAR_14, VAR_36);
 FUNC_0(VAR_26, VAR_14);

 FUNC_3(200);

 VAR_36 &= ~(VAR_3 | VAR_7);

 FUNC_2(VAR_26, VAR_14, VAR_36);
 FUNC_0(VAR_26, VAR_14);

 FUNC_3(200);

 VAR_36 |= (VAR_1 | VAR_5);

 FUNC_2(VAR_26, VAR_14, VAR_36);
 FUNC_0(VAR_26, VAR_14);

 FUNC_3(200);

 VAR_36 &= ~(VAR_1 | VAR_5);

 FUNC_2(VAR_26, VAR_14, VAR_36);
 FUNC_0(VAR_26, VAR_14);

 FUNC_3(200);

 VAR_36 |= (VAR_0 | VAR_4);

 FUNC_2(VAR_26, VAR_14, VAR_36);
 FUNC_0(VAR_26, VAR_14);

 FUNC_3(200);

 VAR_36 &= ~(VAR_0 | VAR_4);

 FUNC_2(VAR_26, VAR_14, VAR_36);
 FUNC_0(VAR_26, VAR_14);

 FUNC_3(200);

 VAR_36 |= (VAR_2 | VAR_6);

 FUNC_2(VAR_26, VAR_14, VAR_36);
 FUNC_0(VAR_26, VAR_14);

 FUNC_3(200);





 VAR_36 &= ~(VAR_2 | VAR_6);

 FUNC_2(VAR_26, VAR_14, VAR_36);

 FUNC_0(VAR_26, VAR_14);

 FUNC_3(200);




 VAR_36 = FUNC_1(VAR_26, VAR_14);
 if ((VAR_36 & VAR_8) !=
     VAR_8)
  FUNC_15(VAR_25, "PHY Clock not detected\n");





 VAR_36 = FUNC_1(VAR_26, VAR_15);

 VAR_36 &= ~(VAR_18 |
     VAR_17 |
     VAR_19);
 VAR_36 |= VAR_34;

 FUNC_2(VAR_26, VAR_15, VAR_36);

 VAR_36 = FUNC_1(VAR_26, VAR_16);

 VAR_36 &= ~(VAR_18 |
     VAR_17 |
     VAR_19);
 VAR_36 |= VAR_35;

 FUNC_2(VAR_26, VAR_16, VAR_36);

 FUNC_0(VAR_26, VAR_16);

 return (0);

fail:

 VAR_33 = VAR_26->npwr_en;
 while (VAR_33-- != 0) {
  FUNC_4(VAR_26->pwr_en[VAR_33].dev, VAR_26->pwr_en[VAR_33].pin,
      FUNC_9(VAR_26->pwr_en[VAR_33].pol));
 }

 FUNC_16 (VAR_26->pwr_en, VAR_22);
 VAR_26->pwr_en = ((void*)0);

 FUNC_13(VAR_25, VAR_24, VAR_26->res);

 return (VAR_20);
}
