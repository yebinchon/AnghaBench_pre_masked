
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct rt2860_softc {int mac_rev; int mac_ver; TYPE_1__* rf; scalar_t__ patch_dac; } ;
struct TYPE_2__ {int reg; int val; } ;


 int FUNC_0 (struct rt2860_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rt2860_softc*,int) ;
 int FUNC_2 (struct rt2860_softc*,int,int) ;
 int FUNC_3 (struct rt2860_softc*,int,int ) ;

__attribute__((used)) static void
FUNC_4(struct rt2860_softc *VAR_2)
{
 uint8_t VAR_3;
 int VAR_4;

 if (VAR_2->mac_rev >= 0x0211) {

  FUNC_2(VAR_2, 103, 0xc0);


  VAR_3 = FUNC_1(VAR_2, 31);
  FUNC_2(VAR_2, 31, VAR_3 & ~0x03);
 }

 FUNC_0(VAR_2, VAR_0, 0);
 if (VAR_2->mac_rev < 0x0211) {
  FUNC_0(VAR_2, VAR_1,
      VAR_2->patch_dac ? 0x2c : 0x0f);
 } else
  FUNC_0(VAR_2, VAR_1, 0);


 if (VAR_2->mac_ver < 0x5390) {
  for (VAR_4 = 0; VAR_4 < 10; VAR_4++) {
   if (VAR_2->rf[VAR_4].reg == 0 || VAR_2->rf[VAR_4].reg == 0xff)
    continue;
   FUNC_3(VAR_2, VAR_2->rf[VAR_4].reg, VAR_2->rf[VAR_4].val);
  }
 }
}
