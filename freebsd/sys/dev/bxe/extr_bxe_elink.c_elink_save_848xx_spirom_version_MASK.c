
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct elink_reg_set {int member_1; int member_2; int reg; int val; int const devad; int const member_0; } ;
struct elink_phy {int ver_addr; } ;
struct bxe_softc {int dummy; } ;


 int FUNC_0 (struct elink_reg_set*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bxe_softc*,char*) ;
 int const VAR_0 ;

 int FUNC_3 (struct bxe_softc*,struct elink_phy*,int const,int,int*) ;
 int FUNC_4 (struct bxe_softc*,struct elink_phy*,int const,int,int) ;
 scalar_t__ FUNC_5 (struct elink_phy*) ;
 int FUNC_6 (struct bxe_softc*,int ,int,int ) ;

__attribute__((used)) static void FUNC_7(struct elink_phy *VAR_1,
         struct bxe_softc *VAR_2,
         uint8_t VAR_3)
{
 uint16_t VAR_4, VAR_5, VAR_6, VAR_7;
 static struct elink_reg_set VAR_8[] = {
  {128, 0xA819, 0x0014},
  {128, 0xA81A, 0xc200},
  {128, 0xA81B, 0x0000},
  {128, 0xA81C, 0x0300},
  {128, 0xA817, 0x0009}
 };
 uint16_t VAR_9;

 if (FUNC_5(VAR_1)) {
  FUNC_3(VAR_2, VAR_1, VAR_0, 0x400f, &VAR_9);
  FUNC_6(VAR_2, VAR_3, VAR_9 & 0xfff,
    VAR_1->ver_addr);
 } else {


  for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_8); VAR_7++)
   FUNC_4(VAR_2, VAR_1, VAR_8[VAR_7].devad,
      VAR_8[VAR_7].reg, VAR_8[VAR_7].val);

  for (VAR_6 = 0; VAR_6 < 100; VAR_6++) {
   FUNC_3(VAR_2, VAR_1, 128, 0xA818, &VAR_4);
   if (VAR_4 & 1)
    break;
   FUNC_1(5);
  }
  if (VAR_6 == 100) {
   FUNC_2(VAR_2, "Unable to read 848xx "
     "phy fw version(1)\n");
   FUNC_6(VAR_2, VAR_3, 0,
        VAR_1->ver_addr);
   return;
  }



  FUNC_4(VAR_2, VAR_1, 128, 0xA819, 0x0000);
  FUNC_4(VAR_2, VAR_1, 128, 0xA81A, 0xc200);
  FUNC_4(VAR_2, VAR_1, 128, 0xA817, 0x000A);
  for (VAR_6 = 0; VAR_6 < 100; VAR_6++) {
   FUNC_3(VAR_2, VAR_1, 128, 0xA818, &VAR_4);
   if (VAR_4 & 1)
    break;
   FUNC_1(5);
  }
  if (VAR_6 == 100) {
   FUNC_2(VAR_2, "Unable to read 848xx phy fw "
     "version(2)\n");
   FUNC_6(VAR_2, VAR_3, 0,
        VAR_1->ver_addr);
   return;
  }


  FUNC_3(VAR_2, VAR_1, 128, 0xA81B, &VAR_9);

  FUNC_3(VAR_2, VAR_1, 128, 0xA81C, &VAR_5);

  FUNC_6(VAR_2, VAR_3, (VAR_5<<16) | VAR_9,
       VAR_1->ver_addr);
 }

}
