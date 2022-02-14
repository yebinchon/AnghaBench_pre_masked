
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ifnet {int if_flags; int if_transmit; int if_ioctl; struct gx_softc* if_softc; int if_init; int if_mtu; } ;
struct gx_softc {int sc_flags; int sc_mtx; int sc_ifmedia; struct ifnet* sc_ifp; int * sc_intr; int sc_intr_cookie; int sc_dev; int sc_port; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,uintptr_t) ;
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
 int * FUNC_1 (int ,int ,int*,scalar_t__,scalar_t__,int,int ) ;
 int FUNC_2 (int ,int *,int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int *) ;
 int FUNC_5 (int ,int *,int ,int *,int ,struct gx_softc*,int *) ;
 int FUNC_6 (int ) ;
 struct gx_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (struct ifnet*,int *) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 struct ifnet* FUNC_11 (int ) ;
 int FUNC_12 (struct ifnet*,int ,int ) ;
 int FUNC_13 (int *,int,int ,int *) ;
 int FUNC_14 (int *,int ,int ,int ) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,char*,int *,int ) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_22)
{
 struct ifnet *VAR_23;
 struct gx_softc *VAR_24;
 uint8_t VAR_25[6];
 int VAR_26;
 int VAR_27;

 VAR_24 = FUNC_7(VAR_22);
 VAR_24->sc_dev = VAR_22;
 VAR_24->sc_port = FUNC_8(VAR_22);


 FUNC_0(VAR_4, (uintptr_t)VAR_25);


 VAR_27 = 0;
 VAR_24->sc_intr = FUNC_1(VAR_24->sc_dev, VAR_15, &VAR_27,
     VAR_3 - 2, VAR_3 - 2, 1, VAR_14);
 if (VAR_24->sc_intr == ((void*)0)) {
  FUNC_9(VAR_22, "unable to allocate IRQ.\n");
  return (VAR_1);
 }

 VAR_26 = FUNC_5(VAR_24->sc_dev, VAR_24->sc_intr, VAR_12, ((void*)0),
     VAR_20, VAR_24, &VAR_24->sc_intr_cookie);
 if (VAR_26 != 0) {
  FUNC_9(VAR_22, "unable to setup interrupt.\n");
  FUNC_4(VAR_22, VAR_15, 0, VAR_24->sc_intr);
  return (VAR_1);
 }

 FUNC_2(VAR_24->sc_dev, VAR_24->sc_intr, VAR_24->sc_intr_cookie, "rx");

 VAR_23 = FUNC_11(VAR_11);
 if (VAR_23 == ((void*)0)) {
  FUNC_9(VAR_22, "cannot allocate ifnet.\n");
  FUNC_4(VAR_22, VAR_15, 0, VAR_24->sc_intr);
  return (VAR_0);
 }

 FUNC_12(VAR_23, FUNC_6(VAR_22), FUNC_8(VAR_22));
 VAR_23->if_mtu = VAR_2;
 VAR_23->if_init = VAR_16;
 VAR_23->if_softc = VAR_24;
 VAR_23->if_flags = VAR_6 | VAR_8 | VAR_7 | VAR_5;
 VAR_23->if_ioctl = VAR_17;

 VAR_24->sc_ifp = VAR_23;
 VAR_24->sc_flags = VAR_23->if_flags;

 FUNC_14(&VAR_24->sc_ifmedia, 0, VAR_18, VAR_19);

 FUNC_13(&VAR_24->sc_ifmedia, VAR_10 | VAR_9, 0, ((void*)0));
 FUNC_15(&VAR_24->sc_ifmedia, VAR_10 | VAR_9);

 FUNC_16(&VAR_24->sc_mtx, "GXemul Ethernet", ((void*)0), VAR_13);

 FUNC_10(VAR_23, VAR_25);

 VAR_23->if_transmit = VAR_21;

 return (FUNC_3(VAR_22));
}
