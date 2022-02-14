
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwn_phy_g {int pg_flags; int pg_radioctx_over; int pg_radioctx_overval; } ;
struct bwn_phy {unsigned int chan; scalar_t__ gmode; scalar_t__ rf_on; struct bwn_phy_g phy_g; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwn_mac*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bwn_mac*,int,int) ;
 int FUNC_2 (struct bwn_mac*,unsigned int,int) ;

void
FUNC_3(struct bwn_mac *VAR_3, int VAR_4)
{
 struct bwn_phy *VAR_5 = &VAR_3->mac_phy;
 struct bwn_phy_g *VAR_6 = &VAR_5->phy_g;
 unsigned int VAR_7;
 uint16_t VAR_8, VAR_9;

 if (VAR_4) {
  if (VAR_5->rf_on)
   return;

  FUNC_1(VAR_3, 0x15, 0x8000);
  FUNC_1(VAR_3, 0x15, 0xcc00);
  FUNC_1(VAR_3, 0x15, (VAR_5->gmode ? 0xc0 : 0x0));
  if (VAR_6->pg_flags & VAR_0) {
   FUNC_1(VAR_3, VAR_1,
       VAR_6->pg_radioctx_over);
   FUNC_1(VAR_3, VAR_2,
       VAR_6->pg_radioctx_overval);
   VAR_6->pg_flags &= ~VAR_0;
  }
  VAR_7 = VAR_5->chan;
  FUNC_2(VAR_3, 6, 1);
  FUNC_2(VAR_3, VAR_7, 0);
  return;
 }

 VAR_8 = FUNC_0(VAR_3, VAR_1);
 VAR_9 = FUNC_0(VAR_3, VAR_2);
 VAR_6->pg_radioctx_over = VAR_8;
 VAR_6->pg_radioctx_overval = VAR_9;
 VAR_6->pg_flags |= VAR_0;
 FUNC_1(VAR_3, VAR_1, VAR_8 | 0x008c);
 FUNC_1(VAR_3, VAR_2, VAR_9 & 0xff73);
}
