
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf10bmac_softc {int nf10bmac_flags; struct ifnet* nf10bmac_ifp; int nf10bmac_tick; scalar_t__ nf10bmac_watchdog_timer; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nf10bmac_softc*) ;
 int FUNC_1 (struct nf10bmac_softc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ifnet*,int ) ;

__attribute__((used)) static int
FUNC_4(struct nf10bmac_softc *VAR_4)
{
 struct ifnet *VAR_5;

 FUNC_0(VAR_4);






 VAR_5 = VAR_4->nf10bmac_ifp;
 VAR_5->if_drv_flags &= ~(VAR_1 | VAR_0);
 FUNC_1(VAR_4);

 VAR_4->nf10bmac_flags &= ~VAR_3;
 FUNC_3(VAR_5, VAR_2);

 return (0);
}
