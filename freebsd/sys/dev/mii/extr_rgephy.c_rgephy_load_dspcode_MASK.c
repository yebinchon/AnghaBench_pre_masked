
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_softc {scalar_t__ mii_mpd_model; scalar_t__ mii_mpd_rev; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct mii_softc*,int,int) ;
 int FUNC_2 (struct mii_softc*,int) ;
 int FUNC_3 (struct mii_softc*,int,int) ;
 int FUNC_4 (struct mii_softc*,int,int) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_5(struct mii_softc *VAR_2)
{
 int VAR_3;

 if (VAR_2->mii_mpd_model == VAR_0 ||
     VAR_2->mii_mpd_rev >= VAR_1)
  return;

 FUNC_4(VAR_2, 31, 0x0001);
 FUNC_4(VAR_2, 21, 0x1000);
 FUNC_4(VAR_2, 24, 0x65C7);
 FUNC_1(VAR_2, 4, 0x0800);
 VAR_3 = FUNC_2(VAR_2, 4) & 0xFFF;
 FUNC_4(VAR_2, 4, VAR_3);
 FUNC_4(VAR_2, 3, 0x00A1);
 FUNC_4(VAR_2, 2, 0x0008);
 FUNC_4(VAR_2, 1, 0x1020);
 FUNC_4(VAR_2, 0, 0x1000);
 FUNC_3(VAR_2, 4, 0x0800);
 FUNC_1(VAR_2, 4, 0x0800);
 VAR_3 = (FUNC_2(VAR_2, 4) & 0xFFF) | 0x7000;
 FUNC_4(VAR_2, 4, VAR_3);
 FUNC_4(VAR_2, 3, 0xFF41);
 FUNC_4(VAR_2, 2, 0xDE60);
 FUNC_4(VAR_2, 1, 0x0140);
 FUNC_4(VAR_2, 0, 0x0077);
 VAR_3 = (FUNC_2(VAR_2, 4) & 0xFFF) | 0xA000;
 FUNC_4(VAR_2, 4, VAR_3);
 FUNC_4(VAR_2, 3, 0xDF01);
 FUNC_4(VAR_2, 2, 0xDF20);
 FUNC_4(VAR_2, 1, 0xFF95);
 FUNC_4(VAR_2, 0, 0xFA00);
 VAR_3 = (FUNC_2(VAR_2, 4) & 0xFFF) | 0xB000;
 FUNC_4(VAR_2, 4, VAR_3);
 FUNC_4(VAR_2, 3, 0xFF41);
 FUNC_4(VAR_2, 2, 0xDE20);
 FUNC_4(VAR_2, 1, 0x0140);
 FUNC_4(VAR_2, 0, 0x00BB);
 VAR_3 = (FUNC_2(VAR_2, 4) & 0xFFF) | 0xF000;
 FUNC_4(VAR_2, 4, VAR_3);
 FUNC_4(VAR_2, 3, 0xDF01);
 FUNC_4(VAR_2, 2, 0xDF20);
 FUNC_4(VAR_2, 1, 0xFF95);
 FUNC_4(VAR_2, 0, 0xBF00);
 FUNC_3(VAR_2, 4, 0x0800);
 FUNC_1(VAR_2, 4, 0x0800);
 FUNC_4(VAR_2, 31, 0x0000);

 FUNC_0(40);
}
