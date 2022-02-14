
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; int if_snd; struct alc_softc* if_softc; } ;
struct TYPE_2__ {scalar_t__ alc_tx_cnt; } ;
struct alc_softc {int alc_flags; TYPE_1__ alc_cdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct alc_softc*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct ifnet*,struct mbuf*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,struct mbuf*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct mbuf*) ;
 scalar_t__ FUNC_5 (struct alc_softc*,struct mbuf**) ;
 int FUNC_6 (struct alc_softc*) ;
 int FUNC_7 (struct alc_softc*) ;

__attribute__((used)) static void
FUNC_8(struct ifnet *VAR_4)
{
 struct alc_softc *VAR_5;
 struct mbuf *VAR_6;
 int VAR_7;

 VAR_5 = VAR_4->if_softc;

 FUNC_0(VAR_5);


 if (VAR_5->alc_cdata.alc_tx_cnt >= VAR_1)
  FUNC_7(VAR_5);

 if ((VAR_4->if_drv_flags & (VAR_3 | VAR_2)) !=
     VAR_3 || (VAR_5->alc_flags & VAR_0) == 0)
  return;

 for (VAR_7 = 0; !FUNC_3(&VAR_4->if_snd); ) {
  FUNC_2(&VAR_4->if_snd, VAR_6);
  if (VAR_6 == ((void*)0))
   break;





  if (FUNC_5(VAR_5, &VAR_6)) {
   if (VAR_6 == ((void*)0))
    break;
   FUNC_4(&VAR_4->if_snd, VAR_6);
   VAR_4->if_drv_flags |= VAR_2;
   break;
  }

  VAR_7++;




  FUNC_1(VAR_4, VAR_6);
 }

 if (VAR_7 > 0)
  FUNC_6(VAR_5);
}
