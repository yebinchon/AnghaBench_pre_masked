
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_int32_t ;
struct hme_softc {int sc_dev; int sc_flags; TYPE_1__* sc_ifp; scalar_t__ sc_wdog_timer; int sc_tick_ch; } ;
struct TYPE_2__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct hme_softc*,int ,int,int) ;
 int FUNC_2 (struct hme_softc*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (struct hme_softc*,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void
FUNC_6(struct hme_softc *VAR_9)
{
 u_int32_t VAR_10;
 int VAR_11;

 FUNC_4(&VAR_9->sc_tick_ch);
 VAR_9->sc_wdog_timer = 0;
 VAR_9->sc_ifp->if_drv_flags &= ~(VAR_8 | VAR_7);
 VAR_9->sc_flags &= ~VAR_2;


 FUNC_3(VAR_9, VAR_3, 0xffffffff);


 FUNC_3(VAR_9, VAR_4, VAR_6 |
     VAR_5);
 FUNC_1(VAR_9, VAR_4, 4,
     VAR_0 | VAR_1);
 for (VAR_11 = 0; VAR_11 < 20; VAR_11++) {
  VAR_10 = FUNC_2(VAR_9, VAR_4);
  if ((VAR_10 & (VAR_6 | VAR_5)) == 0)
   return;
  FUNC_0(20);
 }

 FUNC_5(VAR_9->sc_dev, "hme_stop: reset failed\n");
}
