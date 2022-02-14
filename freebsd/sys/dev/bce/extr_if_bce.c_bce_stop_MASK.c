
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int if_drv_flags; } ;
struct bce_softc {int bce_link_up; scalar_t__ watchdog_timer; int bce_tick_callout; struct ifnet* bce_ifp; } ;


 int FUNC_0 (struct bce_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct bce_softc*,int ) ;
 int FUNC_5 (struct bce_softc*,int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (struct bce_softc*) ;
 int FUNC_7 (struct bce_softc*) ;
 int FUNC_8 (struct bce_softc*) ;
 int FUNC_9 (struct bce_softc*) ;
 scalar_t__ VAR_7 ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(struct bce_softc *VAR_8)
{
 struct ifnet *VAR_9;

 FUNC_1(VAR_2);

 FUNC_0(VAR_8);

 VAR_9 = VAR_8->bce_ifp;

 FUNC_10(&VAR_8->bce_tick_callout);


 FUNC_5(VAR_8, VAR_0, VAR_1);
 FUNC_4(VAR_8, VAR_0);
 FUNC_3(20);

 FUNC_6(VAR_8);


 if (VAR_7 == VAR_6) {
  FUNC_7(VAR_8);
 }
 FUNC_8(VAR_8);


 FUNC_9(VAR_8);

 VAR_8->watchdog_timer = 0;

 VAR_8->bce_link_up = VAR_3;

 VAR_9->if_drv_flags &= ~(VAR_5 | VAR_4);

 FUNC_2(VAR_2);
}
