
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct rt2860_softc {int mac_rev; int mac_ver; int rf24_20mhz; int rf24_40mhz; scalar_t__ rf_rev; int ntxchains; int nrxchains; int txmixgain_2ghz; int ext_2ghz_lna; scalar_t__ patch_dac; } ;
struct TYPE_3__ {int reg; int val; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rt2860_softc*,int ) ;
 int FUNC_2 (struct rt2860_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct rt2860_softc*,int) ;
 int FUNC_5 (struct rt2860_softc*,int,int) ;
 TYPE_1__* VAR_13 ;
 int FUNC_6 (struct rt2860_softc*,int,int,int*) ;
 int FUNC_7 (struct rt2860_softc*,int) ;
 int FUNC_8 (struct rt2860_softc*,int,int) ;
 int FUNC_9 (struct rt2860_softc*,int ) ;

__attribute__((used)) static int
FUNC_10(struct rt2860_softc *VAR_14)
{
 uint32_t VAR_15;
 uint8_t VAR_16, VAR_17;
 int VAR_18;

 VAR_16 = FUNC_7(VAR_14, 30);

 FUNC_8(VAR_14, 30, VAR_16 | 0x80);
 FUNC_0(1000);
 FUNC_8(VAR_14, 30, VAR_16 & ~0x80);

 VAR_15 = FUNC_1(VAR_14, VAR_1);
 VAR_15 &= ~0x1f000000;
 if (VAR_14->patch_dac && VAR_14->mac_rev < 0x0211)
  VAR_15 |= 0x0d000000;
 else
  VAR_15 |= 0x01000000;
 FUNC_2(VAR_14, VAR_1, VAR_15);


 VAR_15 = FUNC_1(VAR_14, VAR_0);
 FUNC_2(VAR_14, VAR_0, VAR_15 & ~0x20);


 for (VAR_18 = 0; VAR_18 < FUNC_3(VAR_13); VAR_18++) {
  FUNC_8(VAR_14, VAR_13[VAR_18].reg,
      VAR_13[VAR_18].val);
 }


 FUNC_8(VAR_14, 31, 0x14);

 VAR_16 = FUNC_7(VAR_14, 6);
 FUNC_8(VAR_14, 6, VAR_16 | 0x40);

 if (VAR_14->mac_ver != 0x3593) {

  VAR_14->rf24_20mhz = 0x1f;
  FUNC_6(VAR_14, 0x07, 0x16, &VAR_14->rf24_20mhz);


  VAR_17 = FUNC_4(VAR_14, 4);
  FUNC_5(VAR_14, 4, (VAR_17 & ~0x08) | 0x10);
  VAR_16 = FUNC_7(VAR_14, 31);
  FUNC_8(VAR_14, 31, VAR_16 | 0x20);


  VAR_14->rf24_40mhz = 0x2f;
  FUNC_6(VAR_14, 0x27, 0x19, &VAR_14->rf24_40mhz);


  VAR_17 = FUNC_4(VAR_14, 4);
  FUNC_5(VAR_14, 4, VAR_17 & ~0x18);
 }
 if (VAR_14->mac_rev < 0x0211)
  FUNC_8(VAR_14, 27, 0x03);

 VAR_15 = FUNC_1(VAR_14, VAR_2);
 FUNC_2(VAR_14, VAR_2, VAR_15 | 1);

 if (VAR_14->rf_rev == VAR_3)
  FUNC_9(VAR_14, 0);

 VAR_17 = FUNC_4(VAR_14, 138);
 if (VAR_14->mac_ver == 0x3593) {
  if (VAR_14->ntxchains == 1)
   VAR_17 |= 0x60;
  else if (VAR_14->ntxchains == 2)
   VAR_17 |= 0x40;
  if (VAR_14->nrxchains == 1)
   VAR_17 &= ~0x06;
  else if (VAR_14->nrxchains == 2)
   VAR_17 &= ~0x04;
 } else {
  if (VAR_14->ntxchains == 1)
   VAR_17 |= 0x20;
  if (VAR_14->nrxchains == 1)
   VAR_17 &= ~0x02;
 }
 FUNC_5(VAR_14, 138, VAR_17);

 VAR_16 = FUNC_7(VAR_14, 1);
 VAR_16 &= ~(VAR_5 | VAR_9);
 VAR_16 |= VAR_4 | VAR_6 | VAR_10;
 FUNC_8(VAR_14, 1, VAR_16);

 VAR_16 = FUNC_7(VAR_14, 15);
 FUNC_8(VAR_14, 15, VAR_16 & ~VAR_12);

 VAR_16 = FUNC_7(VAR_14, 17);
 VAR_16 &= ~VAR_11;
 if (VAR_14->mac_rev >= 0x0211 && !VAR_14->ext_2ghz_lna)
  VAR_16 |= 0x20;
 if (VAR_14->txmixgain_2ghz >= 2)
  VAR_16 = (VAR_16 & ~0x7) | VAR_14->txmixgain_2ghz;
 FUNC_8(VAR_14, 17, VAR_16);

 VAR_16 = FUNC_7(VAR_14, 20);
 FUNC_8(VAR_14, 20, VAR_16 & ~VAR_7);

 VAR_16 = FUNC_7(VAR_14, 21);
 FUNC_8(VAR_14, 21, VAR_16 & ~VAR_8);

 return (0);
}
