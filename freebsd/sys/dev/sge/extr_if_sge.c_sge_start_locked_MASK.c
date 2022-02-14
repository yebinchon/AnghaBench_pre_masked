
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ sge_tx_cnt; int sge_tx_dmamap; int sge_tx_tag; } ;
struct sge_softc {int sge_flags; int sge_timer; TYPE_1__ sge_cdata; } ;
struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; int if_snd; struct sge_softc* if_softc; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sge_softc*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,struct mbuf*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct mbuf*) ;
 int VAR_4 ;
 int FUNC_5 (struct sge_softc*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ,int ,int) ;
 scalar_t__ FUNC_7 (struct sge_softc*,struct mbuf**) ;

__attribute__((used)) static void
FUNC_8(struct ifnet *VAR_10)
{
 struct sge_softc *VAR_11;
 struct mbuf *VAR_12;
 int VAR_13 = 0;

 VAR_11 = VAR_10->if_softc;
 FUNC_5(VAR_11);

 if ((VAR_11->sge_flags & VAR_4) == 0 ||
     (VAR_10->if_drv_flags & (VAR_3 | VAR_2)) !=
     VAR_3)
  return;

 for (VAR_13 = 0; !FUNC_3(&VAR_10->if_snd); ) {
  if (VAR_11->sge_cdata.sge_tx_cnt > (VAR_6 -
      VAR_5)) {
   VAR_10->if_drv_flags |= VAR_2;
   break;
  }
  FUNC_2(&VAR_10->if_snd, VAR_12);
  if (VAR_12 == ((void*)0))
   break;
  if (FUNC_7(VAR_11, &VAR_12)) {
   if (VAR_12 == ((void*)0))
    break;
   FUNC_4(&VAR_10->if_snd, VAR_12);
   VAR_10->if_drv_flags |= VAR_2;
   break;
  }
  VAR_13++;




  FUNC_0(VAR_10, VAR_12);
 }

 if (VAR_13 > 0) {
  FUNC_6(VAR_11->sge_cdata.sge_tx_tag,
      VAR_11->sge_cdata.sge_tx_dmamap,
      VAR_0 | VAR_1);
  FUNC_1(VAR_11, VAR_7, 0x1a00 | VAR_8 | VAR_9);
  VAR_11->sge_timer = 5;
 }
}
