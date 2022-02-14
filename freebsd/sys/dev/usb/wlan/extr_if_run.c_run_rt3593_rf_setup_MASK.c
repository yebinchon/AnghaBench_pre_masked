
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct run_softc {int mac_rev; int txmixgain_2ghz; int nrxchains; scalar_t__ patch_dac; } ;


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
 int FUNC_0 (struct run_softc*,int,int*) ;
 int FUNC_1 (struct run_softc*,int,int) ;
 int FUNC_2 (struct run_softc*,int,int*) ;
 int FUNC_3 (struct run_softc*,int,int) ;
 int FUNC_4 (struct run_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct run_softc *VAR_10)
{
 uint8_t VAR_11, VAR_12;

 if (VAR_10->mac_rev >= 0x0211) {

  FUNC_1(VAR_10, 103, 0xc0);
 }
 FUNC_4(VAR_10, VAR_0, 0);
 if (VAR_10->mac_rev < 0x0211) {
  FUNC_4(VAR_10, VAR_1,
      VAR_10->patch_dac ? 0x2c : 0x0f);
 } else
  FUNC_4(VAR_10, VAR_1, 0);

 FUNC_2(VAR_10, 50, &VAR_12);
 FUNC_3(VAR_10, 50, VAR_12 & ~VAR_5);

 FUNC_2(VAR_10, 51, &VAR_12);
 VAR_12 = (VAR_12 & ~(VAR_4 | 0x0c)) |
     ((VAR_10->txmixgain_2ghz & 0x07) << 2);
 FUNC_3(VAR_10, 51, VAR_12);

 FUNC_2(VAR_10, 38, &VAR_12);
 FUNC_3(VAR_10, 38, VAR_12 & ~VAR_8);

 FUNC_2(VAR_10, 39, &VAR_12);
 FUNC_3(VAR_10, 39, VAR_12 & ~VAR_9);

 FUNC_2(VAR_10, 1, &VAR_12);
 FUNC_3(VAR_10, 1, VAR_12 & ~(VAR_3 | VAR_2));

 FUNC_2(VAR_10, 30, &VAR_12);
 VAR_12 = (VAR_12 & ~0x18) | 0x10;
 FUNC_3(VAR_10, 30, VAR_12);


 FUNC_0(VAR_10, 105, &VAR_11);
 if (VAR_10->nrxchains > 1)
  FUNC_1(VAR_10, 105, VAR_11 | VAR_7);


 FUNC_0(VAR_10, 4, &VAR_11);
 FUNC_1(VAR_10, 4, VAR_11 | VAR_6);

 FUNC_1(VAR_10, 92, 0x02);
 FUNC_1(VAR_10, 82, 0x82);
 FUNC_1(VAR_10, 106, 0x05);
 FUNC_1(VAR_10, 104, 0x92);
 FUNC_1(VAR_10, 88, 0x90);
 FUNC_1(VAR_10, 148, 0xc8);
 FUNC_1(VAR_10, 47, 0x48);
 FUNC_1(VAR_10, 120, 0x50);

 FUNC_1(VAR_10, 163, 0x9d);


 FUNC_1(VAR_10, 142, 0x06);
 FUNC_1(VAR_10, 143, 0xa0);
 FUNC_1(VAR_10, 142, 0x07);
 FUNC_1(VAR_10, 143, 0xa1);
 FUNC_1(VAR_10, 142, 0x08);
 FUNC_1(VAR_10, 143, 0xa2);

 FUNC_1(VAR_10, 31, 0x08);
 FUNC_1(VAR_10, 68, 0x0b);
 FUNC_1(VAR_10, 105, 0x04);
}
