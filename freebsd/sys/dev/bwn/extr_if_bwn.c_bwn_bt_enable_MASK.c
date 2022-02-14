
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int board_flags; } ;
struct bwn_softc {TYPE_1__ sc_board_info; } ;
struct TYPE_4__ {scalar_t__ type; int gmode; } ;
struct bwn_mac {TYPE_2__ mac_phy; struct bwn_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct bwn_mac*) ;
 int FUNC_1 (struct bwn_mac*,int ) ;

__attribute__((used)) static void
FUNC_2(struct bwn_mac *VAR_6)
{
 struct bwn_softc *VAR_7 = VAR_6->mac_sc;
 uint64_t VAR_8;

 if (VAR_5 == 0)
  return;
 if ((VAR_7->sc_board_info.board_flags & VAR_1) == 0)
  return;
 if (VAR_6->mac_phy.type != VAR_4 && !VAR_6->mac_phy.gmode)
  return;

 VAR_8 = FUNC_0(VAR_6);
 if (VAR_7->sc_board_info.board_flags & VAR_0)
  VAR_8 |= VAR_3;
 else
  VAR_8 |= VAR_2;
 FUNC_1(VAR_6, VAR_8);
}
