
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ifreq {int ifr_reqcap; } ;
struct ifnet {int if_capabilities; int (* if_ioctl ) (struct ifnet*,int ,int ) ;int if_capenable; int if_hwassist; } ;
struct hn_softc {struct ifnet* hn_vf_ifp; struct ifnet* hn_ifp; } ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hn_softc*) ;
 int FUNC_1 (struct hn_softc*) ;
 int FUNC_2 (struct hn_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct ifnet*,int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct hn_softc *VAR_7, struct ifreq *VAR_8)
{
 struct ifnet *VAR_9, *VAR_10;
 uint64_t VAR_11;
 int VAR_12;

 FUNC_2(VAR_7);
 VAR_9 = VAR_7->hn_ifp;
 VAR_10 = VAR_7->hn_vf_ifp;





 VAR_8->ifr_reqcap &= VAR_9->if_capabilities;

 VAR_12 = VAR_10->if_ioctl(VAR_10, VAR_6, (caddr_t)VAR_8);
 VAR_9->if_capenable = VAR_10->if_capenable & VAR_9->if_capabilities;

 VAR_11 = VAR_10->if_hwassist & FUNC_1(VAR_7);
 if (VAR_9->if_capenable & VAR_4)
  VAR_9->if_hwassist |= VAR_11;
 else
  VAR_9->if_hwassist &= ~VAR_11;

 VAR_11 = VAR_10->if_hwassist & FUNC_0(VAR_7);
 if (VAR_9->if_capenable & VAR_5)
  VAR_9->if_hwassist |= VAR_11;
 else
  VAR_9->if_hwassist &= ~VAR_11;

 VAR_11 = VAR_10->if_hwassist & VAR_1;
 if (VAR_9->if_capenable & VAR_2)
  VAR_9->if_hwassist |= VAR_11;
 else
  VAR_9->if_hwassist &= ~VAR_11;

 VAR_11 = VAR_10->if_hwassist & VAR_0;
 if (VAR_9->if_capenable & VAR_3)
  VAR_9->if_hwassist |= VAR_11;
 else
  VAR_9->if_hwassist &= ~VAR_11;

 return (VAR_12);
}
