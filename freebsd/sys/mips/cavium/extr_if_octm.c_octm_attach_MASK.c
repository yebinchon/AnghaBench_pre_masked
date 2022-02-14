
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int u_int8_t ;
struct octm_softc {int sc_port; int sc_flags; int sc_ifmedia; struct ifnet* sc_ifp; int * sc_intr; int sc_intr_cookie; int sc_dev; } ;
struct TYPE_11__ {int ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_hdrlen; TYPE_5__ if_snd; int if_capabilities; int if_capenable; int if_transmit; int if_ioctl; struct octm_softc* if_softc; int if_init; int if_mtu; } ;
struct ether_vlan_header {int dummy; } ;
typedef int device_t ;
struct TYPE_8__ {scalar_t__ u64; } ;
typedef TYPE_2__ cvmx_mixx_irhwm_t ;
struct TYPE_7__ {int ithena; } ;
struct TYPE_9__ {scalar_t__ u64; TYPE_1__ s; } ;
typedef TYPE_3__ cvmx_mixx_intena_t ;
struct TYPE_10__ {int mac_addr_base; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
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
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int * FUNC_4 (int ,int ,int*,int,int,int,int ) ;
 int FUNC_5 (int ,int *,int ,char*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ,int *) ;
 int FUNC_8 (int ,int *,int ,int *,int ,struct octm_softc*,int *) ;
 int FUNC_9 (int,scalar_t__) ;
 TYPE_4__* FUNC_10 () ;
 int FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (int ) ;
 struct octm_softc* FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 (struct ifnet*,int const*) ;
 struct ifnet* FUNC_17 (int ) ;
 int FUNC_18 (struct ifnet*,int ,int) ;
 int FUNC_19 (int *,int,int ,int *) ;
 int FUNC_20 (int *,int ,int ,int ) ;
 int FUNC_21 (int *,int) ;
 int FUNC_22 (int *,int ,int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

__attribute__((used)) static int
FUNC_23(device_t VAR_23)
{
 struct ifnet *VAR_24;
 struct octm_softc *VAR_25;
 cvmx_mixx_irhwm_t VAR_26;
 cvmx_mixx_intena_t VAR_27;
 uint64_t VAR_28;
 int VAR_29;
 int VAR_30;
 int VAR_31;

 VAR_25 = FUNC_13(VAR_23);
 VAR_25->sc_dev = VAR_23;
 VAR_25->sc_port = FUNC_14(VAR_23);

 switch (VAR_25->sc_port) {
 case 0:
  VAR_30 = VAR_13;
  break;
 case 1:
  VAR_30 = VAR_14;
  break;
 default:
  FUNC_15(VAR_23, "unsupported management port %u.\n", VAR_25->sc_port);
  return (VAR_2);
 }




 VAR_28 = 0;
 FUNC_22((u_int8_t *)&VAR_28 + 2, FUNC_10()->mac_addr_base, 6);
 VAR_28 += VAR_25->sc_port;

 FUNC_9(VAR_25->sc_port, VAR_28);


 VAR_26.u64 = 0;
 FUNC_11(FUNC_1(VAR_25->sc_port), VAR_26.u64);


 VAR_27.u64 = 0;
 VAR_27.s.ithena = 1;
 FUNC_11(FUNC_0(VAR_25->sc_port), VAR_27.u64);


 VAR_31 = 0;
 VAR_25->sc_intr = FUNC_4(VAR_25->sc_dev, VAR_16, &VAR_31,
     VAR_30, VAR_30, 1, VAR_15);
 if (VAR_25->sc_intr == ((void*)0)) {
  FUNC_15(VAR_23, "unable to allocate IRQ.\n");
  return (VAR_2);
 }

 VAR_29 = FUNC_8(VAR_25->sc_dev, VAR_25->sc_intr, VAR_12, ((void*)0),
     VAR_21, VAR_25, &VAR_25->sc_intr_cookie);
 if (VAR_29 != 0) {
  FUNC_15(VAR_23, "unable to setup interrupt.\n");
  FUNC_7(VAR_23, VAR_16, 0, VAR_25->sc_intr);
  return (VAR_2);
 }

 FUNC_5(VAR_25->sc_dev, VAR_25->sc_intr, VAR_25->sc_intr_cookie, "rx");



 VAR_24 = FUNC_17(VAR_11);
 if (VAR_24 == ((void*)0)) {
  FUNC_15(VAR_23, "cannot allocate ifnet.\n");
  FUNC_7(VAR_23, VAR_16, 0, VAR_25->sc_intr);
  return (VAR_1);
 }

 FUNC_18(VAR_24, FUNC_12(VAR_23), FUNC_14(VAR_23));
 VAR_24->if_mtu = VAR_3;
 VAR_24->if_init = VAR_17;
 VAR_24->if_softc = VAR_25;
 VAR_24->if_flags = VAR_6 | VAR_8 | VAR_7 | VAR_5;
 VAR_24->if_ioctl = VAR_18;

 VAR_25->sc_ifp = VAR_24;
 VAR_25->sc_flags = VAR_24->if_flags;

 FUNC_20(&VAR_25->sc_ifmedia, 0, VAR_19, VAR_20);

 FUNC_19(&VAR_25->sc_ifmedia, VAR_10 | VAR_9, 0, ((void*)0));
 FUNC_21(&VAR_25->sc_ifmedia, VAR_10 | VAR_9);

 FUNC_16(VAR_24, (const u_int8_t *)&VAR_28 + 2);

 VAR_24->if_transmit = VAR_22;

 VAR_24->if_hdrlen = sizeof(struct ether_vlan_header);
 VAR_24->if_capabilities = VAR_4;
 VAR_24->if_capenable = VAR_24->if_capabilities;

 FUNC_2(&VAR_24->if_snd, VAR_0);
 VAR_24->if_snd.ifq_drv_maxlen = VAR_0;
 FUNC_3(&VAR_24->if_snd);

 return (FUNC_6(VAR_23));
}
