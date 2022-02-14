
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct TYPE_2__ {scalar_t__ ifq_len; } ;
struct ifnet {int if_drv_flags; TYPE_1__ if_snd; scalar_t__ if_softc; } ;
struct fwip_softc {scalar_t__ dma_ch; } ;
struct fwip_eth_softc {struct fwip_softc* fwip; } ;


 int FUNC_0 (struct ifnet*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,struct mbuf*) ;
 int FUNC_2 (struct fwip_softc*,struct ifnet*) ;
 int FUNC_3 (struct ifnet*,int ,int) ;
 int FUNC_4 (struct mbuf*) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7(struct ifnet *VAR_2)
{
 struct fwip_softc *VAR_3 = ((struct fwip_eth_softc *)VAR_2->if_softc)->fwip;
 int VAR_4;

 FUNC_0(VAR_2, "starting\n");

 if (VAR_3->dma_ch < 0) {
  struct mbuf *VAR_5 = ((void*)0);

  FUNC_0(VAR_2, "not ready\n");

  VAR_4 = FUNC_5();
  do {
   FUNC_1(&VAR_2->if_snd, VAR_5);
   if (VAR_5 != ((void*)0))
    FUNC_4(VAR_5);
   FUNC_3(VAR_2, VAR_0, 1);
  } while (VAR_5 != ((void*)0));
  FUNC_6(VAR_4);

  return;
 }

 VAR_4 = FUNC_5();
 VAR_2->if_drv_flags |= VAR_1;

 if (VAR_2->if_snd.ifq_len != 0)
  FUNC_2(VAR_3, VAR_2);

 VAR_2->if_drv_flags &= ~VAR_1;
 FUNC_6(VAR_4);
}
