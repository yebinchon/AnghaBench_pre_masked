
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
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
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (struct bwn_mac*,int,int) ;
 scalar_t__ FUNC_1 (struct bwn_mac*) ;

__attribute__((used)) static void FUNC_2(struct bwn_mac *VAR_17)
{
 struct bwn_phy *VAR_18 = &VAR_17->mac_phy;

 uint8_t VAR_19;
 uint16_t VAR_20;

 if (VAR_18->rev >= 19) {

 } else if (VAR_18->rev >= 7) {
  for (VAR_19 = 0; VAR_19 < 2; VAR_19++) {
   VAR_20 = VAR_19 ? 0x190 : 0x170;
   if (FUNC_1(VAR_17) == VAR_16) {
    FUNC_0(VAR_17, VAR_20 + 0x5, 0x5);
    FUNC_0(VAR_17, VAR_20 + 0x9, 0xE);
    if (VAR_18->rev != 5)
     FUNC_0(VAR_17, VAR_20 + 0xA, 0);
    if (VAR_18->rev != 7)
     FUNC_0(VAR_17, VAR_20 + 0xB, 1);
    else
     FUNC_0(VAR_17, VAR_20 + 0xB, 0x31);
   } else {
    FUNC_0(VAR_17, VAR_20 + 0x5, 0x9);
    FUNC_0(VAR_17, VAR_20 + 0x9, 0xC);
    FUNC_0(VAR_17, VAR_20 + 0xB, 0x0);
    if (VAR_18->rev != 5)
     FUNC_0(VAR_17, VAR_20 + 0xA, 1);
    else
     FUNC_0(VAR_17, VAR_20 + 0xA, 0x31);
   }
   FUNC_0(VAR_17, VAR_20 + 0x6, 0);
   FUNC_0(VAR_17, VAR_20 + 0x7, 0);
   FUNC_0(VAR_17, VAR_20 + 0x8, 3);
   FUNC_0(VAR_17, VAR_20 + 0xC, 0);
  }
 } else {
  if (FUNC_1(VAR_17) == VAR_16)
   FUNC_0(VAR_17, VAR_2, 0x128);
  else
   FUNC_0(VAR_17, VAR_2, 0x80);
  FUNC_0(VAR_17, VAR_1, 0);
  FUNC_0(VAR_17, VAR_0, 0x29);

  for (VAR_19 = 0; VAR_19 < 2; VAR_19++) {
   VAR_20 = VAR_19 ? VAR_4 : VAR_3;

   FUNC_0(VAR_17, VAR_20 | VAR_6, 0);
   FUNC_0(VAR_17, VAR_20 | VAR_5, 0);
   FUNC_0(VAR_17, VAR_20 | VAR_12, 3);
   FUNC_0(VAR_17, VAR_20 | VAR_13, 0);
   FUNC_0(VAR_17, VAR_20 | VAR_9, 8);
   FUNC_0(VAR_17, VAR_20 | VAR_10, 0);
   FUNC_0(VAR_17, VAR_20 | VAR_11, 0);
   if (FUNC_1(VAR_17) == VAR_16) {
    FUNC_0(VAR_17, VAR_20 | VAR_14,
      0x5);
    if (VAR_18->rev != 5)
     FUNC_0(VAR_17, VAR_20 | VAR_7,
       0x00);
    if (VAR_18->rev >= 5)
     FUNC_0(VAR_17, VAR_20 | VAR_8,
       0x31);
    else
     FUNC_0(VAR_17, VAR_20 | VAR_8,
       0x11);
    FUNC_0(VAR_17, VAR_20 | VAR_15,
      0xE);
   } else {
    FUNC_0(VAR_17, VAR_20 | VAR_14,
      0x9);
    FUNC_0(VAR_17, VAR_20 | VAR_7, 0x31);
    FUNC_0(VAR_17, VAR_20 | VAR_8, 0x0);
    FUNC_0(VAR_17, VAR_20 | VAR_15,
      0xC);
   }
  }
 }
}
