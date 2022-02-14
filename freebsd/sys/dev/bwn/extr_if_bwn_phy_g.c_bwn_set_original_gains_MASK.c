
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwn_phy {int rev; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bwn_mac*,int,int,int) ;
 int FUNC_1 (struct bwn_mac*,int ,int) ;
 int FUNC_2 (struct bwn_mac*,int,int,int) ;

__attribute__((used)) static void
FUNC_3(struct bwn_mac *VAR_2)
{
 struct bwn_phy *VAR_3 = &VAR_2->mac_phy;
 uint16_t VAR_4, VAR_5;
 uint16_t VAR_6;
 uint16_t VAR_7 = 0x0008, VAR_8 = 0x0018;

 if (VAR_3->rev <= 1) {
  VAR_7 = 0x0010;
  VAR_8 = 0x0020;
 }

 VAR_6 = VAR_0;
 if (VAR_3->rev <= 1)
  VAR_6 = VAR_1;
 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  VAR_5 = (VAR_4 & 0xfffc);
  VAR_5 |= (VAR_4 & 0x0001) << 1;
  VAR_5 |= (VAR_4 & 0x0002) >> 1;

  FUNC_2(VAR_2, VAR_6, VAR_4, VAR_5);
 }

 for (VAR_4 = VAR_7; VAR_4 < VAR_8; VAR_4++)
  FUNC_2(VAR_2, VAR_6, VAR_4, VAR_4 - VAR_7);

 FUNC_0(VAR_2, 0x04a0, 0xbfbf, 0x4040);
 FUNC_0(VAR_2, 0x04a1, 0xbfbf, 0x4040);
 FUNC_0(VAR_2, 0x04a2, 0xbfbf, 0x4000);
 FUNC_1(VAR_2, 0, 1);
}
