
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; int if_snd; struct dc_softc* if_softc; } ;
struct TYPE_2__ {scalar_t__ dc_tx_cnt; int dc_tx_prod; int dc_tx_first; } ;
struct dc_softc {scalar_t__ dc_link; int dc_flags; int dc_wdog_timer; TYPE_1__ dc_cdata; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int FUNC_1 (struct dc_softc*,int ,int) ;
 int FUNC_2 (struct dc_softc*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,struct mbuf*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct mbuf*) ;
 scalar_t__ FUNC_6 (struct dc_softc*,struct mbuf**) ;

__attribute__((used)) static void
FUNC_7(struct ifnet *VAR_6)
{
 struct dc_softc *VAR_7;
 struct mbuf *VAR_8;
 int VAR_9;

 VAR_7 = VAR_6->if_softc;

 FUNC_2(VAR_7);

 if ((VAR_6->if_drv_flags & (VAR_5 | VAR_4)) !=
     VAR_5 || VAR_7->dc_link == 0)
  return;

 VAR_7->dc_cdata.dc_tx_first = VAR_7->dc_cdata.dc_tx_prod;

 for (VAR_9 = 0; !FUNC_4(&VAR_6->if_snd); ) {



  if (VAR_7->dc_cdata.dc_tx_cnt > VAR_1 - VAR_2) {
   VAR_6->if_drv_flags |= VAR_4;
   break;
  }
  FUNC_3(&VAR_6->if_snd, VAR_8);
  if (VAR_8 == ((void*)0))
   break;

  if (FUNC_6(VAR_7, &VAR_8)) {
   if (VAR_8 == ((void*)0))
    break;
   FUNC_5(&VAR_6->if_snd, VAR_8);
   VAR_6->if_drv_flags |= VAR_4;
   break;
  }

  VAR_9++;




  FUNC_0(VAR_6, VAR_8);
 }

 if (VAR_9 > 0) {

  if (!(VAR_7->dc_flags & VAR_3))
   FUNC_1(VAR_7, VAR_0, 0xFFFFFFFF);




  VAR_7->dc_wdog_timer = 5;
 }
}
