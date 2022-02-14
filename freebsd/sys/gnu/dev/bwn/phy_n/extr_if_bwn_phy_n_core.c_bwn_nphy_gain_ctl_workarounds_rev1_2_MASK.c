
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct bwn_phy_n {scalar_t__ elna_gain_config; scalar_t__ gain_boost; } ;
struct TYPE_2__ {int rev; struct bwn_phy_n* phy_n; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;


 scalar_t__ VAR_0 ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bwn_mac*,int ,int ) ;
 int FUNC_2 (struct bwn_mac*,int ,int,int) ;
 int FUNC_3 (struct bwn_mac*,int ,int) ;
 scalar_t__ FUNC_4 (struct bwn_mac*) ;
 scalar_t__ FUNC_5 (struct bwn_mac*) ;
 int FUNC_6 (struct bwn_mac*) ;
 int FUNC_7 (struct bwn_mac*,int,int*,int*,int) ;

__attribute__((used)) static void FUNC_8(struct bwn_mac *VAR_33)
{
 struct bwn_phy_n *VAR_34 = VAR_33->mac_phy.phy_n;

 uint8_t VAR_35, VAR_36;
 uint8_t VAR_37;
 uint16_t VAR_38;
 uint8_t VAR_39[3] = { 6, 8, 7 };
 uint8_t VAR_40[3] = { 10, 30, 1 };


 FUNC_1(VAR_33, VAR_3, VAR_4);
 FUNC_1(VAR_33, VAR_14, VAR_15);


 FUNC_3(VAR_33, VAR_11, 0x84);
 FUNC_3(VAR_33, VAR_22, 0x84);

 if (!FUNC_5(VAR_33)) {

  FUNC_3(VAR_33, VAR_24, 0x002B);
  FUNC_3(VAR_33, VAR_25, 0x002B);
  FUNC_3(VAR_33, VAR_31, 0x0009);
  FUNC_3(VAR_33, VAR_32, 0x0009);
 }


 FUNC_2(VAR_33, VAR_6,
   ~VAR_7, 21);
 FUNC_2(VAR_33, VAR_17,
   ~VAR_18, 21);

 if (!FUNC_5(VAR_33)) {
  FUNC_2(VAR_33, VAR_3,
   ~VAR_5, 0x1);
  FUNC_2(VAR_33, VAR_14,
   ~VAR_16, 0x1);
  FUNC_2(VAR_33, VAR_1,
   ~VAR_2, 0x1);
  FUNC_2(VAR_33, VAR_12,
   ~VAR_13, 0x1);
 }

 FUNC_3(VAR_33, VAR_23, 0x809C);

 if (VAR_34->gain_boost) {
  if (FUNC_4(VAR_33) == VAR_0 &&
      FUNC_5(VAR_33))
   VAR_37 = 4;
  else
   VAR_37 = 5;
 } else {
  VAR_37 = FUNC_5(VAR_33) ? 6 : 7;
 }


 FUNC_2(VAR_33, VAR_8, ~VAR_9,
   VAR_37 << VAR_10);
 FUNC_2(VAR_33, VAR_19, ~VAR_20,
   VAR_37 << VAR_21);

 FUNC_3(VAR_33, VAR_29, 0x1D06);

 for (VAR_35 = 0; VAR_35 < 4; VAR_35++)
  FUNC_3(VAR_33, VAR_30, (VAR_37 << 8 | 0x7C));

 FUNC_6(VAR_33);

 if (VAR_34->elna_gain_config) {
  FUNC_3(VAR_33, VAR_29, 0x0808);
  FUNC_3(VAR_33, VAR_30, 0x0);
  FUNC_3(VAR_33, VAR_30, 0x1);
  FUNC_3(VAR_33, VAR_30, 0x1);
  FUNC_3(VAR_33, VAR_30, 0x1);

  FUNC_3(VAR_33, VAR_29, 0x0C08);
  FUNC_3(VAR_33, VAR_30, 0x0);
  FUNC_3(VAR_33, VAR_30, 0x1);
  FUNC_3(VAR_33, VAR_30, 0x1);
  FUNC_3(VAR_33, VAR_30, 0x1);

  FUNC_3(VAR_33, VAR_29, 0x1D06);

  for (VAR_35 = 0; VAR_35 < 4; VAR_35++)
   FUNC_3(VAR_33, VAR_30,
      (VAR_37 << 8 | 0x74));
 }

 if (VAR_33->mac_phy.rev == 2) {
  for (VAR_35 = 0; VAR_35 < 4; VAR_35++) {
   FUNC_3(VAR_33, VAR_29,
     (0x0400 * VAR_35) + 0x0020);
   for (VAR_36 = 0; VAR_36 < 21; VAR_36++) {
    VAR_38 = VAR_36 * (VAR_35 < 2 ? 3 : 1);
    FUNC_3(VAR_33,
     VAR_30, VAR_38);
   }
  }
 }

 FUNC_7(VAR_33, 5, VAR_39, VAR_40, 3);
 FUNC_2(VAR_33, VAR_26,
  ~VAR_27 & 0xFFFF,
  0x5A << VAR_28);

 if (FUNC_4(VAR_33) == VAR_0)
  FUNC_2(VAR_33, FUNC_0(0xC5D), 0xFF80, 4);
}
