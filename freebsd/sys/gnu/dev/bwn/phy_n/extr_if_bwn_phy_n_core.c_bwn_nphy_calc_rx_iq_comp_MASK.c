
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct bwn_phy_n_iq_comp {int a0; int b0; int a1; int b1; } ;
struct bwn_nphy_iq_est {int iq0_prod; int i0_pwr; int q0_pwr; int iq1_prod; int i1_pwr; int q1_pwr; } ;
struct TYPE_2__ {int rev; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;
typedef int int32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bwn_mac*,int,struct bwn_phy_n_iq_comp*) ;
 int FUNC_2 (struct bwn_mac*,struct bwn_nphy_iq_est*,int,int,int) ;
 int FUNC_3 (struct bwn_mac*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct bwn_mac *VAR_0, uint8_t VAR_1)
{
 int VAR_2;
 int32_t VAR_3;
 uint32_t VAR_4;
 uint32_t VAR_5;
 int VAR_6, VAR_7;
 int VAR_8, VAR_9;
 uint16_t VAR_10, VAR_11, VAR_12;

 struct bwn_nphy_iq_est VAR_13;
 struct bwn_phy_n_iq_comp VAR_14;
 struct bwn_phy_n_iq_comp VAR_15 = { };
 bool VAR_16 = 0;

 if (VAR_1 == 0)
  return;

 FUNC_1(VAR_0, 0, &VAR_14);
 FUNC_1(VAR_0, 1, &VAR_15);
 FUNC_2(VAR_0, &VAR_13, 0x4000, 32, 0);
 VAR_15 = VAR_14;

 for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  if (VAR_2 == 0 && (VAR_1 & 1)) {
   VAR_3 = VAR_13.iq0_prod;
   VAR_4 = VAR_13.i0_pwr;
   VAR_5 = VAR_13.q0_pwr;
  } else if (VAR_2 == 1 && (VAR_1 & 2)) {
   VAR_3 = VAR_13.iq1_prod;
   VAR_4 = VAR_13.i1_pwr;
   VAR_5 = VAR_13.q1_pwr;
  } else {
   continue;
  }

  if (VAR_4 + VAR_5 < 2) {
   VAR_16 = 1;
   break;
  }

  VAR_6 = FUNC_4(FUNC_0(VAR_3));
  VAR_7 = FUNC_4(VAR_5);

  VAR_8 = VAR_6 - 20;
  if (VAR_8 >= 0) {
   VAR_11 = -((VAR_3 << (30 - VAR_6)) + (VAR_4 >> (1 + VAR_8)));
   VAR_10 = VAR_4 >> VAR_8;
  } else {
   VAR_11 = -((VAR_3 << (30 - VAR_6)) + (VAR_4 << (-1 - VAR_8)));
   VAR_10 = VAR_4 << -VAR_8;
  }
  if (VAR_10 == 0) {
   VAR_16 = 1;
   break;
  }
  VAR_11 /= VAR_10;

  VAR_9 = VAR_7 - 11;
  if (VAR_9 >= 0) {
   VAR_12 = (VAR_5 << (31 - VAR_7));
   VAR_10 = VAR_4 >> VAR_9;
  } else {
   VAR_12 = (VAR_5 << (31 - VAR_7));
   VAR_10 = VAR_4 << -VAR_9;
  }
  if (VAR_10 == 0) {
   VAR_16 = 1;
   break;
  }
  VAR_12 = FUNC_3(VAR_0, VAR_12 / VAR_10 - VAR_11 * VAR_11) - (1 << 10);

  if (VAR_2 == 0 && (VAR_1 & 0x1)) {
   if (VAR_0->mac_phy.rev >= 3) {
    VAR_15.a0 = VAR_11 & 0x3FF;
    VAR_15.b0 = VAR_12 & 0x3FF;
   } else {
    VAR_15.a0 = VAR_12 & 0x3FF;
    VAR_15.b0 = VAR_11 & 0x3FF;
   }
  } else if (VAR_2 == 1 && (VAR_1 & 0x2)) {
   if (VAR_0->mac_phy.rev >= 3) {
    VAR_15.a1 = VAR_11 & 0x3FF;
    VAR_15.b1 = VAR_12 & 0x3FF;
   } else {
    VAR_15.a1 = VAR_12 & 0x3FF;
    VAR_15.b1 = VAR_11 & 0x3FF;
   }
  }
 }

 if (VAR_16)
  VAR_15 = VAR_14;

 FUNC_1(VAR_0, 1, &VAR_15);
}
