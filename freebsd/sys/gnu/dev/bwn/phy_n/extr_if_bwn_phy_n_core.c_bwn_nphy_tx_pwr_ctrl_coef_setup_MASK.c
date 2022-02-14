
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct bwn_phy_n {scalar_t__ hang_avoid; } ;
struct TYPE_2__ {int rev; struct bwn_phy_n* phy_n; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct bwn_mac*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct bwn_mac*,int) ;
 int FUNC_3 (struct bwn_mac*,int ,int,int*) ;
 int FUNC_4 (struct bwn_mac*,int ,int ,int) ;
 int* VAR_6 ;

__attribute__((used)) static void FUNC_5(struct bwn_mac *VAR_7)
{
 struct bwn_phy_n *VAR_8 = VAR_7->mac_phy.phy_n;
 int VAR_9, VAR_10;
 uint32_t VAR_11;
 uint32_t VAR_12, VAR_13, VAR_14, VAR_15;

 uint16_t VAR_16[7];

 if (VAR_8->hang_avoid)
  FUNC_2(VAR_7, 1);

 FUNC_3(VAR_7, FUNC_0(15, 80), 7, VAR_16);

 for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
  VAR_11 = ((VAR_16[VAR_9 * 2] & 0x3FF) << 10) |
   (VAR_16[VAR_9 * 2 + 1] & 0x3FF);
  FUNC_1(VAR_7, VAR_0,
    (((VAR_9 + 26) << 10) | 320));
  for (VAR_10 = 0; VAR_10 < 128; VAR_10++) {
   FUNC_1(VAR_7, VAR_1,
     ((VAR_11 >> 16) & 0xFFFF));
   FUNC_1(VAR_7, VAR_2,
     (VAR_11 & 0xFFFF));
  }
 }

 for (VAR_9 = 0; VAR_9 < 2; VAR_9++) {
  VAR_11 = VAR_16[5 + VAR_9];
  VAR_14 = (VAR_11 >> 8) & 0xFF;
  VAR_15 = (VAR_11 & 0xFF);
  FUNC_1(VAR_7, VAR_0,
    (((VAR_9 + 26) << 10) | 448));

  if (VAR_7->mac_phy.rev >= 3) {
   VAR_12 = VAR_14;
   VAR_13 = VAR_15;
   VAR_11 = ((VAR_12 & 0xFF) << 8) | (VAR_13 & 0xFF);
  }

  for (VAR_10 = 0; VAR_10 < 128; VAR_10++) {
   if (VAR_7->mac_phy.rev < 3) {
    VAR_12 = (VAR_14 * VAR_6[VAR_10] + 128) >> 8;
    VAR_13 = (VAR_15 * VAR_6[VAR_10] + 128) >> 8;
    VAR_11 = ((VAR_12 & 0xFF) << 8) |
     (VAR_13 & 0xFF);
   }
   FUNC_1(VAR_7, VAR_1,
     ((VAR_11 >> 16) & 0xFFFF));
   FUNC_1(VAR_7, VAR_2,
     (VAR_11 & 0xFFFF));
  }
 }

 if (VAR_7->mac_phy.rev >= 3) {
  FUNC_4(VAR_7, VAR_3,
    VAR_4, 0xFFFF);
  FUNC_4(VAR_7, VAR_3,
    VAR_5, 0xFFFF);
 }

 if (VAR_8->hang_avoid)
  FUNC_2(VAR_7, 0);
}
