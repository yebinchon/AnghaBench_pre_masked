
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int bus_mtx; int * methods; int usbrev; } ;
struct dwc_otg_softc {int sc_mode; int sc_phy_type; int sc_phy_bits; int sc_fifo_size; scalar_t__ sc_dev_ep_max; scalar_t__ sc_host_ch_max; scalar_t__ sc_dev_in_ep_max; int sc_irq_mask; TYPE_1__ sc_bus; int sc_timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__) ;
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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int,char*,int) ;


 int VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int VAR_30 ;




 int FUNC_4 (struct dwc_otg_softc*,int ) ;
 int FUNC_5 (struct dwc_otg_softc*,int ,int) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_10 (int) ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int VAR_46 ;
 int VAR_47 ;
 int FUNC_13 (struct dwc_otg_softc*) ;
 int FUNC_14 (struct dwc_otg_softc*) ;
 int FUNC_15 (TYPE_1__*) ;
 scalar_t__ FUNC_16 (struct dwc_otg_softc*,int) ;
 int VAR_48 ;
 int FUNC_17 (struct dwc_otg_softc*,int) ;
 int VAR_49 ;
 int FUNC_18 (int *,int *,int ) ;
 int FUNC_19 (int *,int) ;

int
FUNC_20(struct dwc_otg_softc *VAR_50)
{
 uint32_t VAR_51;

 FUNC_2("start\n");


 VAR_50->sc_bus.usbrev = VAR_46;
 VAR_50->sc_bus.methods = &VAR_47;

 FUNC_18(&VAR_50->sc_timer,
     &VAR_50->sc_bus.bus_mtx, 0);

 FUNC_11(&VAR_50->sc_bus);


 FUNC_14(VAR_50);

 VAR_51 = FUNC_4(VAR_50, VAR_23);
 FUNC_2("Version = 0x%08x\n", VAR_51);


 FUNC_5(VAR_50, VAR_5,
     VAR_2);


 FUNC_19(&VAR_50->sc_bus.bus_mtx, VAR_49 / 32);

 FUNC_5(VAR_50, VAR_22,
     VAR_37);


 FUNC_19(&VAR_50->sc_bus.bus_mtx, VAR_49 / 128);

 switch (VAR_50->sc_mode) {
 case 133:
  VAR_51 = VAR_38;
  break;
 case 132:
  VAR_51 = VAR_39;
  break;
 default:
  VAR_51 = 0;
  break;
 }

 if (VAR_50->sc_phy_type == 0)
  VAR_50->sc_phy_type = VAR_48 + 1;
 if (VAR_50->sc_phy_bits == 0)
  VAR_50->sc_phy_bits = 16;


 switch (VAR_50->sc_phy_type) {
 case 131:
  FUNC_5(VAR_50, VAR_24,
      VAR_40 |
      FUNC_10(5) | VAR_51);
  FUNC_5(VAR_50, VAR_21,
      0x000000EC);

  VAR_51 = FUNC_4(VAR_50, VAR_20);
  FUNC_5(VAR_50, VAR_20,
      VAR_51 & ~VAR_34);
  FUNC_5(VAR_50, VAR_20,
      VAR_51 | VAR_34);
  break;
 case 129:
  FUNC_5(VAR_50, VAR_24,
      VAR_42 |
      FUNC_10(5) | VAR_51);
  FUNC_5(VAR_50, VAR_21, 0);

  VAR_51 = FUNC_4(VAR_50, VAR_20);
  FUNC_5(VAR_50, VAR_20,
      VAR_51 & ~VAR_34);
  break;
 case 128:
  FUNC_5(VAR_50, VAR_24,
      (VAR_50->sc_phy_bits == 16 ? VAR_40 : 0) |
      FUNC_10(5) | VAR_51);
  FUNC_5(VAR_50, VAR_21, 0);

  VAR_51 = FUNC_4(VAR_50, VAR_20);
  FUNC_5(VAR_50, VAR_20,
      VAR_51 & ~VAR_34);
  break;
 case 130:
  FUNC_5(VAR_50, VAR_24,
      VAR_41 |
      FUNC_10(5) | VAR_51);
  FUNC_5(VAR_50, VAR_21, 0);

  VAR_51 = FUNC_4(VAR_50, VAR_20);
  FUNC_5(VAR_50, VAR_20,
      VAR_51 & ~VAR_34);

  VAR_51 = FUNC_4(VAR_50, VAR_10);
  VAR_51 &= ~(VAR_12 | VAR_11);
  VAR_51 |= (VAR_14 | VAR_15 |
      VAR_13);
  FUNC_5(VAR_50, VAR_10, VAR_51);
  break;
 default:
  break;
 }


 FUNC_5(VAR_50, VAR_5,
     VAR_1 |
     VAR_0);


 FUNC_5(VAR_50, VAR_26, 0xFFFFFFFF);


 FUNC_19(&VAR_50->sc_bus.bus_mtx, VAR_49 / 100);


 FUNC_5(VAR_50, VAR_26, 0);


 FUNC_19(&VAR_50->sc_bus.bus_mtx, VAR_49 / 100);

 VAR_51 = FUNC_4(VAR_50, VAR_17);

 VAR_50->sc_fifo_size = 4 * FUNC_8(VAR_51);

 VAR_51 = FUNC_4(VAR_50, VAR_16);

 VAR_50->sc_dev_ep_max = FUNC_6(VAR_51);

 if (VAR_50->sc_dev_ep_max > VAR_29)
  VAR_50->sc_dev_ep_max = VAR_29;

 VAR_50->sc_host_ch_max = FUNC_7(VAR_51);

 if (VAR_50->sc_host_ch_max > VAR_28)
  VAR_50->sc_host_ch_max = VAR_28;

 VAR_51 = FUNC_4(VAR_50, VAR_18);

 VAR_50->sc_dev_in_ep_max = FUNC_9(VAR_51);

 FUNC_2("Total FIFO size = %d bytes, Device EPs = %d/%d Host CHs = %d\n",
     VAR_50->sc_fifo_size, VAR_50->sc_dev_ep_max, VAR_50->sc_dev_in_ep_max,
     VAR_50->sc_host_ch_max);


 if (FUNC_16(VAR_50, VAR_50->sc_mode)) {
  FUNC_12(&VAR_50->sc_bus);
  return (VAR_31);
 }


 VAR_50->sc_irq_mask |= VAR_30;
 FUNC_5(VAR_50, VAR_19, VAR_50->sc_irq_mask);

 if (VAR_50->sc_mode == VAR_27 || VAR_50->sc_mode == 133) {


  VAR_51 = FUNC_4(VAR_50, VAR_16);
  if (VAR_51 & VAR_33) {
   uint8_t VAR_52;

   FUNC_2("Disable Multi Process Interrupts\n");

   for (VAR_52 = 0; VAR_52 != VAR_50->sc_dev_in_ep_max; VAR_52++) {
    FUNC_5(VAR_50, FUNC_0(VAR_52), 0);
    FUNC_5(VAR_50, FUNC_1(VAR_52), 0);
   }
   FUNC_5(VAR_50, VAR_6, 0);
  }
  FUNC_5(VAR_50, VAR_7,
      VAR_3);
  FUNC_5(VAR_50, VAR_8, 0);
  FUNC_5(VAR_50, VAR_4, 0xFFFF);
 }

 if (VAR_50->sc_mode == VAR_27 || VAR_50->sc_mode == 132) {

  VAR_51 = FUNC_4(VAR_50, VAR_25);
  VAR_51 &= ~(VAR_45 | VAR_43);
  VAR_51 |= (1 << VAR_44);
  FUNC_5(VAR_50, VAR_25, VAR_51);
 }


 FUNC_5(VAR_50, VAR_9,
     VAR_32);


 FUNC_13(VAR_50);



 VAR_51 = FUNC_4(VAR_50, VAR_21);

 FUNC_3(5, "GOTCTL=0x%08x\n", VAR_51);

 FUNC_17(VAR_50,
     (VAR_51 & (VAR_35 | VAR_36)) ? 1 : 0);

 FUNC_12(&VAR_50->sc_bus);



 FUNC_15(&VAR_50->sc_bus);

 return (0);
}
