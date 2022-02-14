
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf10bmac_softc {int nf10bmac_flags; scalar_t__ nf10bmac_watchdog_timer; } ;
struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; int if_snd; struct nf10bmac_softc* if_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct mbuf*) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (struct nf10bmac_softc*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct nf10bmac_softc*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_4(struct ifnet *VAR_5)
{
 struct nf10bmac_softc *VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = VAR_5->if_softc;
 FUNC_2(VAR_6);

 if ((VAR_5->if_drv_flags & (VAR_1 | VAR_0)) !=
     VAR_1 || (VAR_6->nf10bmac_flags & VAR_2) == 0)
  return;
 for (VAR_7 = 0; !FUNC_1(&VAR_5->if_snd) &&
     VAR_7 < VAR_3; VAR_7++) {
  struct mbuf *VAR_9;

  FUNC_0(&VAR_5->if_snd, VAR_9);
  if (VAR_9 == ((void*)0))
   break;
  VAR_8 = FUNC_3(VAR_6, VAR_9);
  if (VAR_8 != 0)
   break;
 }
}
