
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bwn_softc {int dummy; } ;
struct TYPE_2__ {int (* set_txpwr ) (struct bwn_mac*) ;} ;
struct bwn_mac {scalar_t__ mac_status; TYPE_1__ mac_phy; struct bwn_softc* mac_sc; } ;


 int FUNC_0 (struct bwn_softc*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct bwn_softc*) ;
 int FUNC_2 (struct bwn_mac*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1, int VAR_2)
{
 struct bwn_mac *VAR_3 = VAR_1;
 struct bwn_softc *VAR_4;

 if (VAR_3 == ((void*)0))
  return;

 VAR_4 = VAR_3->mac_sc;

 FUNC_0(VAR_4);
 if (VAR_3->mac_status >= VAR_0 &&
     VAR_3->mac_phy.set_txpwr != ((void*)0))
  VAR_3->mac_phy.set_txpwr(VAR_3);
 FUNC_1(VAR_4);
}
