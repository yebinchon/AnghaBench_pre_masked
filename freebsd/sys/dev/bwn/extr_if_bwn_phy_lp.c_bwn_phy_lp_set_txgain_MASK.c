
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct bwn_txgain {int tg_pad; int tg_pga; int tg_gm; int tg_dac; } ;
struct TYPE_2__ {int rev; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bwn_mac*,int ,int,int) ;
 int VAR_0 ;
 int FUNC_2 (struct bwn_mac*,int ,int) ;
 int FUNC_3 (struct bwn_mac*) ;
 int FUNC_4 (struct bwn_mac*,int ) ;
 int FUNC_5 (struct bwn_mac*) ;

__attribute__((used)) static void
FUNC_6(struct bwn_mac *VAR_1, struct bwn_txgain *VAR_2)
{
 uint16_t VAR_3;

 if (VAR_1->mac_phy.rev < 2) {
  FUNC_1(VAR_1, VAR_0, 0xf800,
      (VAR_2->tg_pad << 7) | (VAR_2->tg_pga << 3) | VAR_2->tg_gm);
  FUNC_4(VAR_1, VAR_2->tg_dac);
  FUNC_5(VAR_1);
  return;
 }

 VAR_3 = FUNC_3(VAR_1);
 FUNC_2(VAR_1, VAR_0,
     (VAR_2->tg_pga << 8) | VAR_2->tg_gm);
 FUNC_1(VAR_1, FUNC_0(0xfb), 0x8000,
     VAR_2->tg_pad | (VAR_3 << 6));
 FUNC_2(VAR_1, FUNC_0(0xfc), (VAR_2->tg_pga << 8) | VAR_2->tg_gm);
 FUNC_1(VAR_1, FUNC_0(0xfd), 0x8000,
     VAR_2->tg_pad | (VAR_3 << 8));
 FUNC_4(VAR_1, VAR_2->tg_dac);
 FUNC_5(VAR_1);
}
