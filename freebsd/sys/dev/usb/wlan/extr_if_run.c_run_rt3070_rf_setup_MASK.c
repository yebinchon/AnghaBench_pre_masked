
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct run_softc {int mac_ver; int mac_rev; int ntxchains; int nrxchains; int txmixgain_2ghz; TYPE_1__* rf; scalar_t__ patch_dac; } ;
struct TYPE_2__ {int reg; int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct run_softc*,int,int*) ;
 int FUNC_1 (struct run_softc*,int,int) ;
 int FUNC_2 (struct run_softc*,int,int*) ;
 int FUNC_3 (struct run_softc*,int,int) ;
 int FUNC_4 (struct run_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct run_softc *VAR_2)
{
 uint8_t VAR_3, VAR_4;
 int VAR_5;

 if (VAR_2->mac_ver == 0x3572) {

  if (VAR_2->mac_rev >= 0x0201)
   FUNC_1(VAR_2, 103, 0xc0);

  FUNC_0(VAR_2, 138, &VAR_3);
  if (VAR_2->ntxchains == 1)
   VAR_3 |= 0x20;
  if (VAR_2->nrxchains == 1)
   VAR_3 &= ~0x02;
  FUNC_1(VAR_2, 138, VAR_3);

  if (VAR_2->mac_rev >= 0x0211) {

   FUNC_0(VAR_2, 31, &VAR_3);
   FUNC_1(VAR_2, 31, VAR_3 & ~0x03);
  }

  FUNC_2(VAR_2, 16, &VAR_4);
  VAR_4 = (VAR_4 & ~0x07) | VAR_2->txmixgain_2ghz;
  FUNC_3(VAR_2, 16, VAR_4);

 } else if (VAR_2->mac_ver == 0x3071) {
  if (VAR_2->mac_rev >= 0x0211) {

   FUNC_1(VAR_2, 103, 0xc0);


   FUNC_0(VAR_2, 31, &VAR_3);
   FUNC_1(VAR_2, 31, VAR_3 & ~0x03);
  }

  FUNC_0(VAR_2, 138, &VAR_3);
  if (VAR_2->ntxchains == 1)
   VAR_3 |= 0x20;
  if (VAR_2->nrxchains == 1)
   VAR_3 &= ~0x02;
  FUNC_1(VAR_2, 138, VAR_3);

  FUNC_4(VAR_2, VAR_0, 0);
  if (VAR_2->mac_rev < 0x0211) {
   FUNC_4(VAR_2, VAR_1,
       VAR_2->patch_dac ? 0x2c : 0x0f);
  } else
   FUNC_4(VAR_2, VAR_1, 0);

 } else if (VAR_2->mac_ver == 0x3070) {
  if (VAR_2->mac_rev >= 0x0201) {

   FUNC_1(VAR_2, 103, 0xc0);


   FUNC_0(VAR_2, 31, &VAR_3);
   FUNC_1(VAR_2, 31, VAR_3 & ~0x03);
  }

  if (VAR_2->mac_rev < 0x0201) {
   FUNC_4(VAR_2, VAR_0, 0);
   FUNC_4(VAR_2, VAR_1, 0x2c);
  } else
   FUNC_4(VAR_2, VAR_1, 0);
 }


 if (VAR_2->mac_ver >= 0x3071) {
  for (VAR_5 = 0; VAR_5 < 10; VAR_5++) {
   if (VAR_2->rf[VAR_5].reg == 0 || VAR_2->rf[VAR_5].reg == 0xff)
    continue;
   FUNC_3(VAR_2, VAR_2->rf[VAR_5].reg, VAR_2->rf[VAR_5].val);
  }
 }
}
