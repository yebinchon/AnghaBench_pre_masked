
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct address_info {int io_base; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*,...) ;

__attribute__((used)) static int FUNC_4(struct address_info *VAR_0)
{
 unsigned char VAR_1;

 if ((VAR_1 = FUNC_1(0xc44)) == 0xff)
 {
  FUNC_0(FUNC_3("init_deskpro: Dead port 0xc44\n"));
  return 0;
 }
 FUNC_2((VAR_1 | 0x04), 0xc44);
 if (FUNC_1(0xc44) != 0x04)
 {
  FUNC_0(FUNC_3("init_deskpro: Invalid bank1 signature in port 0xc44\n"));
  return 0;
 }
 VAR_1 = 0x58;

 switch (VAR_0->io_base)
 {
  case 0x530:
   VAR_1 |= 0x00;
   break;
  case 0x604:
   VAR_1 |= 0x01;
   break;
  case 0xf40:
   VAR_1 |= 0x02;
   break;
  case 0xe80:
   VAR_1 |= 0x03;
   break;
  default:
   FUNC_0(FUNC_3("init_deskpro: Invalid MSS port %x\n", VAR_0->io_base));
   return 0;
 }
 FUNC_2((VAR_1 & ~0x04), 0xc44);
 FUNC_2((VAR_1 & ~0x04), 0xc44);
 FUNC_2((0x88), 0xc45);
 FUNC_2((VAR_1 | 0x04), 0xc44);
 FUNC_2((0x10), 0xc45);
 FUNC_2((VAR_1 & ~0x04), 0xc44);
 FUNC_2((0x03), 0xc46);
 FUNC_2((VAR_1 | 0x04), 0xc44);
 FUNC_2((0x11), 0xc46);
 FUNC_2((VAR_1 & ~0x04), 0xc44);
 FUNC_2((0x7c), 0xc47);
 FUNC_2((VAR_1 | 0x04), 0xc44);
 FUNC_2((0x00), 0xc47);
 FUNC_2((0x80), 0xc6f);





 return 1;
}
