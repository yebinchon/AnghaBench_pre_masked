
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct run_softc {int* lna; int mac_ver; int nrxchains; int ntxchains; scalar_t__ ext_5ghz_lna; scalar_t__ ext_2ghz_lna; } ;


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
 int VAR_12 ;
 int FUNC_0 (struct run_softc*,int,int) ;
 int FUNC_1 (struct run_softc*,int ,int*) ;
 int FUNC_2 (struct run_softc*,int,int) ;
 int FUNC_3 (struct run_softc*,int) ;
 int FUNC_4 (struct run_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct run_softc *VAR_13, int VAR_14)
{
 uint32_t VAR_15;
 uint8_t VAR_16;

 FUNC_0(VAR_13, 62, 0x37 - VAR_13->lna[VAR_14]);
 FUNC_0(VAR_13, 63, 0x37 - VAR_13->lna[VAR_14]);
 FUNC_0(VAR_13, 64, 0x37 - VAR_13->lna[VAR_14]);
 if (VAR_13->mac_ver < 0x3572)
  FUNC_0(VAR_13, 86, 0x00);

 if (VAR_13->mac_ver == 0x3593) {
  FUNC_0(VAR_13, 77, 0x98);
  FUNC_0(VAR_13, 83, (VAR_14 == 0) ? 0x8a : 0x9a);
 }

 if (VAR_14 == 0) {
  if (VAR_13->ext_2ghz_lna) {
   if (VAR_13->mac_ver >= 0x5390)
    FUNC_0(VAR_13, 75, 0x52);
   else {
    FUNC_0(VAR_13, 82, 0x62);
    FUNC_0(VAR_13, 75, 0x46);
   }
  } else {
   if (VAR_13->mac_ver == 0x5592) {
    FUNC_0(VAR_13, 79, 0x1c);
    FUNC_0(VAR_13, 80, 0x0e);
    FUNC_0(VAR_13, 81, 0x3a);
    FUNC_0(VAR_13, 82, 0x62);

    FUNC_0(VAR_13, 195, 0x80);
    FUNC_0(VAR_13, 196, 0xe0);
    FUNC_0(VAR_13, 195, 0x81);
    FUNC_0(VAR_13, 196, 0x1f);
    FUNC_0(VAR_13, 195, 0x82);
    FUNC_0(VAR_13, 196, 0x38);
    FUNC_0(VAR_13, 195, 0x83);
    FUNC_0(VAR_13, 196, 0x32);
    FUNC_0(VAR_13, 195, 0x85);
    FUNC_0(VAR_13, 196, 0x28);
    FUNC_0(VAR_13, 195, 0x86);
    FUNC_0(VAR_13, 196, 0x19);
   } else if (VAR_13->mac_ver >= 0x5390)
    FUNC_0(VAR_13, 75, 0x50);
   else {
    FUNC_0(VAR_13, 82,
        (VAR_13->mac_ver == 0x3593) ? 0x62 : 0x84);
    FUNC_0(VAR_13, 75, 0x50);
   }
  }
 } else {
  if (VAR_13->mac_ver == 0x5592) {
   FUNC_0(VAR_13, 79, 0x18);
   FUNC_0(VAR_13, 80, 0x08);
   FUNC_0(VAR_13, 81, 0x38);
   FUNC_0(VAR_13, 82, 0x92);

   FUNC_0(VAR_13, 195, 0x80);
   FUNC_0(VAR_13, 196, 0xf0);
   FUNC_0(VAR_13, 195, 0x81);
   FUNC_0(VAR_13, 196, 0x1e);
   FUNC_0(VAR_13, 195, 0x82);
   FUNC_0(VAR_13, 196, 0x28);
   FUNC_0(VAR_13, 195, 0x83);
   FUNC_0(VAR_13, 196, 0x20);
   FUNC_0(VAR_13, 195, 0x85);
   FUNC_0(VAR_13, 196, 0x7f);
   FUNC_0(VAR_13, 195, 0x86);
   FUNC_0(VAR_13, 196, 0x7f);
  } else if (VAR_13->mac_ver == 0x3572)
   FUNC_0(VAR_13, 82, 0x94);
  else
   FUNC_0(VAR_13, 82,
       (VAR_13->mac_ver == 0x3593) ? 0x82 : 0xf2);
  if (VAR_13->ext_5ghz_lna)
   FUNC_0(VAR_13, 75, 0x46);
  else
   FUNC_0(VAR_13, 75, 0x50);
 }

 FUNC_1(VAR_13, VAR_11, &VAR_15);
 VAR_15 &= ~(VAR_0 | VAR_1);
 VAR_15 |= (VAR_14 == 0) ? VAR_0 : VAR_1;
 FUNC_4(VAR_13, VAR_11, VAR_15);


 VAR_15 = VAR_9 | VAR_10 | VAR_3;
 if (VAR_13->mac_ver == 0x3593)
  VAR_15 |= 1 << 29 | 1 << 28;
 if (VAR_13->nrxchains > 1)
  VAR_15 |= VAR_4;
 if (VAR_14 == 0) {
  VAR_15 |= VAR_7;
  if (VAR_13->ntxchains > 1)
   VAR_15 |= VAR_8;
  if (VAR_13->mac_ver == 0x3593) {
   if (VAR_13->ntxchains > 2)
    VAR_15 |= 1 << 25;
  }
 } else {
  VAR_15 |= VAR_5;
  if (VAR_13->ntxchains > 1)
   VAR_15 |= VAR_6;
 }
 if (VAR_13->mac_ver == 0x3572) {
  FUNC_2(VAR_13, 8, 0x00);
  FUNC_4(VAR_13, VAR_12, VAR_15);
  FUNC_2(VAR_13, 8, 0x80);
 } else
  FUNC_4(VAR_13, VAR_12, VAR_15);

 if (VAR_13->mac_ver == 0x5592) {
  FUNC_0(VAR_13, 195, 0x8d);
  FUNC_0(VAR_13, 196, 0x1a);
 }

 if (VAR_13->mac_ver == 0x3593) {
  FUNC_1(VAR_13, VAR_2, &VAR_15);
  VAR_15 &= ~0x01010000;
  if (VAR_14 == 0)
   VAR_15 |= 0x00010000;
  VAR_15 = (VAR_15 & ~0x00009090) | 0x00000090;
  FUNC_4(VAR_13, VAR_2, VAR_15);
 }


 if (VAR_14 == 0) {
  if (VAR_13->mac_ver >= 0x3070)
   VAR_16 = 0x1c + VAR_13->lna[0] * 2;
  else
   VAR_16 = 0x2e + VAR_13->lna[0];
 } else {
  if (VAR_13->mac_ver == 0x5592)
   VAR_16 = 0x24 + VAR_13->lna[VAR_14] * 2;
  else if (VAR_13->mac_ver == 0x3572 || VAR_13->mac_ver == 0x3593)
   VAR_16 = 0x22 + (VAR_13->lna[VAR_14] * 5) / 3;
  else
   VAR_16 = 0x32 + (VAR_13->lna[VAR_14] * 5) / 3;
 }
 FUNC_3(VAR_13, VAR_16);
}
