
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ifnet {int if_flags; int if_snd; int if_init; int if_ioctl; int if_start; struct dme_softc* if_softc; } ;
struct dme_softc {int dme_bits; int dme_rev; int dme_intrhand; int * dme_irq; int dme_macaddr; int dme_miibus; struct ifnet* dme_ifp; int * dme_res; int dme_handle; int dme_tag; TYPE_1__* gpio_rset; int dme_vcc_regulator; int dme_mtx; int dme_tick_ch; int dme_dev; } ;
typedef int device_t ;
struct TYPE_2__ {int dev; int pin; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
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
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int *,int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_4 (int,char*) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 void* FUNC_5 (int ,int ,int*,int ) ;
 int FUNC_6 (int ,int *,int,int *,int ,struct dme_softc*,int *) ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 struct dme_softc* FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (struct dme_softc*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct dme_softc*) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_16 (struct dme_softc*,int ) ;
 int FUNC_17 (struct dme_softc*) ;
 int VAR_32 ;
 int FUNC_18 (struct ifnet*,int ) ;
 int FUNC_19 (struct ifnet*) ;
 struct ifnet* FUNC_20 (int ) ;
 int FUNC_21 (struct ifnet*,int ,int ) ;
 int FUNC_22 (int ,int *,struct ifnet*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_23 (int *,int ,int ,int ) ;
 int FUNC_24 (int ,char*,TYPE_1__**) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ,int ,char*,int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;

__attribute__((used)) static int
FUNC_29(device_t VAR_33)
{
 struct dme_softc *VAR_34;
 struct ifnet *VAR_35;
 int VAR_36, VAR_37;
 uint32_t VAR_38;

 VAR_34 = FUNC_10(VAR_33);
 VAR_34->dme_dev = VAR_33;

 VAR_36 = 0;

 FUNC_23(&VAR_34->dme_mtx, FUNC_9(VAR_33), VAR_23,
     VAR_22);
 FUNC_7(&VAR_34->dme_tick_ch, &VAR_34->dme_mtx, 0);

 VAR_37 = 0;
 VAR_34->dme_res = FUNC_5(VAR_33, VAR_26, &VAR_37,
     VAR_24);
 if (VAR_34->dme_res == ((void*)0)) {
  FUNC_12(VAR_33, "unable to map memory\n");
  VAR_36 = VAR_11;
  goto fail;
 }

 VAR_37 = 0;
 VAR_34->dme_irq = FUNC_5(VAR_33, VAR_25, &VAR_37,
     VAR_24);
 if (VAR_34->dme_irq == ((void*)0)) {
  FUNC_12(VAR_33, "unable to map memory\n");
  VAR_36 = VAR_11;
  goto fail;
 }



 VAR_36 = FUNC_26(VAR_33, 0, "vcc-supply", &VAR_34->dme_vcc_regulator);
 if (VAR_36 == 0) {
  VAR_36 = FUNC_25(VAR_34->dme_vcc_regulator);
  if (VAR_36 != 0) {
   FUNC_12(VAR_33, "unable to enable power supply\n");
   VAR_36 = VAR_11;
   goto fail;
  }
 }




 FUNC_0(100000);


 VAR_36 = FUNC_24(VAR_33, "reset-gpios", &VAR_34->gpio_rset);
 if (VAR_36 > 1) {
  FUNC_12(VAR_33, "too many reset gpios\n");
  VAR_34->gpio_rset = ((void*)0);
  VAR_36 = VAR_11;
  goto fail;
 }

 if (VAR_34->gpio_rset != ((void*)0)) {
  VAR_36 = FUNC_1(VAR_34->gpio_rset->dev, VAR_34->gpio_rset->pin, 0);
  if (VAR_36 != 0) {
   FUNC_12(VAR_33, "Cannot configure GPIO pin %d on %s\n",
       VAR_34->gpio_rset->pin, FUNC_9(VAR_34->gpio_rset->dev));
   goto fail;
  }

  VAR_36 = FUNC_2(VAR_34->gpio_rset->dev, VAR_34->gpio_rset->pin,
      VAR_12);
  if (VAR_36 != 0) {
   FUNC_12(VAR_33, "Cannot configure GPIO pin %d on %s\n",
       VAR_34->gpio_rset->pin, FUNC_9(VAR_34->gpio_rset->dev));
   goto fail;
  }

  FUNC_0(2000);

  VAR_36 = FUNC_1(VAR_34->gpio_rset->dev, VAR_34->gpio_rset->pin, 1);
  if (VAR_36 != 0) {
   FUNC_12(VAR_33, "Cannot configure GPIO pin %d on %s\n",
       VAR_34->gpio_rset->pin, FUNC_9(VAR_34->gpio_rset->dev));
   goto fail;
  }

  FUNC_0(4000);
 } else
  FUNC_12(VAR_33, "Unable to find reset GPIO\n");

 VAR_34->dme_tag = FUNC_28(VAR_34->dme_res);
 VAR_34->dme_handle = FUNC_27(VAR_34->dme_res);


 FUNC_17(VAR_34);


 switch((FUNC_16(VAR_34, VAR_5) >> 6) & 0x03) {
 case 0:

  VAR_34->dme_bits = 16;
  break;
 case 1:

  VAR_34->dme_bits = 32;
  break;
 case 2:

  VAR_34->dme_bits = 8;
  break;
 default:

  FUNC_12(VAR_33, "Unable to determine device mode\n");
  VAR_36 = VAR_11;
  goto fail;
 }

 FUNC_0(100000);


 VAR_38 = FUNC_16(VAR_34, VAR_8) << 8;
 VAR_38 |= FUNC_16(VAR_34, VAR_9);
 FUNC_12(VAR_33, "Vendor ID: 0x%04x\n", VAR_38);


 VAR_38 = FUNC_16(VAR_34, VAR_6) << 8;
 VAR_38 |= FUNC_16(VAR_34, VAR_7);
 FUNC_12(VAR_33, "Product ID: 0x%04x\n", VAR_38);


 VAR_38 = FUNC_16(VAR_34, VAR_1);
 FUNC_12(VAR_33, "Revision: 0x%04x\n", VAR_38);
 if (VAR_38 != VAR_3 && VAR_38 != VAR_4)
  VAR_38 = VAR_2;
 VAR_34->dme_rev = VAR_38;

 FUNC_12(VAR_33, "using %d-bit IO mode\n", VAR_34->dme_bits);
 FUNC_4(VAR_34->dme_bits == 8, ("wrong io mode"));


 FUNC_15(VAR_34);


 FUNC_13(VAR_34);

 VAR_35 = VAR_34->dme_ifp = FUNC_20(VAR_17);
 if (VAR_35 == ((void*)0)) {
  FUNC_12(VAR_33, "unable to allocate ifp\n");
  VAR_36 = VAR_10;
  goto fail;
 }
 VAR_35->if_softc = VAR_34;


 VAR_36 = FUNC_22(VAR_33, &VAR_34->dme_miibus, VAR_35, VAR_28,
     VAR_27, VAR_0, VAR_21, VAR_20, 0);

 if (VAR_36 != 0) {
  FUNC_12(VAR_33, "PHY probe failed\n");
  goto fail;
 }

 FUNC_21(VAR_35, FUNC_8(VAR_33), FUNC_11(VAR_33));
 VAR_35->if_flags = VAR_13 | VAR_15 | VAR_14;
 VAR_35->if_start = VAR_32;
 VAR_35->if_ioctl = VAR_31;
 VAR_35->if_init = VAR_29;
 FUNC_3(&VAR_35->if_snd, VAR_16);

 FUNC_18(VAR_35, VAR_34->dme_macaddr);

 VAR_36 = FUNC_6(VAR_33, VAR_34->dme_irq, VAR_19 | VAR_18,
     ((void*)0), VAR_30, VAR_34, &VAR_34->dme_intrhand);
 if (VAR_36) {
  FUNC_12(VAR_33, "couldn't set up irq\n");
  FUNC_19(VAR_35);
  goto fail;
 }

fail:
 if (VAR_36 != 0)
  FUNC_14(VAR_33);
 return (VAR_36);
}
