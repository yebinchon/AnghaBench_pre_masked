
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct bwn_phy {int rev; } ;
struct bwn_nphy_txgains {int* tx_lpf; int* txgm; int* pga; int* pad; int* ipa; } ;
struct bwn_nphy_iqcal_params {int tx_lpf; int txgm; int pga; int pad; int ipa; int cal_gain; int* ncorr; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bwn_mac*) ;
 int FUNC_1 (int,int) ;
 size_t*** VAR_1 ;

__attribute__((used)) static void FUNC_2(struct bwn_mac *VAR_2, uint16_t VAR_3,
     struct bwn_nphy_txgains VAR_4,
     struct bwn_nphy_iqcal_params *VAR_5)
{
 struct bwn_phy *VAR_6 = &VAR_2->mac_phy;
 int VAR_7, VAR_8, VAR_9;
 uint16_t VAR_10;

 if (VAR_2->mac_phy.rev >= 3) {
  VAR_5->tx_lpf = VAR_4.tx_lpf[VAR_3];
  VAR_5->txgm = VAR_4.txgm[VAR_3];
  VAR_5->pga = VAR_4.pga[VAR_3];
  VAR_5->pad = VAR_4.pad[VAR_3];
  VAR_5->ipa = VAR_4.ipa[VAR_3];
  if (VAR_6->rev >= 19) {

  } else if (VAR_6->rev >= 7) {
   VAR_5->cal_gain = (VAR_5->txgm << 12) | (VAR_5->pga << 8) | (VAR_5->pad << 3) | (VAR_5->ipa) | (VAR_5->tx_lpf << 15);
  } else {
   VAR_5->cal_gain = (VAR_5->txgm << 12) | (VAR_5->pga << 8) | (VAR_5->pad << 4) | (VAR_5->ipa);
  }
  for (VAR_8 = 0; VAR_8 < 5; VAR_8++)
   VAR_5->ncorr[VAR_8] = 0x79;
 } else {
  VAR_10 = (VAR_4.pad[VAR_3]) | (VAR_4.pga[VAR_3] << 4) |
   (VAR_4.txgm[VAR_3] << 8);

  VAR_9 = (FUNC_0(VAR_2) == VAR_0) ?
   1 : 0;
  for (VAR_7 = 0; VAR_7 < 9; VAR_7++)
   if (VAR_1[VAR_9][VAR_7][0] == VAR_10)
    break;
  VAR_7 = FUNC_1(VAR_7, 8);

  VAR_5->txgm = VAR_1[VAR_9][VAR_7][1];
  VAR_5->pga = VAR_1[VAR_9][VAR_7][2];
  VAR_5->pad = VAR_1[VAR_9][VAR_7][3];
  VAR_5->cal_gain = (VAR_5->txgm << 7) | (VAR_5->pga << 4) |
     (VAR_5->pad << 2);
  for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
   VAR_5->ncorr[VAR_8] = VAR_1[VAR_9][VAR_7][4 + VAR_8];
 }
}
