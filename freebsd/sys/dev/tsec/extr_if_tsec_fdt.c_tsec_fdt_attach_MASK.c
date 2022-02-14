
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bst; int bsh; } ;
struct tsec_softc {int transmit_lock; int receive_lock; int * sc_rres; scalar_t__ sc_rrid; int sc_transmit_irid; int sc_transmit_ihand; int sc_transmit_ires; int sc_receive_irid; int sc_receive_ihand; int sc_receive_ires; int sc_error_irid; int sc_error_ihand; int sc_error_ires; TYPE_1__ sc_bas; int ic_lock; int tsec_callout; int phy_regoff; int phyaddr; int phy_bsh; int phy_bst; int node; int dev; } ;
struct resource_list {int dummy; } ;
typedef int phy ;
typedef int phandle_t ;
typedef int device_t ;


 struct resource_list* FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int ,char*,int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_6 (int ,int ,scalar_t__*,int ) ;
 int FUNC_7 (int ,int ,scalar_t__,int *) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 struct tsec_softc* FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;
 scalar_t__ FUNC_13 (int ,int*,int*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,char*,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int ,struct resource_list*,int *) ;
 scalar_t__ FUNC_18 (int ,char*) ;
 scalar_t__ FUNC_19 (int ,char*) ;
 int FUNC_20 (int ,int ,int,int,struct resource_list*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (struct tsec_softc*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_24 (struct tsec_softc*,int ,int ,int ,char*) ;
 int FUNC_25 (struct tsec_softc*,int *,int *,int *,int ,char*) ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_26(device_t VAR_11)
{
 struct tsec_softc *VAR_12;
 struct resource_list *VAR_13;
 phandle_t VAR_14, VAR_15, VAR_16;
 int VAR_17, VAR_18;
 int VAR_19 = 0;

 VAR_12 = FUNC_11(VAR_11);
 VAR_12->dev = VAR_11;
 VAR_12->node = FUNC_16(VAR_11);

 if (FUNC_13(VAR_12->node, &VAR_17, &VAR_18) != 0) {
  VAR_17 = 1;
  VAR_18 = 1;
 }
 if (FUNC_18(VAR_11, "fsl,etsec2")) {
  VAR_13 = FUNC_0(FUNC_10(VAR_11), VAR_11);





  VAR_14 = FUNC_1(VAR_12->node);
  FUNC_20(VAR_11, VAR_14, VAR_17, VAR_18, VAR_13);
  FUNC_17(VAR_11, VAR_14, VAR_13, ((void*)0));
 }


 if (FUNC_3(VAR_12->node, "phy-handle", &VAR_16, sizeof(VAR_16)) <= 0) {
  FUNC_12(VAR_11, "PHY not found in device tree");
  return (VAR_0);
 }

 VAR_16 = FUNC_4(VAR_16);
 VAR_15 = FUNC_5(VAR_16);
 FUNC_2(VAR_15, 0, &VAR_12->phy_bst, &VAR_12->phy_bsh, ((void*)0));
 FUNC_3(VAR_16, "reg", &VAR_12->phyaddr, sizeof(VAR_12->phyaddr));





 if (FUNC_19(VAR_15, "fsl,etsec2-mdio"))
  VAR_12->phy_regoff = VAR_4;


 FUNC_8(&VAR_12->tsec_callout, 1);


 FUNC_15(&VAR_12->transmit_lock, FUNC_9(VAR_11), "TSEC TX lock",
     VAR_1);
 FUNC_15(&VAR_12->receive_lock, FUNC_9(VAR_11), "TSEC RX lock",
     VAR_1);
 FUNC_15(&VAR_12->ic_lock, FUNC_9(VAR_11), "TSEC IC lock",
     VAR_1);


 VAR_12->sc_rrid = 0;
 VAR_12->sc_rres = FUNC_6(VAR_11, VAR_3, &VAR_12->sc_rrid,
     VAR_2);
 if (VAR_12->sc_rres == ((void*)0)) {
  FUNC_12(VAR_11, "could not allocate IO memory range!\n");
  goto fail1;
 }
 VAR_12->sc_bas.bsh = FUNC_21(VAR_12->sc_rres);
 VAR_12->sc_bas.bst = FUNC_22(VAR_12->sc_rres);


 if (FUNC_23(VAR_12) != 0) {
  FUNC_12(VAR_11, "could not be configured\n");
  goto fail2;
 }


 VAR_12->sc_transmit_irid = VAR_7;
 VAR_19 = FUNC_25(VAR_12, &VAR_12->sc_transmit_ires,
     &VAR_12->sc_transmit_ihand, &VAR_12->sc_transmit_irid,
     VAR_10, "TX");
 if (VAR_19)
  goto fail2;

 VAR_12->sc_receive_irid = VAR_6;
 VAR_19 = FUNC_25(VAR_12, &VAR_12->sc_receive_ires,
     &VAR_12->sc_receive_ihand, &VAR_12->sc_receive_irid,
     VAR_9, "RX");
 if (VAR_19)
  goto fail3;

 VAR_12->sc_error_irid = VAR_5;
 VAR_19 = FUNC_25(VAR_12, &VAR_12->sc_error_ires,
     &VAR_12->sc_error_ihand, &VAR_12->sc_error_irid,
     VAR_8, "ERR");
 if (VAR_19)
  goto fail4;

 return (0);

fail4:
 FUNC_24(VAR_12, VAR_12->sc_receive_ires, VAR_12->sc_receive_ihand,
     VAR_12->sc_receive_irid, "RX");
fail3:
 FUNC_24(VAR_12, VAR_12->sc_transmit_ires, VAR_12->sc_transmit_ihand,
     VAR_12->sc_transmit_irid, "TX");
fail2:
 FUNC_7(VAR_11, VAR_3, VAR_12->sc_rrid, VAR_12->sc_rres);
fail1:
 FUNC_14(&VAR_12->receive_lock);
 FUNC_14(&VAR_12->transmit_lock);
 return (VAR_0);
}
