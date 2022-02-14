
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vr_tx_cnt; } ;
struct vr_softc {int vr_flags; int vr_watchdog_timer; TYPE_1__ vr_cdata; } ;
struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; int if_snd; struct vr_softc* if_softc; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct mbuf*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct mbuf*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct vr_softc*) ;
 int FUNC_5 (struct vr_softc*,int ,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (struct vr_softc*,struct mbuf**) ;

__attribute__((used)) static void
FUNC_7(struct ifnet *VAR_6)
{
 struct vr_softc *VAR_7;
 struct mbuf *VAR_8;
 int VAR_9;

 VAR_7 = VAR_6->if_softc;

 FUNC_4(VAR_7);

 if ((VAR_6->if_drv_flags & (VAR_1 | VAR_0)) !=
     VAR_1 || (VAR_7->vr_flags & VAR_4) == 0)
  return;

 for (VAR_9 = 0; !FUNC_2(&VAR_6->if_snd) &&
     VAR_7->vr_cdata.vr_tx_cnt < VAR_5 - 2; ) {
  FUNC_1(&VAR_6->if_snd, VAR_8);
  if (VAR_8 == ((void*)0))
   break;





  if (FUNC_6(VAR_7, &VAR_8)) {
   if (VAR_8 == ((void*)0))
    break;
   FUNC_3(&VAR_6->if_snd, VAR_8);
   VAR_6->if_drv_flags |= VAR_0;
   break;
  }

  VAR_9++;




  FUNC_0(VAR_6, VAR_8);
 }

 if (VAR_9 > 0) {

  FUNC_5(VAR_7, VAR_2, VAR_3);

  VAR_7->vr_watchdog_timer = 5;
 }
}
