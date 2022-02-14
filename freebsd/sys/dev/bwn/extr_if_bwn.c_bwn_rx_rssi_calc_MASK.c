
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct bwn_phy_g {int* pg_nrssi_lt; } ;
struct bwn_phy {int rf_ver; int type; struct bwn_phy_g phy_g; } ;
struct bwn_mac {TYPE_2__* mac_sc; struct bwn_phy mac_phy; } ;
typedef int int8_t ;
struct TYPE_3__ {int board_flags; } ;
struct TYPE_4__ {TYPE_1__ sc_board_info; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int8_t
FUNC_0(struct bwn_mac *VAR_2, uint8_t VAR_3,
    int VAR_4, int VAR_5, int VAR_6)
{
 struct bwn_phy *VAR_7 = &VAR_2->mac_phy;
 struct bwn_phy_g *VAR_8 = &VAR_7->phy_g;
 int VAR_9;

 switch (VAR_7->rf_ver) {
 case 0x2050:
  if (VAR_4) {
   VAR_9 = VAR_3;
   if (VAR_9 > 127)
    VAR_9 -= 256;
   VAR_9 = VAR_9 * 73 / 64;
   if (VAR_6)
    VAR_9 += 25;
   else
    VAR_9 -= 3;
  } else {
   if (VAR_2->mac_sc->sc_board_info.board_flags
       & VAR_0) {
    if (VAR_3 > 63)
     VAR_3 = 63;
    VAR_9 = VAR_8->pg_nrssi_lt[VAR_3];
    VAR_9 = (31 - VAR_9) * -131 / 128 - 57;
   } else {
    VAR_9 = VAR_3;
    VAR_9 = (31 - VAR_9) * -149 / 128 - 68;
   }
   if (VAR_7->type == VAR_1 && VAR_6)
    VAR_9 += 25;
  }
  break;
 case 0x2060:
  if (VAR_3 > 127)
   VAR_9 = VAR_3 - 256;
  else
   VAR_9 = VAR_3;
  break;
 default:
  VAR_9 = VAR_3;
  VAR_9 = (VAR_9 - 11) * 103 / 64;
  if (VAR_5)
   VAR_9 -= 109;
  else
   VAR_9 -= 83;
 }

 return (VAR_9);
}
