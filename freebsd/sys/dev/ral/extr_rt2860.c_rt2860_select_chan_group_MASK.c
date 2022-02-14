
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct rt2860_softc {int* lna; int nrxchains; int mac_ver; int ntxchains; int sc_flags; scalar_t__ ext_5ghz_lna; scalar_t__ ext_2ghz_lna; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rt2860_softc*,int ) ;
 int FUNC_2 (struct rt2860_softc*,int ,int) ;
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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (struct rt2860_softc*,int,int) ;

__attribute__((used)) static void
FUNC_4(struct rt2860_softc *VAR_17, int VAR_18)
{
 uint32_t VAR_19;
 uint8_t VAR_20;

 FUNC_3(VAR_17, 62, 0x37 - VAR_17->lna[VAR_18]);
 FUNC_3(VAR_17, 63, 0x37 - VAR_17->lna[VAR_18]);
 FUNC_3(VAR_17, 64, 0x37 - VAR_17->lna[VAR_18]);
 FUNC_3(VAR_17, 86, 0x00);

 if (VAR_18 == 0) {
  if (VAR_17->ext_2ghz_lna) {
   FUNC_3(VAR_17, 82, 0x62);
   FUNC_3(VAR_17, 75, 0x46);
  } else {
   FUNC_3(VAR_17, 82, 0x84);
   FUNC_3(VAR_17, 75, 0x50);
  }
 } else {
  if (VAR_17->ext_5ghz_lna) {
   FUNC_3(VAR_17, 82, 0xf2);
   FUNC_3(VAR_17, 75, 0x46);
  } else {
   FUNC_3(VAR_17, 82, 0xf2);
   FUNC_3(VAR_17, 75, 0x50);
  }
 }

 VAR_19 = FUNC_1(VAR_17, VAR_12);
 VAR_19 &= ~(VAR_0 | VAR_1);
 VAR_19 |= (VAR_18 == 0) ? VAR_0 : VAR_1;
 FUNC_2(VAR_17, VAR_12, VAR_19);


 VAR_19 = VAR_10 | VAR_11 | VAR_3;
 if (VAR_17->nrxchains > 1)
  VAR_19 |= VAR_4;
 if (VAR_17->mac_ver == 0x3593 && VAR_17->nrxchains > 2)
  VAR_19 |= VAR_14;
 if (VAR_18 == 0) {
  VAR_19 |= VAR_7;
  if (VAR_17->ntxchains > 1)
   VAR_19 |= VAR_8;
  if (VAR_17->mac_ver == 0x3593 && VAR_17->ntxchains > 2)
   VAR_19 |= VAR_16;
 } else {
  VAR_19 |= VAR_5;
  if (VAR_17->ntxchains > 1)
   VAR_19 |= VAR_6;
  if (VAR_17->mac_ver == 0x3593 && VAR_17->ntxchains > 2)
   VAR_19 |= VAR_15;
 }
 FUNC_2(VAR_17, VAR_13, VAR_19);

 if (VAR_17->mac_ver == 0x3593) {
  VAR_19 = FUNC_1(VAR_17, VAR_2);
  if (VAR_17->sc_flags & VAR_9) {
   VAR_19 &= ~0x01010000;
   if (VAR_18 == 0)
    VAR_19 |= 0x00010000;
  } else {
   VAR_19 &= ~0x00008080;
   if (VAR_18 == 0)
    VAR_19 |= 0x00000080;
  }
  VAR_19 = (VAR_19 & ~0x00001000) | 0x00000010;
  FUNC_2(VAR_17, VAR_2, VAR_19);
 }


 if (VAR_18 == 0) {
  if (VAR_17->mac_ver >= 0x3071)
   VAR_20 = 0x1c + VAR_17->lna[0] * 2;
  else
   VAR_20 = 0x2e + VAR_17->lna[0];
 } else {
  VAR_20 = 0x32 + (VAR_17->lna[VAR_18] * 5) / 3;
 }
 FUNC_3(VAR_17, 66, VAR_20);

 FUNC_0(1000);
}
