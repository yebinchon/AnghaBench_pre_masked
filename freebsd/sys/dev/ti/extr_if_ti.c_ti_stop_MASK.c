
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ti_idx; } ;
struct TYPE_5__ {scalar_t__ ti_idx; } ;
struct TYPE_4__ {scalar_t__ ti_idx; } ;
struct ti_softc {int ti_watchdog; int ti_tx_saved_considx; TYPE_3__ ti_tx_considx; TYPE_2__ ti_return_prodidx; TYPE_1__ ti_ev_prodidx; struct ifnet* ti_ifp; } ;
struct ti_cmd_desc {int dummy; } ;
struct ifnet {int if_drv_flags; } ;


 int FUNC_0 (struct ti_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct ti_softc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct ti_softc*) ;
 int FUNC_5 (struct ti_softc*) ;
 int FUNC_6 (struct ti_softc*) ;
 int FUNC_7 (struct ti_softc*) ;
 int FUNC_8 (struct ti_softc*) ;
 int FUNC_9 (struct ti_softc*,int,int) ;

__attribute__((used)) static void
FUNC_10(struct ti_softc *VAR_6)
{
 struct ifnet *VAR_7;
 struct ti_cmd_desc VAR_8;

 FUNC_2(VAR_6);

 VAR_7 = VAR_6->ti_ifp;


 FUNC_0(VAR_6, VAR_4, 1);



 FUNC_1(VAR_3, VAR_2, 0);


 if (FUNC_4(VAR_6) == 0) {
  FUNC_9(VAR_6, 0x2000, 0x100000 - 0x2000);

  FUNC_4(VAR_6);
 }


 FUNC_7(VAR_6);


 FUNC_5(VAR_6);


 FUNC_6(VAR_6);


 FUNC_8(VAR_6);

 VAR_6->ti_ev_prodidx.ti_idx = 0;
 VAR_6->ti_return_prodidx.ti_idx = 0;
 VAR_6->ti_tx_considx.ti_idx = 0;
 VAR_6->ti_tx_saved_considx = VAR_5;

 VAR_7->if_drv_flags &= ~(VAR_1 | VAR_0);
 FUNC_3(&VAR_6->ti_watchdog);
}
