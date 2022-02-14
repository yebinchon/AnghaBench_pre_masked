
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct rt2860_softc {int mac_ver; int mac_rev; scalar_t__ patch_dac; } ;


 int FUNC_0 (struct rt2860_softc*,int ) ;
 int FUNC_1 (struct rt2860_softc*,int ,int) ;
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
 int FUNC_2 (struct rt2860_softc*,int) ;
 int FUNC_3 (struct rt2860_softc*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct rt2860_softc *VAR_11)
{
 uint32_t VAR_12;
 uint8_t VAR_13;

 VAR_13 = FUNC_2(VAR_11, 1);
 VAR_13 |= VAR_2 | VAR_1 | VAR_3 |
     VAR_5;
 if (VAR_11->mac_ver == 0x5392)
  VAR_13 |= VAR_4 | VAR_6;
 FUNC_3(VAR_11, 1, VAR_13);

 VAR_13 = FUNC_2(VAR_11, 6);
 VAR_13 |= VAR_9 | VAR_8;
 if (VAR_11->mac_ver == 0x5390)
  VAR_13 &= ~VAR_9;
 FUNC_3(VAR_11, 6, VAR_13);

 FUNC_3(VAR_11, 2, FUNC_2(VAR_11, 2) | VAR_7);

 VAR_13 = FUNC_2(VAR_11, 22);
 VAR_13 = (VAR_13 & ~0xe0) | 0x20;
 FUNC_3(VAR_11, 22, VAR_13);

 FUNC_3(VAR_11, 42, FUNC_2(VAR_11, 42) | VAR_10);
 FUNC_3(VAR_11, 20, FUNC_2(VAR_11, 20) & ~0x77);
 FUNC_3(VAR_11, 3, FUNC_2(VAR_11, 3) | VAR_8);

 if (VAR_11->patch_dac && VAR_11->mac_rev < 0x0211) {
  VAR_12 = FUNC_0(VAR_11, VAR_0);
  VAR_12 = (VAR_12 & ~0x1f000000) | 0x0d000000;
  FUNC_1(VAR_11, VAR_0, VAR_12);
 }
}
