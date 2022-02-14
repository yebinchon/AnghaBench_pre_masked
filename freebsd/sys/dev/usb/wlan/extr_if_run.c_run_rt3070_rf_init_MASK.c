
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef size_t u_int ;
struct run_softc {int mac_ver; int mac_rev; int rf24_20mhz; int rf24_40mhz; int bbp25; int bbp26; int txmixgain_2ghz; int ext_2ghz_lna; int patch_dac; } ;
struct TYPE_4__ {int reg; int val; } ;


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
 size_t FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_12 ;
 TYPE_1__* VAR_13 ;
 int FUNC_1 (struct run_softc*,int,int*) ;
 int FUNC_2 (struct run_softc*,int,int) ;
 int FUNC_3 (struct run_softc*,int) ;
 int FUNC_4 (struct run_softc*,int ,int*) ;
 int FUNC_5 (struct run_softc*,int,int,int*) ;
 int FUNC_6 (struct run_softc*,int,int*) ;
 int FUNC_7 (struct run_softc*,int,int) ;
 int FUNC_8 (struct run_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_9(struct run_softc *VAR_14)
{
 uint32_t VAR_15;
 uint8_t VAR_16, VAR_17, VAR_18, VAR_19;
 u_int VAR_20;

 FUNC_6(VAR_14, 30, &VAR_18);

 FUNC_7(VAR_14, 30, VAR_18 | 0x80);
 FUNC_3(VAR_14, 10);
 FUNC_7(VAR_14, 30, VAR_18 & ~0x80);


 if (VAR_14->mac_ver == 0x3572) {
  for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_13); VAR_20++) {
   FUNC_7(VAR_14, VAR_13[VAR_20].reg,
       VAR_13[VAR_20].val);
  }
 } else {
  for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_12); VAR_20++) {
   FUNC_7(VAR_14, VAR_12[VAR_20].reg,
       VAR_12[VAR_20].val);
  }
 }

 if (VAR_14->mac_ver == 0x3070 && VAR_14->mac_rev < 0x0201) {





  FUNC_4(VAR_14, VAR_1, &VAR_15);
  VAR_15 = (VAR_15 & ~0x0f000000) | 0x0d000000;
  FUNC_8(VAR_14, VAR_1, VAR_15);

 } else if (VAR_14->mac_ver == 0x3071) {
  FUNC_6(VAR_14, 6, &VAR_18);
  FUNC_7(VAR_14, 6, VAR_18 | 0x40);
  FUNC_7(VAR_14, 31, 0x14);

  FUNC_4(VAR_14, VAR_1, &VAR_15);
  VAR_15 &= ~0x1f000000;
  if (VAR_14->mac_rev < 0x0211)
   VAR_15 |= 0x0d000000;
  else
   VAR_15 |= 0x01000000;
  FUNC_8(VAR_14, VAR_1, VAR_15);


  FUNC_4(VAR_14, VAR_0, &VAR_15);
  FUNC_8(VAR_14, VAR_0, VAR_15 & ~0x20);

 } else if (VAR_14->mac_ver == 0x3572) {
  FUNC_6(VAR_14, 6, &VAR_18);
  FUNC_7(VAR_14, 6, VAR_18 | 0x40);


  FUNC_4(VAR_14, VAR_1, &VAR_15);
  VAR_15 = (VAR_15 & ~0x1f000000) | 0x0d000000;
  FUNC_8(VAR_14, VAR_1, VAR_15);

  if (VAR_14->mac_rev < 0x0211 || !VAR_14->patch_dac) {
   FUNC_3(VAR_14, 1);

   VAR_15 = (VAR_15 & ~0x1f000000) | 0x01000000;
   FUNC_8(VAR_14, VAR_1, VAR_15);
  }
 }


 FUNC_6(VAR_14, 31, &VAR_18);
 FUNC_7(VAR_14, 31, VAR_18 & ~0x20);


 VAR_14->rf24_20mhz = 0x1f;
 VAR_19 = (VAR_14->mac_ver < 0x3071) ? 0x16 : 0x13;
 FUNC_5(VAR_14, 0x07, VAR_19, &VAR_14->rf24_20mhz);


 FUNC_1(VAR_14, 4, &VAR_16);
 FUNC_2(VAR_14, 4, (VAR_16 & ~0x18) | 0x10);
 FUNC_6(VAR_14, 31, &VAR_18);
 FUNC_7(VAR_14, 31, VAR_18 | 0x20);


 VAR_14->rf24_40mhz = 0x2f;
 VAR_19 = (VAR_14->mac_ver < 0x3071) ? 0x19 : 0x15;
 FUNC_5(VAR_14, 0x27, VAR_19, &VAR_14->rf24_40mhz);


 FUNC_1(VAR_14, 4, &VAR_16);
 FUNC_2(VAR_14, 4, VAR_16 & ~0x18);

 if (VAR_14->mac_ver == 0x3572) {

  FUNC_1(VAR_14, 25, &VAR_14->bbp25);
  FUNC_1(VAR_14, 26, &VAR_14->bbp26);
 } else if (VAR_14->mac_rev < 0x0201 || VAR_14->mac_rev < 0x0211)
  FUNC_7(VAR_14, 27, 0x03);

 FUNC_4(VAR_14, VAR_2, &VAR_15);
 FUNC_8(VAR_14, VAR_2, VAR_15 | 1);

 if (VAR_14->mac_ver == 0x3070 || VAR_14->mac_ver == 0x3071) {
  FUNC_6(VAR_14, 17, &VAR_18);
  VAR_18 &= ~VAR_10;
  if ((VAR_14->mac_ver == 0x3070 ||
       (VAR_14->mac_ver == 0x3071 && VAR_14->mac_rev >= 0x0211)) &&
      !VAR_14->ext_2ghz_lna)
   VAR_18 |= 0x20;
  VAR_17 = (VAR_14->mac_ver == 0x3070) ? 1 : 2;
  if (VAR_14->txmixgain_2ghz >= VAR_17)
   VAR_18 = (VAR_18 & ~0x7) | VAR_14->txmixgain_2ghz;
  FUNC_7(VAR_14, 17, VAR_18);
 }

 if (VAR_14->mac_ver == 0x3071) {
  FUNC_6(VAR_14, 1, &VAR_18);
  VAR_18 &= ~(VAR_4 | VAR_8);
  VAR_18 |= VAR_3 | VAR_5 | VAR_9;
  FUNC_7(VAR_14, 1, VAR_18);

  FUNC_6(VAR_14, 15, &VAR_18);
  FUNC_7(VAR_14, 15, VAR_18 & ~VAR_11);

  FUNC_6(VAR_14, 20, &VAR_18);
  FUNC_7(VAR_14, 20, VAR_18 & ~VAR_6);

  FUNC_6(VAR_14, 21, &VAR_18);
  FUNC_7(VAR_14, 21, VAR_18 & ~VAR_7);
 }

 if (VAR_14->mac_ver == 0x3070 || VAR_14->mac_ver == 0x3071) {

  FUNC_6(VAR_14, 27, &VAR_18);
  VAR_18 &= ~0x77;
  if (VAR_14->mac_rev < 0x0211)
   VAR_18 |= 0x03;
  FUNC_7(VAR_14, 27, VAR_18);
 }
 return (0);
}
