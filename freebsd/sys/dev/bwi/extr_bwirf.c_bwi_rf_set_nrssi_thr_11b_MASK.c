
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct bwi_rf {scalar_t__ rf_type; int rf_rev; int* rf_nrssi; } ;
struct bwi_mac {TYPE_1__* mac_sc; struct bwi_rf mac_rf; } ;
typedef int int32_t ;
struct TYPE_2__ {int sc_card_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bwi_mac*,int) ;
 int FUNC_1 (struct bwi_mac*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct bwi_mac *VAR_3)
{
 struct bwi_rf *VAR_4 = &VAR_3->mac_rf;
 int32_t VAR_5;

 if (VAR_4->rf_type != VAR_2 ||
     (VAR_3->mac_sc->sc_card_flags & VAR_0) == 0)
  return;




 if (VAR_4->rf_rev >= 6) {
  VAR_5 = (VAR_4->rf_nrssi[1] - VAR_4->rf_nrssi[0]) * 32;
  VAR_5 += 20 * (VAR_4->rf_nrssi[0] + 1);
  VAR_5 /= 40;
 } else {
  VAR_5 = VAR_4->rf_nrssi[1] - 5;
 }
 if (VAR_5 < 0)
  VAR_5 = 0;
 else if (VAR_5 > 0x3e)
  VAR_5 = 0x3e;

 FUNC_0(VAR_3, VAR_1);
 FUNC_1(VAR_3, VAR_1, (((uint16_t)VAR_5) << 8) | 0x1c);

 if (VAR_4->rf_rev >= 6) {
  FUNC_1(VAR_3, 0x87, 0xe0d);
  FUNC_1(VAR_3, 0x86, 0xc0b);
  FUNC_1(VAR_3, 0x85, 0xa09);
  FUNC_1(VAR_3, 0x84, 0x808);
  FUNC_1(VAR_3, 0x83, 0x808);
  FUNC_1(VAR_3, 0x82, 0x604);
  FUNC_1(VAR_3, 0x81, 0x302);
  FUNC_1(VAR_3, 0x80, 0x100);
 }
}
