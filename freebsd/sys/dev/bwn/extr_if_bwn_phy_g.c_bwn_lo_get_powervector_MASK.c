
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct bwn_txpwr_loctl {int power_vector; int pwr_vec_read_time; } ;
struct bwn_phy_g {struct bwn_txpwr_loctl pg_loctl; } ;
struct bwn_phy {struct bwn_phy_g phy_g; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct bwn_mac*,int ,int) ;
 int FUNC_2 (struct bwn_mac*,int ,int,int ) ;

__attribute__((used)) static void
FUNC_3(struct bwn_mac *VAR_1)
{
 struct bwn_phy *VAR_2 = &VAR_1->mac_phy;
 struct bwn_phy_g *VAR_3 = &VAR_2->phy_g;
 struct bwn_txpwr_loctl *VAR_4 = &VAR_3->pg_loctl;
 int VAR_5;
 uint64_t VAR_6;
 uint64_t VAR_7 = 0;

 for (VAR_5 = 0; VAR_5 < 8; VAR_5 += 2) {
  VAR_6 = FUNC_1(VAR_1, VAR_0, 0x310 + VAR_5);
  VAR_7 |= (VAR_6 << (VAR_5 * 8));
  FUNC_2(VAR_1, VAR_0, 0x310 + VAR_5, 0);
 }
 if (VAR_7)
  VAR_4->power_vector = VAR_7;

 FUNC_0(VAR_4->pwr_vec_read_time);
}
