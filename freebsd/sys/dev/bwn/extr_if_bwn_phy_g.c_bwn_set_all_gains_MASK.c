
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwn_phy {int rev; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bwn_mac*,int,int,int) ;
 int FUNC_1 (struct bwn_mac*,int ,int) ;
 int FUNC_2 (struct bwn_mac*,int,int,int) ;

__attribute__((used)) static void
FUNC_3(struct bwn_mac *VAR_2, int16_t VAR_3, int16_t VAR_4,
    int16_t VAR_5)
{
 struct bwn_phy *VAR_6 = &VAR_2->mac_phy;
 uint16_t VAR_7;
 uint16_t VAR_8 = 0x08, VAR_9 = 0x18;
 uint16_t VAR_10;
 uint16_t VAR_11;

 if (VAR_6->rev <= 1) {
  VAR_8 = 0x10;
  VAR_9 = 0x20;
 }

 VAR_11 = VAR_0;
 if (VAR_6->rev <= 1)
  VAR_11 = VAR_1;
 for (VAR_7 = 0; VAR_7 < 4; VAR_7++)
  FUNC_2(VAR_2, VAR_11, VAR_7, VAR_3);

 for (VAR_7 = VAR_8; VAR_7 < VAR_9; VAR_7++)
  FUNC_2(VAR_2, VAR_11, VAR_7, VAR_4);

 if (VAR_5 != -1) {
  VAR_10 = ((uint16_t) VAR_5 << 14) | ((uint16_t) VAR_5 << 6);
  FUNC_0(VAR_2, 0x04a0, 0xbfbf, VAR_10);
  FUNC_0(VAR_2, 0x04a1, 0xbfbf, VAR_10);
  FUNC_0(VAR_2, 0x04a2, 0xbfbf, VAR_10);
 }
 FUNC_1(VAR_2, 0, 1);
}
