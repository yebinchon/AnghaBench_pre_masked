
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct nf10bmac_softc {int nf10bmac_if_flags; int nf10bmac_media; int * nf10bmac_rx_irq_res; } ;
struct ifreq {int ifr_reqcap; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_capenable; int if_capabilities; struct nf10bmac_softc* if_softc; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct nf10bmac_softc*) ;
 int FUNC_1 (struct nf10bmac_softc*) ;
 int FUNC_2 (struct nf10bmac_softc*) ;
 int FUNC_3 (struct nf10bmac_softc*) ;




 int FUNC_4 (struct ifnet*,int,scalar_t__) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (int ,struct ifnet*) ;
 int FUNC_7 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_8 (struct nf10bmac_softc*) ;
 int VAR_6 ;
 int FUNC_9 (struct nf10bmac_softc*) ;

__attribute__((used)) static int
FUNC_10(struct ifnet *VAR_7, u_long VAR_8, caddr_t VAR_9)
{
 struct nf10bmac_softc *VAR_10;
 struct ifreq *VAR_11;
 int VAR_12, VAR_13;

 VAR_12 = 0;
 VAR_10 = VAR_7->if_softc;
 VAR_11 = (struct ifreq *)VAR_9;

 switch (VAR_8) {
 case 129:
  FUNC_0(VAR_10);
  if (VAR_7->if_flags & VAR_5) {
   if ((VAR_7->if_drv_flags & VAR_3) != 0 &&
       ((VAR_7->if_flags ^ VAR_10->nf10bmac_if_flags) &
       (VAR_4 | VAR_2)) != 0)
                             ;
   else
    FUNC_8(VAR_10);
  } else if (VAR_7->if_drv_flags & VAR_3)
   FUNC_9(VAR_10);
  VAR_10->nf10bmac_if_flags = VAR_7->if_flags;
  FUNC_3(VAR_10);
  break;
 case 130:
  FUNC_0(VAR_10);
  VAR_13 = VAR_11->ifr_reqcap ^ VAR_7->if_capenable;
                FUNC_3(VAR_10);
                break;
 case 131:
 case 128:
                VAR_12 = FUNC_7(VAR_7, VAR_11, &VAR_10->nf10bmac_media, VAR_8);
  break;
 default:
  VAR_12 = FUNC_4(VAR_7, VAR_8, VAR_9);
  break;
 }

 return (VAR_12);
}
