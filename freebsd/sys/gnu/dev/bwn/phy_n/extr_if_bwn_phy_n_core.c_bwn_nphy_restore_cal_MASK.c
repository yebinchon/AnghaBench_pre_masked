
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct bwn_phy_n_iq_comp {int dummy; } ;
struct TYPE_6__ {struct bwn_phy_n_iq_comp rxcal_coeffs_5G; scalar_t__* txcal_radio_regs_5G; struct bwn_phy_n_iq_comp rxcal_coeffs_2G; scalar_t__* txcal_radio_regs_2G; scalar_t__* txcal_coeffs_5G; scalar_t__* txcal_coeffs_2G; } ;
struct TYPE_5__ {int center_freq; } ;
struct TYPE_4__ {int center_freq; } ;
struct bwn_phy_n {TYPE_3__ cal_cache; TYPE_2__ iqcal_chanspec_5G; TYPE_1__ iqcal_chanspec_2G; } ;
struct bwn_phy {int rev; struct bwn_phy_n* phy_n; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct bwn_mac*,int,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct bwn_mac*) ;
 int FUNC_3 (struct bwn_mac*,int,struct bwn_phy_n_iq_comp*) ;
 int FUNC_4 (struct bwn_mac*) ;
 int FUNC_5 (struct bwn_mac*,int ,int,scalar_t__*) ;

__attribute__((used)) static void FUNC_6(struct bwn_mac *VAR_9)
{
 struct bwn_phy *VAR_10 = &VAR_9->mac_phy;
 struct bwn_phy_n *VAR_11 = VAR_9->mac_phy.phy_n;

 uint16_t VAR_12[4];
 uint16_t *VAR_13 = ((void*)0);
 uint16_t *VAR_14 = ((void*)0);

 int VAR_15;
 uint16_t *VAR_16 = ((void*)0);
 struct bwn_phy_n_iq_comp *VAR_17 = ((void*)0);

 if (FUNC_2(VAR_9) == VAR_0) {
  if (!VAR_11->iqcal_chanspec_2G.center_freq)
   return;
  VAR_14 = VAR_11->cal_cache.txcal_coeffs_2G;
  VAR_13 = &VAR_11->cal_cache.txcal_coeffs_2G[5];
 } else {
  if (!VAR_11->iqcal_chanspec_5G.center_freq)
   return;
  VAR_14 = VAR_11->cal_cache.txcal_coeffs_5G;
  VAR_13 = &VAR_11->cal_cache.txcal_coeffs_5G[5];
 }

 FUNC_5(VAR_9, FUNC_0(15, 80), 4, VAR_14);

 for (VAR_15 = 0; VAR_15 < 4; VAR_15++) {
  if (VAR_9->mac_phy.rev >= 3)
   VAR_14[VAR_15] = VAR_12[VAR_15];
  else
   VAR_12[VAR_15] = 0;
 }

 FUNC_5(VAR_9, FUNC_0(15, 88), 4, VAR_12);
 FUNC_5(VAR_9, FUNC_0(15, 85), 2, VAR_13);
 FUNC_5(VAR_9, FUNC_0(15, 93), 2, VAR_13);

 if (VAR_9->mac_phy.rev < 2)
  FUNC_4(VAR_9);

 if (FUNC_2(VAR_9) == VAR_0) {
  VAR_16 = VAR_11->cal_cache.txcal_radio_regs_2G;
  VAR_17 = &VAR_11->cal_cache.rxcal_coeffs_2G;
 } else {
  VAR_16 = VAR_11->cal_cache.txcal_radio_regs_5G;
  VAR_17 = &VAR_11->cal_cache.rxcal_coeffs_5G;
 }


 if (VAR_10->rev >= 19) {

 } else if (VAR_10->rev >= 7) {
  FUNC_1(VAR_9, VAR_3,
    VAR_16[0]);
  FUNC_1(VAR_9, VAR_4,
    VAR_16[1]);
  FUNC_1(VAR_9, VAR_1,
    VAR_16[4]);
  FUNC_1(VAR_9, VAR_2,
    VAR_16[5]);
  FUNC_1(VAR_9, VAR_7,
    VAR_16[2]);
  FUNC_1(VAR_9, VAR_8,
    VAR_16[3]);
  FUNC_1(VAR_9, VAR_5,
    VAR_16[6]);
  FUNC_1(VAR_9, VAR_6,
    VAR_16[7]);
 } else if (VAR_10->rev >= 3) {
  FUNC_1(VAR_9, 0x2021, VAR_16[0]);
  FUNC_1(VAR_9, 0x2022, VAR_16[1]);
  FUNC_1(VAR_9, 0x3021, VAR_16[2]);
  FUNC_1(VAR_9, 0x3022, VAR_16[3]);
  FUNC_1(VAR_9, 0x2023, VAR_16[4]);
  FUNC_1(VAR_9, 0x2024, VAR_16[5]);
  FUNC_1(VAR_9, 0x3023, VAR_16[6]);
  FUNC_1(VAR_9, 0x3024, VAR_16[7]);
 } else {
  FUNC_1(VAR_9, 0x8B, VAR_16[0]);
  FUNC_1(VAR_9, 0xBA, VAR_16[1]);
  FUNC_1(VAR_9, 0x8D, VAR_16[2]);
  FUNC_1(VAR_9, 0xBC, VAR_16[3]);
 }
 FUNC_3(VAR_9, 1, VAR_17);
}
