
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct nf10bmac_softc {int nf10bmac_tick; struct ifnet* nf10bmac_ifp; int nf10bmac_flags; int nf10bmac_eth_addr; } ;
struct ifnet {int if_drv_flags; int if_capenable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (struct ifnet*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct nf10bmac_softc*) ;
 int FUNC_2 (struct nf10bmac_softc*) ;
 int FUNC_3 (struct nf10bmac_softc*) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 (int *,int ,int ,struct nf10bmac_softc*) ;
 int VAR_6 ;
 int FUNC_6 (struct ifnet*,int ) ;
 int FUNC_7 (struct nf10bmac_softc*) ;
 int FUNC_8 (struct nf10bmac_softc*) ;
 int FUNC_9 (struct nf10bmac_softc*) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_10(struct nf10bmac_softc *VAR_8)
{
 struct ifnet *VAR_9;
 uint8_t *VAR_10;

 FUNC_1(VAR_8);
 VAR_9 = VAR_8->nf10bmac_ifp;

 if ((VAR_9->if_drv_flags & VAR_3) != 0)
  return;






 VAR_10 = FUNC_0(VAR_8->nf10bmac_ifp);
 FUNC_4(VAR_10, &VAR_8->nf10bmac_eth_addr, VAR_0);



 FUNC_9(VAR_8);

 FUNC_8(VAR_8);



 FUNC_7(VAR_8);







 {
  FUNC_3(VAR_8);
 }

 VAR_9->if_drv_flags |= VAR_3;
 VAR_9->if_drv_flags &= ~VAR_2;


 VAR_8->nf10bmac_flags = VAR_5;
 FUNC_6(VAR_8->nf10bmac_ifp, VAR_4);




}
