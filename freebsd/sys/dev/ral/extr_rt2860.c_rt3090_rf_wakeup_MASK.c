
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
 int VAR_11 ;
 int FUNC_2 (struct rt2860_softc*,int) ;
 int FUNC_3 (struct rt2860_softc*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct rt2860_softc *VAR_12)
{
 uint32_t VAR_13;
 uint8_t VAR_14;

 if (VAR_12->mac_ver == 0x3593) {

  VAR_14 = FUNC_2(VAR_12, 1);
  FUNC_3(VAR_12, 1, VAR_14 | VAR_9);


  VAR_14 = FUNC_2(VAR_12, 3);
  FUNC_3(VAR_12, 3, VAR_14 | VAR_10);


  VAR_14 = FUNC_2(VAR_12, 6);
  FUNC_3(VAR_12, 6, VAR_14 | VAR_11);


  VAR_14 = FUNC_2(VAR_12, 2);
  FUNC_3(VAR_12, 2, VAR_14 | VAR_7);


  VAR_14 = FUNC_2(VAR_12, 22);
  VAR_14 &= ~VAR_3;
  VAR_14 |= 1 << VAR_4;
  FUNC_3(VAR_12, 22, VAR_14);


  VAR_14 = FUNC_2(VAR_12, 46);
  FUNC_3(VAR_12, 46, VAR_14 | VAR_8);

  VAR_14 = FUNC_2(VAR_12, 20);
  VAR_14 &= ~(VAR_6 | VAR_5);
  FUNC_3(VAR_12, 20, VAR_14);
 } else {

  VAR_14 = FUNC_2(VAR_12, 1);
  FUNC_3(VAR_12, 1, VAR_14 | VAR_1);


  VAR_14 = FUNC_2(VAR_12, 7);
  FUNC_3(VAR_12, 7, VAR_14 | 0x30);

  VAR_14 = FUNC_2(VAR_12, 9);
  FUNC_3(VAR_12, 9, VAR_14 | 0x0e);


  VAR_14 = FUNC_2(VAR_12, 21);
  FUNC_3(VAR_12, 21, VAR_14 | VAR_2);


  VAR_14 = FUNC_2(VAR_12, 27);
  VAR_14 &= ~0x77;
  if (VAR_12->mac_rev < 0x0211)
   VAR_14 |= 0x03;
  FUNC_3(VAR_12, 27, VAR_14);
 }
 if (VAR_12->patch_dac && VAR_12->mac_rev < 0x0211) {
  VAR_13 = FUNC_0(VAR_12, VAR_0);
  VAR_13 = (VAR_13 & ~0x1f000000) | 0x0d000000;
  FUNC_1(VAR_12, VAR_0, VAR_13);
 }
}
