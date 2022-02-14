
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tpctl ;
struct bwi_tpctl {int bbp_atten; int rf_atten; int tp_ctrl1; } ;
struct bwi_softc {int sc_card_flags; } ;
struct bwi_rf {scalar_t__ rf_type; int rf_rev; } ;
struct bwi_mac {int mac_tpctl; struct bwi_rf mac_rf; struct bwi_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,struct bwi_tpctl*,int) ;
 int FUNC_1 (int*,int*) ;
 int FUNC_2 (struct bwi_mac*) ;
 int FUNC_3 (struct bwi_mac*,struct bwi_tpctl*) ;
 int FUNC_4 (struct bwi_mac*) ;

__attribute__((used)) static void
FUNC_5(struct bwi_mac *VAR_3, int VAR_4, int VAR_5)
{
 struct bwi_softc *VAR_6 = VAR_3->mac_sc;
 struct bwi_rf *VAR_7 = &VAR_3->mac_rf;
 struct bwi_tpctl VAR_8;
 int VAR_9, VAR_10, VAR_11;

 FUNC_0(&VAR_3->mac_tpctl, &VAR_8, sizeof(VAR_8));


 VAR_9 = VAR_8.bbp_atten;
 VAR_10 = VAR_8.rf_atten;
 VAR_11 = VAR_8.tp_ctrl1;

 VAR_9 += VAR_5;
 VAR_10 += VAR_4;

 FUNC_1(&VAR_9, &VAR_10);

 if (VAR_7->rf_type == VAR_2 && VAR_7->rf_rev == 2) {
  if (VAR_10 <= 1) {
   if (VAR_11 == 0) {
    VAR_11 = 3;
    VAR_9 += 2;
    VAR_10 += 2;
   } else if (VAR_6->sc_card_flags & VAR_0) {
    VAR_9 +=
    (VAR_1 * (VAR_10 - 2));
    VAR_10 = 2;
   }
  } else if (VAR_10 > 4 && VAR_11 != 0) {
   VAR_11 = 0;
   if (VAR_9 < 3) {
    VAR_9 += 2;
    VAR_10 -= 3;
   } else {
    VAR_9 -= 2;
    VAR_10 -= 2;
   }
  }
  FUNC_1(&VAR_9, &VAR_10);
 }

 VAR_8.bbp_atten = VAR_9;
 VAR_8.rf_atten = VAR_10;
 VAR_8.tp_ctrl1 = VAR_11;

 FUNC_2(VAR_3);
 FUNC_3(VAR_3, &VAR_8);
 FUNC_4(VAR_3);
}
