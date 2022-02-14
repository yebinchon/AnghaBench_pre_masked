
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct bwn_phy_n_iq_comp {int dummy; } ;
struct TYPE_2__ {int * txcal_coeffs_5G; int * txcal_radio_regs_5G; struct bwn_phy_n_iq_comp rxcal_coeffs_5G; int * txcal_coeffs_2G; int * txcal_radio_regs_2G; struct bwn_phy_n_iq_comp rxcal_coeffs_2G; } ;
struct bwn_chanspec {int channel_type; int center_freq; } ;
struct bwn_phy_n {scalar_t__ hang_avoid; TYPE_1__ cal_cache; struct bwn_chanspec iqcal_chanspec_5G; struct bwn_chanspec iqcal_chanspec_2G; } ;
struct bwn_phy {int rev; struct bwn_phy_n* phy_n; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct bwn_mac*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct bwn_mac*) ;
 int FUNC_3 (struct bwn_mac*) ;
 int FUNC_4 (struct bwn_mac*,int *) ;
 int FUNC_5 (struct bwn_mac*,int,struct bwn_phy_n_iq_comp*) ;
 int FUNC_6 (struct bwn_mac*,int) ;
 int FUNC_7 (struct bwn_mac*,int ,int,int *) ;

__attribute__((used)) static void FUNC_8(struct bwn_mac *VAR_9)
{
 struct bwn_phy *VAR_10 = &VAR_9->mac_phy;
 struct bwn_phy_n *VAR_11 = VAR_9->mac_phy.phy_n;

 struct bwn_phy_n_iq_comp *VAR_12 = ((void*)0);
 uint16_t *VAR_13 = ((void*)0);
 struct bwn_chanspec *VAR_14;
 uint16_t *VAR_15 = ((void*)0);

 if (VAR_11->hang_avoid)
  FUNC_6(VAR_9, 1);

 if (FUNC_2(VAR_9) == VAR_0) {
  VAR_12 = &VAR_11->cal_cache.rxcal_coeffs_2G;
  VAR_13 = VAR_11->cal_cache.txcal_radio_regs_2G;
  VAR_14 = &VAR_11->iqcal_chanspec_2G;
  VAR_15 = VAR_11->cal_cache.txcal_coeffs_2G;
 } else {
  VAR_12 = &VAR_11->cal_cache.rxcal_coeffs_5G;
  VAR_13 = VAR_11->cal_cache.txcal_radio_regs_5G;
  VAR_14 = &VAR_11->iqcal_chanspec_5G;
  VAR_15 = VAR_11->cal_cache.txcal_coeffs_5G;
 }

 FUNC_5(VAR_9, 0, VAR_12);

 if (VAR_10->rev >= 19) {

 } else if (VAR_10->rev >= 7) {
  VAR_13[0] = FUNC_1(VAR_9,
           VAR_3);
  VAR_13[1] = FUNC_1(VAR_9,
           VAR_4);
  VAR_13[4] = FUNC_1(VAR_9,
           VAR_1);
  VAR_13[5] = FUNC_1(VAR_9,
           VAR_2);
  VAR_13[2] = FUNC_1(VAR_9,
           VAR_7);
  VAR_13[3] = FUNC_1(VAR_9,
           VAR_8);
  VAR_13[6] = FUNC_1(VAR_9,
           VAR_5);
  VAR_13[7] = FUNC_1(VAR_9,
           VAR_6);
 } else if (VAR_10->rev >= 3) {
  VAR_13[0] = FUNC_1(VAR_9, 0x2021);
  VAR_13[1] = FUNC_1(VAR_9, 0x2022);
  VAR_13[2] = FUNC_1(VAR_9, 0x3021);
  VAR_13[3] = FUNC_1(VAR_9, 0x3022);
  VAR_13[4] = FUNC_1(VAR_9, 0x2023);
  VAR_13[5] = FUNC_1(VAR_9, 0x2024);
  VAR_13[6] = FUNC_1(VAR_9, 0x3023);
  VAR_13[7] = FUNC_1(VAR_9, 0x3024);
 } else {
  VAR_13[0] = FUNC_1(VAR_9, 0x8B);
  VAR_13[1] = FUNC_1(VAR_9, 0xBA);
  VAR_13[2] = FUNC_1(VAR_9, 0x8D);
  VAR_13[3] = FUNC_1(VAR_9, 0xBC);
 }
 VAR_14->center_freq = FUNC_3(VAR_9);
 VAR_14->channel_type = FUNC_4(VAR_9, ((void*)0));
 FUNC_7(VAR_9, FUNC_0(15, 80), 8, VAR_15);

 if (VAR_11->hang_avoid)
  FUNC_6(VAR_9, 0);
}
