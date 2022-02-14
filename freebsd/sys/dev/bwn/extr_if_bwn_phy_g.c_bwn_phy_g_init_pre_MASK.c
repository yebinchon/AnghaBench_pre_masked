
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tx_bias; int calib_list; } ;
struct bwn_phy_g {int pg_idletssi; int* pg_nrssi; int* pg_nrssi_lt; int pg_lofcal; int pg_initval; int pg_avgtssi; TYPE_1__ pg_loctl; int pg_ofdmtab_dir; int pg_immode; struct bwn_phy_g* pg_minlowsig; void* pg_tssi2dbm; } ;
struct bwn_phy {struct bwn_phy_g phy_g; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bwn_phy_g*,int,int) ;

void
FUNC_3(struct bwn_mac *VAR_2)
{
 struct bwn_phy *VAR_3 = &VAR_2->mac_phy;
 struct bwn_phy_g *VAR_4 = &VAR_3->phy_g;
 void *VAR_5;
 int VAR_6;
 unsigned int VAR_7;

 VAR_5 = VAR_4->pg_tssi2dbm;
 VAR_6 = VAR_4->pg_idletssi;

 FUNC_2(VAR_4, 0, sizeof(*VAR_4));

 VAR_4->pg_tssi2dbm = VAR_5;
 VAR_4->pg_idletssi = VAR_6;

 FUNC_2(VAR_4->pg_minlowsig, 0xff, sizeof(VAR_4->pg_minlowsig));

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4->pg_nrssi); VAR_7++)
  VAR_4->pg_nrssi[VAR_7] = -1000;
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_4->pg_nrssi_lt); VAR_7++)
  VAR_4->pg_nrssi_lt[VAR_7] = VAR_7;
 VAR_4->pg_lofcal = 0xffff;
 VAR_4->pg_initval = 0xffff;
 VAR_4->pg_immode = VAR_0;
 VAR_4->pg_ofdmtab_dir = VAR_1;
 VAR_4->pg_avgtssi = 0xff;

 VAR_4->pg_loctl.tx_bias = 0xff;
 FUNC_1(&VAR_4->pg_loctl.calib_list);
}
