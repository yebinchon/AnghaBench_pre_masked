
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct address_info {int dummy; } ;


 int FUNC_0 (int ) ;
 unsigned char FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(struct address_info *VAR_0)
{
 unsigned char VAR_1;

 if ((VAR_1 = FUNC_1(0xc44)) == 0xff)
 {
  FUNC_0(FUNC_3("init_deskpro_m: Dead port 0xc44\n"));
  return 0;
 }

 FUNC_2(0x10, 0xc44);
 FUNC_2(0x40, 0xc45);
 FUNC_2(0x00, 0xc46);
 FUNC_2(0xe8, 0xc47);
 FUNC_2(0x14, 0xc44);
 FUNC_2(0x40, 0xc45);
 FUNC_2(0x00, 0xc46);
 FUNC_2(0xe8, 0xc47);
 FUNC_2(0x10, 0xc44);

 return 1;
}
