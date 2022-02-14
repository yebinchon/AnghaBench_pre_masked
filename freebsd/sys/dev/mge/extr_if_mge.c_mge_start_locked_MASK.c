
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mge_softc {scalar_t__ tx_desc_used_count; int wd_timer; } ;
struct TYPE_2__ {int csum_flags; } ;
struct mbuf {int m_flags; int * m_next; TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_drv_flags; int if_snd; struct mge_softc* if_softc; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,struct mbuf*) ;
 int FUNC_2 (int *,struct mbuf*) ;
 int VAR_5 ;
 int FUNC_3 (struct mge_softc*,int ) ;
 int FUNC_4 (struct mge_softc*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct mge_softc*,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_6 (struct mbuf*) ;
 struct mbuf* FUNC_7 (struct mbuf*,int ) ;
 struct mbuf* FUNC_8 (struct mbuf*,int ) ;
 int FUNC_9 (struct mbuf*) ;
 scalar_t__ FUNC_10 (struct mge_softc*,struct mbuf*) ;

__attribute__((used)) static void
FUNC_11(struct ifnet *VAR_10)
{
 struct mge_softc *VAR_11;
 struct mbuf *VAR_12, *VAR_13;
 uint32_t VAR_14, VAR_15 = 0;

 VAR_11 = VAR_10->if_softc;

 FUNC_4(VAR_11);

 if ((VAR_10->if_drv_flags & (VAR_4 | VAR_3)) !=
     VAR_4)
  return;

 for (;;) {

  FUNC_1(&VAR_10->if_snd, VAR_12);
  if (VAR_12 == ((void*)0))
   break;

  if (VAR_12->m_pkthdr.csum_flags & (VAR_0|VAR_1|VAR_2) ||
      VAR_12->m_flags & VAR_9) {
   if (FUNC_6(VAR_12) == 0) {
    VAR_13 = FUNC_8(VAR_12, VAR_8);
    FUNC_9(VAR_12);
    if (VAR_13 == ((void*)0))
     continue;
    VAR_12 = VAR_13;
   }
  }

  if (VAR_12->m_next != ((void*)0)) {
   VAR_13 = FUNC_7(VAR_12, VAR_8);
   if (VAR_13 != ((void*)0))
    VAR_12 = VAR_13;
  }


  if (VAR_11->tx_desc_used_count + 1 >= VAR_6) {
   FUNC_2(&VAR_10->if_snd, VAR_12);
   VAR_10->if_drv_flags |= VAR_3;
   break;
  }

  if (FUNC_10(VAR_11, VAR_12) != 0)
   break;

  VAR_15++;
  FUNC_0(VAR_10, VAR_12);
 }

 if (VAR_15) {

  VAR_14 = FUNC_3(VAR_11, VAR_7);
  FUNC_5(VAR_11, VAR_7, VAR_14 | VAR_5);
  VAR_11->wd_timer = 5;
 }
}
