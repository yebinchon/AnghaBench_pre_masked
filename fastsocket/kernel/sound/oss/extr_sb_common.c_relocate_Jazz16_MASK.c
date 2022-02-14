
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct address_info {int io_base; } ;
typedef int sb_devc ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(sb_devc * VAR_3, struct address_info *VAR_4)
{
 unsigned char VAR_5 = 0;
 unsigned long VAR_6;

 if (VAR_0 != 0 && VAR_0 != VAR_4->io_base)
  return;

 switch (VAR_4->io_base)
 {
  case 0x220:
   VAR_5 = 1;
   break;
  case 0x240:
   VAR_5 = 2;
   break;
  case 0x260:
   VAR_5 = 3;
   break;
  default:
   return;
 }
 VAR_5 = VAR_1 = VAR_5 << 5;
 VAR_0 = VAR_4->io_base;




 FUNC_1(&VAR_2, VAR_6);
 FUNC_0((0xAF), 0x201);
 FUNC_0((0x50), 0x201);
 FUNC_0((VAR_5), 0x201);
 FUNC_2(&VAR_2, VAR_6);
}
