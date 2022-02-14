
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_char ;
struct tuntap_softc {int tun_flags; struct ifnet* tun_ifp; struct tuntap_driver* tun_drv; } ;
struct TYPE_4__ {int d_name; } ;
struct tuntap_driver {TYPE_1__ cdevsw; } ;
struct TYPE_5__ {scalar_t__ ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_xname; TYPE_2__ if_snd; int if_output; int if_start; int if_mtu; int if_init; int if_capenable; int if_capabilities; int if_ioctl; struct tuntap_softc* if_softc; } ;
struct ether_addr {int octet; } ;
struct cdev {struct tuntap_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct ifnet*,char*,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (struct tuntap_softc*) ;
 int FUNC_5 (struct tuntap_softc*) ;
 int FUNC_6 (struct ifnet*,int ,int) ;
 int FUNC_7 (struct cdev*) ;
 int FUNC_8 (struct ifnet*,struct ether_addr*) ;
 int FUNC_9 (struct ifnet*,int ) ;
 struct ifnet* FUNC_10 (int ) ;
 int FUNC_11 (struct ifnet*) ;
 int FUNC_12 (struct ifnet*,int ,int ) ;
 int VAR_12 ;
 int FUNC_13 (char*,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

__attribute__((used)) static void
FUNC_14(struct cdev *VAR_18)
{
 struct tuntap_driver *VAR_19;
 struct tuntap_softc *VAR_20;
 struct ifnet *VAR_21;
 struct ether_addr VAR_22;
 int VAR_23;
 u_char VAR_24;

 VAR_20 = VAR_18->si_drv1;
 FUNC_2(VAR_20 != ((void*)0),
     ("si_drv1 should have been initialized at creation"));

 VAR_19 = VAR_20->tun_drv;
 VAR_23 = VAR_4;
 if ((VAR_20->tun_flags & VAR_11) != 0) {
  VAR_24 = VAR_7;
  VAR_23 |= VAR_3 | VAR_6;
 } else {
  VAR_24 = VAR_8;
  VAR_23 |= VAR_5;
 }
 VAR_21 = VAR_20->tun_ifp = FUNC_10(VAR_24);
 if (VAR_21 == ((void*)0))
  FUNC_13("%s%d: failed to if_alloc() interface.\n",
      VAR_19->cdevsw.d_name, FUNC_7(VAR_18));
 VAR_21->if_softc = VAR_20;
 FUNC_12(VAR_21, VAR_19->cdevsw.d_name, FUNC_7(VAR_18));
 VAR_21->if_ioctl = VAR_14;
 VAR_21->if_flags = VAR_23;
 FUNC_0(&VAR_21->if_snd, VAR_12);
 VAR_21->if_capabilities |= VAR_2;
 VAR_21->if_capenable |= VAR_2;

 if ((VAR_20->tun_flags & VAR_11) != 0) {
  VAR_21->if_mtu = VAR_1;
  VAR_21->if_init = VAR_13;
  VAR_21->if_start = VAR_17;

  FUNC_8(VAR_21, &VAR_22);
  FUNC_9(VAR_21, VAR_22.octet);
 } else {
  VAR_21->if_mtu = VAR_9;
  VAR_21->if_start = VAR_16;
  VAR_21->if_output = VAR_15;

  VAR_21->if_snd.ifq_drv_maxlen = 0;
  FUNC_1(&VAR_21->if_snd);

  FUNC_11(VAR_21);
  FUNC_6(VAR_21, VAR_0, sizeof(u_int32_t));
 }

 FUNC_4(VAR_20);
 VAR_20->tun_flags |= VAR_10;
 FUNC_5(VAR_20);

 FUNC_3(VAR_21, "interface %s is created, minor = %#x\n",
     VAR_21->if_xname, FUNC_7(VAR_18));
}
