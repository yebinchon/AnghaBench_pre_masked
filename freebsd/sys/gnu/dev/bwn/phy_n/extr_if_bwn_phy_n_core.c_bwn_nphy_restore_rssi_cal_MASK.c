
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_7__ {int * rssical_phy_regs_5G; int * rssical_radio_regs_5G; int * rssical_phy_regs_2G; int * rssical_radio_regs_2G; } ;
struct TYPE_6__ {int center_freq; } ;
struct TYPE_5__ {int center_freq; } ;
struct bwn_phy_n {TYPE_3__ rssical_cache; TYPE_2__ rssical_chanspec_5G; TYPE_1__ rssical_chanspec_2G; } ;
struct TYPE_8__ {int rev; struct bwn_phy_n* phy_n; } ;
struct bwn_mac {TYPE_4__ mac_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct bwn_mac*,int ,int ) ;
 int FUNC_1 (struct bwn_mac*,int,int,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_2 (struct bwn_mac*) ;

__attribute__((used)) static void FUNC_3(struct bwn_mac *VAR_19)
{
 struct bwn_phy_n *VAR_20 = VAR_19->mac_phy.phy_n;

 uint16_t *VAR_21 = ((void*)0);
 uint16_t *VAR_22 = ((void*)0);

 if (FUNC_2(VAR_19) == VAR_3) {
  if (!VAR_20->rssical_chanspec_2G.center_freq)
   return;
  VAR_21 = VAR_20->rssical_cache.rssical_radio_regs_2G;
  VAR_22 = VAR_20->rssical_cache.rssical_phy_regs_2G;
 } else {
  if (!VAR_20->rssical_chanspec_5G.center_freq)
   return;
  VAR_21 = VAR_20->rssical_cache.rssical_radio_regs_5G;
  VAR_22 = VAR_20->rssical_cache.rssical_phy_regs_5G;
 }

 if (VAR_19->mac_phy.rev >= 19) {

 } else if (VAR_19->mac_phy.rev >= 7) {
  FUNC_1(VAR_19, VAR_16, ~VAR_18,
      VAR_21[0]);
  FUNC_1(VAR_19, VAR_17, ~VAR_18,
      VAR_21[1]);
 } else {
  FUNC_1(VAR_19, VAR_0 | VAR_2, 0xE3,
      VAR_21[0]);
  FUNC_1(VAR_19, VAR_1 | VAR_2, 0xE3,
      VAR_21[1]);
 }

 FUNC_0(VAR_19, VAR_6, VAR_22[0]);
 FUNC_0(VAR_19, VAR_9, VAR_22[1]);
 FUNC_0(VAR_19, VAR_12, VAR_22[2]);
 FUNC_0(VAR_19, VAR_15, VAR_22[3]);

 FUNC_0(VAR_19, VAR_4, VAR_22[4]);
 FUNC_0(VAR_19, VAR_7, VAR_22[5]);
 FUNC_0(VAR_19, VAR_10, VAR_22[6]);
 FUNC_0(VAR_19, VAR_13, VAR_22[7]);

 FUNC_0(VAR_19, VAR_5, VAR_22[8]);
 FUNC_0(VAR_19, VAR_8, VAR_22[9]);
 FUNC_0(VAR_19, VAR_11, VAR_22[10]);
 FUNC_0(VAR_19, VAR_14, VAR_22[11]);
}
