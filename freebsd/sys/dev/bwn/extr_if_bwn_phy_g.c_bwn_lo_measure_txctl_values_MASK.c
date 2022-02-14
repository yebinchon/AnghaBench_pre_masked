
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct bwn_txpwr_loctl {int tx_bias; int tx_magn; int txctl_measured_time; } ;
struct bwn_phy_g {int pg_max_lb_gain; struct bwn_txpwr_loctl pg_loctl; } ;
struct bwn_phy {int rev; int rf_ver; int rf_rev; struct bwn_phy_g phy_g; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct bwn_phy*) ;
 scalar_t__ FUNC_2 (struct bwn_phy*) ;
 int FUNC_3 (struct bwn_mac*,int,int) ;
 int FUNC_4 (struct bwn_mac*,int) ;
 int FUNC_5 (struct bwn_mac*,int,int,int) ;
 int FUNC_6 (struct bwn_mac*,int,int) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int const*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct bwn_mac*,int ,int,int) ;
 int FUNC_12 (struct bwn_mac*,int*,int *) ;
 int FUNC_13 (struct bwn_mac*,int) ;

__attribute__((used)) static void
FUNC_14(struct bwn_mac *VAR_0)
{
 struct bwn_phy *VAR_1 = &VAR_0->mac_phy;
 struct bwn_phy_g *VAR_2 = &VAR_1->phy_g;
 struct bwn_txpwr_loctl *VAR_3 = &VAR_2->pg_loctl;
 uint16_t VAR_4, VAR_5;
 uint16_t VAR_6, VAR_7;
 uint16_t VAR_8;

 static const uint8_t VAR_9[] = {
  0x09, 0x08, 0x0a, 0x01, 0x00,
  0x02, 0x05, 0x04, 0x06,
 };
 static const uint8_t VAR_10[] = {
  0x70, 0x40,
 };

 if (!FUNC_1(VAR_1)) {
  VAR_8 = 6;
  VAR_6 = 2;
  VAR_7 = 0;
 } else {
  int VAR_11;

  VAR_6 = 0;
  VAR_11 = VAR_2->pg_max_lb_gain / 2;
  if (VAR_11 > 10) {
   VAR_8 = 0;
   VAR_7 = FUNC_10(10 - VAR_11) / 6;
   VAR_7 = FUNC_8(FUNC_7(VAR_7, 0), 15);
  } else {
   int VAR_12;
   int VAR_13;

   VAR_7 = 0;
   VAR_12 = 0x24;
   if ((VAR_1->rev >= 2) &&
       (VAR_1->rf_ver == 0x2050) && (VAR_1->rf_rev == 8))
    VAR_12 = 0x3c;
   VAR_13 = VAR_11;
   if ((10 - VAR_11) < VAR_12)
    VAR_13 = (10 - VAR_11);
   if (VAR_13 < 0)
    VAR_13 += 6;
   else
    VAR_13 += 3;
   VAR_12 /= 4;
   VAR_13 /= 4;
   if (VAR_13 >= VAR_12)
    VAR_8 = VAR_12;
   else
    VAR_8 = VAR_13;
  }
 }
 FUNC_5(VAR_0, 0x43, 0xfff0, VAR_8);
 FUNC_13(VAR_0, 2);

 VAR_4 = FUNC_12(VAR_0, &VAR_5, ((void*)0));
 VAR_5 = ~VAR_5;
 FUNC_3(VAR_0, VAR_4, VAR_5);

 if (FUNC_2(VAR_1)) {
  int VAR_14, VAR_15;
  int VAR_16;
  int VAR_17 = 0xffff;
  uint8_t VAR_18, VAR_19;

  for (VAR_14 = 0; VAR_14 < FUNC_9(VAR_10); VAR_14++) {
   VAR_18 = VAR_10[VAR_14];
   FUNC_5(VAR_0, 0x52, 0xff0f, VAR_18);
   for (VAR_15 = 0; VAR_15 < FUNC_9(VAR_9); VAR_15++) {
    VAR_19 = VAR_9[VAR_15];
    FUNC_5(VAR_0, 0x52, 0xfff0, VAR_19);
    VAR_16 = FUNC_11(VAR_0, 0, VAR_7,
        VAR_6);
    if (VAR_16 < VAR_17) {
     VAR_3->tx_bias = VAR_19;
     VAR_3->tx_magn = VAR_18;
     VAR_17 = VAR_16;
    }
    if (VAR_3->tx_bias == 0)
     break;
   }
   FUNC_6(VAR_0, 0x52,
       (FUNC_4(VAR_0, 0x52)
        & 0xff00) | VAR_3->tx_bias | VAR_3->
       tx_magn);
  }
 } else {
  VAR_3->tx_magn = 0;
  VAR_3->tx_bias = 0;
  FUNC_3(VAR_0, 0x52, 0xfff0);
 }

 FUNC_0(VAR_3->txctl_measured_time);
}
