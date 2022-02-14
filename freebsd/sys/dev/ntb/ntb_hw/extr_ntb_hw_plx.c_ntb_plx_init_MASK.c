
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct ntb_plx_softc {size_t b2b_mw; int mw_count; scalar_t__ link; scalar_t__ alut; struct ntb_plx_mw_info* mw_info; } ;
struct ntb_plx_mw_info {int mw_bar; scalar_t__ mw_64bit; } ;
typedef int device_t ;


 int FUNC_0 (struct ntb_plx_softc*,int) ;
 int FUNC_1 (struct ntb_plx_softc*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (struct ntb_plx_softc*,int,int) ;
 struct ntb_plx_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_3)
{
 struct ntb_plx_softc *VAR_4 = FUNC_4(VAR_3);
 struct ntb_plx_mw_info *VAR_5;
 uint64_t VAR_6;
 int VAR_7;
 uint32_t VAR_8;

 if (VAR_4->b2b_mw >= 0) {

  VAR_5 = &VAR_4->mw_info[VAR_4->b2b_mw];
  if (VAR_5->mw_64bit) {
   FUNC_3(VAR_4, 0xe4, 0x3);
   VAR_6 = 0x2000000000000000 * VAR_5->mw_bar | 0x4;
   FUNC_3(VAR_4, FUNC_2(0), VAR_6);
   FUNC_3(VAR_4, FUNC_2(0) + 4, VAR_6 >> 32);
  } else {
   FUNC_3(VAR_4, 0xe4, 0x2);
   VAR_8 = 0x20000000 * VAR_5->mw_bar;
   FUNC_3(VAR_4, FUNC_2(0), VAR_8);
  }


  for (VAR_7 = 0; VAR_7 < VAR_4->mw_count; VAR_7++) {
   VAR_5 = &VAR_4->mw_info[VAR_7];
   if (VAR_5->mw_64bit) {
    VAR_6 = 0x2000000000000000 * VAR_5->mw_bar;
    FUNC_1(VAR_4, 0xc3c + (VAR_5->mw_bar - 2) * 4, VAR_6);
    FUNC_1(VAR_4, 0xc3c + (VAR_5->mw_bar - 2) * 4 + 4, VAR_6 >> 32);
   } else {
    VAR_8 = 0x20000000 * VAR_5->mw_bar;
    FUNC_1(VAR_4, 0xc3c + (VAR_5->mw_bar - 2) * 4, VAR_8);
   }
  }


  if (VAR_4->alut)
   FUNC_3(VAR_4, 0xc94, 0);


  for (VAR_7 = 0; VAR_7 < 32; VAR_7 += 2) {
   FUNC_3(VAR_4, 0xdb4 + VAR_7 * 2,
       0x00010001 | ((VAR_7 + 1) << 19) | (VAR_7 << 3));
  }
 }
 VAR_8 = (FUNC_0(VAR_4, 0xc90) << 16) | 0x00010001;
 FUNC_1(VAR_4, VAR_4->link ? 0xdb4 : 0xd94, VAR_8);
 FUNC_1(VAR_4, VAR_4->link ? 0xdb8 : 0xd98, 0x40210021);
 FUNC_1(VAR_4, VAR_4->link ? 0xdbc : 0xd9c, 0xc0218021);


 for (VAR_7 = 0; VAR_7 < VAR_4->mw_count; VAR_7++)
  FUNC_5(VAR_3, VAR_7);

 FUNC_6(VAR_3);
 if (VAR_4->b2b_mw >= 0)
  FUNC_3(VAR_4, VAR_2, VAR_1 | VAR_0);

 return (0);
}
