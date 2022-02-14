
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_desc_map; int tx_desc_tag; } ;
struct nfe_softc {scalar_t__ nfe_link; int rxtxctl; int nfe_watchdog_timer; TYPE_1__ txq; } ;
struct mbuf {int dummy; } ;
typedef int if_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nfe_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct nfe_softc*,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 struct mbuf* FUNC_3 (int ) ;
 int FUNC_4 (int ,struct mbuf*) ;
 int FUNC_5 (int ) ;
 struct nfe_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,struct mbuf*) ;
 int FUNC_9 (int ,int,int ) ;
 scalar_t__ FUNC_10 (struct nfe_softc*,struct mbuf**) ;

__attribute__((used)) static void
FUNC_11(if_t VAR_6)
{
 struct nfe_softc *VAR_7 = FUNC_6(VAR_6);
 struct mbuf *VAR_8;
 int VAR_9 = 0;

 FUNC_0(VAR_7);

 if ((FUNC_5(VAR_6) & (VAR_3 | VAR_2)) !=
     VAR_3 || VAR_7->nfe_link == 0)
  return;

 while (!FUNC_7(VAR_6)) {
  VAR_8 = FUNC_3(VAR_6);

  if (VAR_8 == ((void*)0))
   break;

  if (FUNC_10(VAR_7, &VAR_8) != 0) {
   if (VAR_8 == ((void*)0))
    break;
   FUNC_8(VAR_6, VAR_8);
   FUNC_9(VAR_6, VAR_2, 0);
   break;
  }
  VAR_9++;
  FUNC_4(VAR_6, VAR_8);
 }

 if (VAR_9 > 0) {
  FUNC_2(VAR_7->txq.tx_desc_tag, VAR_7->txq.tx_desc_map,
      VAR_0 | VAR_1);


  FUNC_1(VAR_7, VAR_4, VAR_5 | VAR_7->rxtxctl);




  VAR_7->nfe_watchdog_timer = 5;
 }
}
