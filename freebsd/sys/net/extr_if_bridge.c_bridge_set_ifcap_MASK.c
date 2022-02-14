
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifreq {int ifr_reqcap; } ;
struct ifnet {int if_capenable; int (* if_ioctl ) (struct ifnet*,int ,int ) ;int if_xname; } ;
struct bridge_softc {int sc_ifp; } ;
struct bridge_iflist {struct ifnet* bif_ifp; } ;
typedef int ifr ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bridge_softc*) ;
 int VAR_2 ;
 int FUNC_1 (struct ifreq*,int) ;
 int FUNC_2 (int ,char*,int ,int) ;
 int FUNC_3 (struct ifnet*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct bridge_softc *VAR_3, struct bridge_iflist *VAR_4, int VAR_5)
{
 struct ifnet *VAR_6 = VAR_4->bif_ifp;
 struct ifreq VAR_7;
 int VAR_8, VAR_9, VAR_10;

 FUNC_0(VAR_3);

 FUNC_1(&VAR_7, sizeof(VAR_7));
 VAR_7.ifr_reqcap = VAR_5;

 if (VAR_6->if_capenable != VAR_5) {
  VAR_8 = (*VAR_6->if_ioctl)(VAR_6, VAR_2, (caddr_t)&VAR_7);
  if (VAR_8)
   FUNC_2(VAR_3->sc_ifp,
       "error setting capabilities on %s: %d\n",
       VAR_6->if_xname, VAR_8);
  VAR_9 = VAR_0 | VAR_1;
  VAR_10 = VAR_6->if_capenable & VAR_9 & ~VAR_5;
  if (VAR_10 != 0)
   FUNC_2(VAR_3->sc_ifp,
       "can't disable some capabilities on %s: 0x%x\n",
       VAR_6->if_xname, VAR_10);
 }
}
