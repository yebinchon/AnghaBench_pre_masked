
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct run_softc {int mac_rev; int mac_ver; int ntxchains; int nrxchains; scalar_t__ patch_dac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct run_softc*,int,int*) ;
 int FUNC_1 (struct run_softc*,int,int) ;
 int FUNC_2 (struct run_softc*,int,int*) ;
 int FUNC_3 (struct run_softc*,int,int) ;
 int FUNC_4 (struct run_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct run_softc *VAR_5)
{
 uint8_t VAR_6, VAR_7;

 if (VAR_5->mac_rev >= 0x0211) {

  FUNC_1(VAR_5, 103, 0xc0);

  if (VAR_5->mac_ver != 0x5592) {

   FUNC_0(VAR_5, 31, &VAR_6);
   FUNC_1(VAR_5, 31, VAR_6 & ~0x03);
  }
 }

 FUNC_0(VAR_5, 138, &VAR_6);
 if (VAR_5->ntxchains == 1)
  VAR_6 |= 0x20;
 if (VAR_5->nrxchains == 1)
  VAR_6 &= ~0x02;
 FUNC_1(VAR_5, 138, VAR_6);

 FUNC_2(VAR_5, 38, &VAR_7);
 FUNC_3(VAR_5, 38, VAR_7 & ~VAR_3);

 FUNC_2(VAR_5, 39, &VAR_7);
 FUNC_3(VAR_5, 39, VAR_7 & ~VAR_4);


 FUNC_0(VAR_5, 4, &VAR_6);
 FUNC_1(VAR_5, 4, VAR_6 | VAR_2);

 FUNC_2(VAR_5, 30, &VAR_7);
 VAR_7 = (VAR_7 & ~0x18) | 0x10;
 FUNC_3(VAR_5, 30, VAR_7);

 if (VAR_5->mac_ver != 0x5592) {
  FUNC_4(VAR_5, VAR_0, 0);
  if (VAR_5->mac_rev < 0x0211) {
   FUNC_4(VAR_5, VAR_1,
       VAR_5->patch_dac ? 0x2c : 0x0f);
  } else
   FUNC_4(VAR_5, VAR_1, 0);
 }
}
