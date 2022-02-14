
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; int if_snd; struct bfe_softc* if_softc; } ;
struct bfe_softc {int bfe_flags; int bfe_tx_cnt; int bfe_tx_prod; int bfe_watchdog_timer; int bfe_tx_map; int bfe_tx_tag; } ;
struct bfe_desc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bfe_softc*) ;
 int VAR_2 ;
 int FUNC_1 (struct ifnet*,struct mbuf*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct bfe_softc*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,struct mbuf*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct mbuf*) ;
 scalar_t__ FUNC_6 (struct bfe_softc*,struct mbuf**) ;
 int FUNC_7 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_8(struct ifnet *VAR_7)
{
 struct bfe_softc *VAR_8;
 struct mbuf *VAR_9;
 int VAR_10;

 VAR_8 = VAR_7->if_softc;

 FUNC_0(VAR_8);





 if ((VAR_7->if_drv_flags & (VAR_6 | VAR_5)) !=
     VAR_6 || (VAR_8->bfe_flags & VAR_1) == 0)
  return;

 for (VAR_10 = 0; !FUNC_4(&VAR_7->if_snd) &&
     VAR_8->bfe_tx_cnt < VAR_2 - 1;) {
  FUNC_3(&VAR_7->if_snd, VAR_9);
  if (VAR_9 == ((void*)0))
   break;





  if (FUNC_6(VAR_8, &VAR_9)) {
   if (VAR_9 == ((void*)0))
    break;
   FUNC_5(&VAR_7->if_snd, VAR_9);
   VAR_7->if_drv_flags |= VAR_5;
   break;
  }

  VAR_10++;





  FUNC_1(VAR_7, VAR_9);
 }

 if (VAR_10) {
  FUNC_7(VAR_8->bfe_tx_tag, VAR_8->bfe_tx_map,
      VAR_3 | VAR_4);

  FUNC_2(VAR_8, VAR_0,
      VAR_8->bfe_tx_prod * sizeof(struct bfe_desc));
  FUNC_2(VAR_8, VAR_0,
      VAR_8->bfe_tx_prod * sizeof(struct bfe_desc));




  VAR_8->bfe_watchdog_timer = 5;
 }
}
