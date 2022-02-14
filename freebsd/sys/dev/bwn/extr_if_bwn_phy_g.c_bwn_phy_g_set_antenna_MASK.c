
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint16_t ;
struct bwn_phy {int rev; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 int FUNC_0 (struct bwn_mac*,int ) ;
 int FUNC_1 (struct bwn_mac*,int ,int) ;
 int FUNC_2 (struct bwn_mac*) ;
 int FUNC_3 (struct bwn_mac*,int) ;

void
FUNC_4(struct bwn_mac *VAR_15, int VAR_16)
{
 struct bwn_phy *VAR_17 = &VAR_15->mac_phy;
 uint64_t VAR_18;
 int VAR_19 = 0;
 uint16_t VAR_20;

 if (VAR_16 == VAR_0 || VAR_16 == VAR_1)
  VAR_19 = 1;

 VAR_18 = FUNC_2(VAR_15) & ~VAR_2;
 FUNC_3(VAR_15, VAR_18);

 FUNC_1(VAR_15, VAR_8,
     (FUNC_0(VAR_15, VAR_8) & ~VAR_9) |
     ((VAR_19 ? VAR_1 : VAR_16)
  << VAR_10));

 if (VAR_19) {
  VAR_20 = FUNC_0(VAR_15, VAR_4);
  if (VAR_16 == VAR_1)
   VAR_20 &= ~VAR_5;
  else
   VAR_20 |= VAR_5;
  FUNC_1(VAR_15, VAR_4, VAR_20);
 }
 VAR_20 = FUNC_0(VAR_15, VAR_6);
 if (VAR_19)
  VAR_20 |= VAR_7;
 else
  VAR_20 &= ~VAR_7;
 FUNC_1(VAR_15, VAR_6, VAR_20);
 if (VAR_17->rev >= 2) {
  FUNC_1(VAR_15, VAR_12,
      FUNC_0(VAR_15, VAR_12) | VAR_13);
  FUNC_1(VAR_15, VAR_11,
      (FUNC_0(VAR_15, VAR_11) & 0xff00) |
      0x15);
  if (VAR_17->rev == 2)
   FUNC_1(VAR_15, VAR_3, 8);
  else
   FUNC_1(VAR_15, VAR_3,
       (FUNC_0(VAR_15, VAR_3) & 0xff00) |
       8);
 }
 if (VAR_17->rev >= 6)
  FUNC_1(VAR_15, VAR_14, 0xdc);

 VAR_18 |= VAR_2;
 FUNC_3(VAR_15, VAR_18);
}
