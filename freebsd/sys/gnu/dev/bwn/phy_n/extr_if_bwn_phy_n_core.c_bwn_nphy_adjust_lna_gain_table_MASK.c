
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct bwn_phy_n {scalar_t__ hang_avoid; scalar_t__ elna_gain_config; scalar_t__ gain_boost; } ;
struct TYPE_2__ {struct bwn_phy_n* phy_n; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;
typedef int int16_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct bwn_mac*,int ,int ,int) ;
 scalar_t__ FUNC_2 (struct bwn_mac*) ;
 int FUNC_3 (struct bwn_mac*) ;
 int FUNC_4 (struct bwn_mac*,int) ;
 int FUNC_5 (struct bwn_mac*,int ,int,int*) ;

__attribute__((used)) static void FUNC_6(struct bwn_mac *VAR_7)
{
 struct bwn_phy_n *VAR_8 = VAR_7->mac_phy.phy_n;

 uint8_t VAR_9;
 int16_t VAR_10;
 uint16_t VAR_11[4];
 int16_t VAR_12[2];
 uint16_t VAR_13[2];
 static const uint16_t VAR_14[4] = { -2, 10, 19, 25 };

 if (VAR_8->hang_avoid)
  FUNC_4(VAR_7, 1);

 if (VAR_8->gain_boost) {
  if (FUNC_2(VAR_7) == VAR_0) {
   VAR_12[0] = 6;
   VAR_12[1] = 6;
  } else {
   VAR_10 = 40370 - 315 * FUNC_3(VAR_7);
   VAR_12[0] = ((VAR_10 >> 13) + ((VAR_10 >> 12) & 1));
   VAR_10 = 23242 - 224 * FUNC_3(VAR_7);
   VAR_12[1] = ((VAR_10 >> 13) + ((VAR_10 >> 12) & 1));
  }
 } else {
  VAR_12[0] = 0;
  VAR_12[1] = 0;
 }

 for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
  if (VAR_8->elna_gain_config) {
   VAR_11[0] = 19 + VAR_12[VAR_9];
   VAR_11[1] = 25 + VAR_12[VAR_9];
   VAR_11[2] = 25 + VAR_12[VAR_9];
   VAR_11[3] = 25 + VAR_12[VAR_9];
  } else {
   VAR_11[0] = VAR_14[0] + VAR_12[VAR_9];
   VAR_11[1] = VAR_14[1] + VAR_12[VAR_9];
   VAR_11[2] = VAR_14[2] + VAR_12[VAR_9];
   VAR_11[3] = VAR_14[3] + VAR_12[VAR_9];
  }
  FUNC_5(VAR_7, FUNC_0(VAR_9, 8), 4, VAR_11);

  VAR_13[VAR_9] = 23 + VAR_12[VAR_9];
 }

 FUNC_1(VAR_7, VAR_3, ~VAR_1,
    VAR_13[0] << VAR_2);
 FUNC_1(VAR_7, VAR_6, ~VAR_4,
    VAR_13[1] << VAR_5);

 if (VAR_8->hang_avoid)
  FUNC_4(VAR_7, 0);
}
