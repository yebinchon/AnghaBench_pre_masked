
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct bwn_txgain {int tg_dac; int tg_gm; int tg_pga; int tg_pad; } ;
struct TYPE_2__ {int rev; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bwn_mac*,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct bwn_txgain
FUNC_2(struct bwn_mac *VAR_2)
{
 struct bwn_txgain VAR_3;
 uint16_t VAR_4;

 VAR_3.tg_dac = (FUNC_1(VAR_2, VAR_0) & 0x380) >> 7;
 if (VAR_2->mac_phy.rev < 2) {
  VAR_4 = FUNC_1(VAR_2,
      VAR_1) & 0x7ff;
  VAR_3.tg_gm = VAR_4 & 0x0007;
  VAR_3.tg_pga = (VAR_4 & 0x0078) >> 3;
  VAR_3.tg_pad = (VAR_4 & 0x780) >> 7;
  return (VAR_3);
 }

 VAR_4 = FUNC_1(VAR_2, VAR_1);
 VAR_3.tg_pad = FUNC_1(VAR_2, FUNC_0(0xfb)) & 0xff;
 VAR_3.tg_gm = VAR_4 & 0xff;
 VAR_3.tg_pga = (VAR_4 >> 8) & 0xff;
 return (VAR_3);
}
