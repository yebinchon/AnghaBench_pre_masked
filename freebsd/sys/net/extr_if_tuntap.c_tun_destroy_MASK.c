
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int si_note; } ;
struct tuntap_softc {int tun_flags; scalar_t__ tun_busy; int tun_cv; int tun_mtx; TYPE_1__* tun_drv; TYPE_2__ tun_rsel; int tun_dev; } ;
struct TYPE_10__ {int if_dunit; int * if_softc; int if_vnet; } ;
struct TYPE_8__ {int unrhdr; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 TYPE_3__* FUNC_2 (struct tuntap_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct tuntap_softc*) ;
 int FUNC_4 (struct tuntap_softc*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (struct tuntap_softc*,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (TYPE_2__*) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_20(struct tuntap_softc *VAR_4)
{

 FUNC_3(VAR_4);
 VAR_4->tun_flags |= VAR_1;
 if (VAR_4->tun_busy != 0)
  FUNC_7(&VAR_4->tun_cv, &VAR_4->tun_mtx);
 else
  FUNC_4(VAR_4);

 FUNC_1(FUNC_2(VAR_4)->if_vnet);


 FUNC_8(VAR_4->tun_dev);
 FUNC_17(&VAR_4->tun_rsel);
 FUNC_14(&VAR_4->tun_rsel.si_note, 0);
 FUNC_15(&VAR_4->tun_rsel.si_note);
 if ((VAR_4->tun_flags & VAR_2) != 0) {
  FUNC_9(FUNC_2(VAR_4));
 } else {
  FUNC_5(FUNC_2(VAR_4));
  FUNC_12(FUNC_2(VAR_4));
 }
 FUNC_18(&VAR_3);
 FUNC_2(VAR_4)->if_softc = ((void*)0);
 FUNC_19(&VAR_3);
 FUNC_11(VAR_4->tun_drv->unrhdr, FUNC_2(VAR_4)->if_dunit);
 FUNC_13(FUNC_2(VAR_4));
 FUNC_16(&VAR_4->tun_mtx);
 FUNC_6(&VAR_4->tun_cv);
 FUNC_10(VAR_4, VAR_0);
 FUNC_0();
}
