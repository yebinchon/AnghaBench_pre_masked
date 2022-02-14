
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_long ;
struct ifreq {int ifr_mtu; } ;
struct ifnet {int if_mtu; struct dtsec_softc* if_softc; } ;
struct dtsec_softc {TYPE_2__* sc_mii; TYPE_1__* sc_ifnet; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_4__ {int mii_media; } ;
struct TYPE_3__ {int if_flags; } ;


 int FUNC_0 (struct dtsec_softc*) ;
 int FUNC_1 (struct dtsec_softc*) ;
 int VAR_0 ;
 int VAR_1 ;




 int FUNC_2 (struct dtsec_softc*) ;
 int FUNC_3 (struct dtsec_softc*) ;
 int FUNC_4 (struct dtsec_softc*,int ) ;
 int FUNC_5 (struct ifnet*,int,scalar_t__) ;
 int FUNC_6 (struct ifnet*,struct ifreq*,int *,int) ;

__attribute__((used)) static int
FUNC_7(struct ifnet *VAR_2, u_long VAR_3, caddr_t VAR_4)
{
 struct dtsec_softc *VAR_5;
 struct ifreq *VAR_6;
 int VAR_7;

 VAR_5 = VAR_2->if_softc;
 VAR_6 = (struct ifreq *)VAR_4;
 VAR_7 = 0;


 switch (VAR_3) {
 case 128:
  FUNC_0(VAR_5);
  if (FUNC_4(VAR_5, VAR_6->ifr_mtu))
   VAR_2->if_mtu = VAR_6->ifr_mtu;
  else
   VAR_7 = VAR_0;
  FUNC_1(VAR_5);
  break;
 case 130:
  FUNC_0(VAR_5);

  if (VAR_5->sc_ifnet->if_flags & VAR_1)
   VAR_7 = FUNC_3(VAR_5);
  else
   VAR_7 = FUNC_2(VAR_5);

  FUNC_1(VAR_5);
  break;

 case 131:
 case 129:
  VAR_7 = FUNC_6(VAR_2, VAR_6, &VAR_5->sc_mii->mii_media,
      VAR_3);
  break;

 default:
  VAR_7 = FUNC_5(VAR_2, VAR_3, VAR_4);
 }

 return (VAR_7);
}
