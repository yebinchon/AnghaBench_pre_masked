
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwi_softc {int dummy; } ;
struct bwi_rf {int rf_ctrl_rd; scalar_t__ rf_ctrl_adj; } ;
struct bwi_mac {struct bwi_softc* mac_sc; struct bwi_rf mac_rf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bwi_softc*,int ) ;
 int FUNC_1 (struct bwi_softc*,int ,int) ;

uint16_t
FUNC_2(struct bwi_mac *VAR_2, uint16_t VAR_3)
{
 struct bwi_rf *VAR_4 = &VAR_2->mac_rf;
 struct bwi_softc *VAR_5 = VAR_2->mac_sc;

 VAR_3 |= VAR_4->rf_ctrl_rd;
 if (VAR_4->rf_ctrl_adj) {

  if (VAR_3 < 0x70)
   VAR_3 += 0x80;
  else if (VAR_3 < 0x80)
   VAR_3 += 0x70;
 }

 FUNC_1(VAR_5, VAR_0, VAR_3);
 return FUNC_0(VAR_5, VAR_1);
}
