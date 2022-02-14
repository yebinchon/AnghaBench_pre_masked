
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf10bmac_softc {struct ifnet* nf10bmac_ifp; } ;
struct ifnet {int if_capenable; int if_drv_flags; int if_snd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nf10bmac_softc*) ;
 int VAR_2 ;
 int FUNC_2 (struct nf10bmac_softc*) ;
 int FUNC_3 (struct nf10bmac_softc*) ;
 int FUNC_4 (struct nf10bmac_softc*) ;
 int FUNC_5 (struct nf10bmac_softc*) ;
 int FUNC_6 (struct ifnet*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_3)
{
 struct nf10bmac_softc *VAR_4;
 struct ifnet *VAR_5;
 int VAR_6;

 VAR_4 = (struct nf10bmac_softc *)VAR_3;
 VAR_5 = VAR_4->nf10bmac_ifp;

 FUNC_1(VAR_4);
 FUNC_2(VAR_4);


 VAR_6 = 0;
 while (VAR_6 < VAR_2) {
  int VAR_7;

  VAR_7 = FUNC_5(VAR_4);
  VAR_6 += VAR_7;
  if (VAR_7 == 0)
   break;
 }

 if (VAR_5->if_drv_flags & VAR_1) {

  FUNC_3(VAR_4);

  if (!FUNC_0(&VAR_5->if_snd))
   FUNC_6(VAR_5);
 }
 FUNC_4(VAR_4);
}
