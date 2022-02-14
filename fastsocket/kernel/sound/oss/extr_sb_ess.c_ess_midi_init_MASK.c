
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct address_info {int io_base; int irq; } ;
struct TYPE_5__ {int submodel; } ;
typedef TYPE_1__ sb_devc ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int,unsigned char) ;

int FUNC_3(sb_devc * VAR_0, struct address_info *VAR_1)
{
 unsigned char VAR_2, VAR_3;

 VAR_2 = FUNC_1 (VAR_0, 0x40) & 0x03;

 if (VAR_0->submodel < 8) {
  FUNC_2 (VAR_0, 0x40, VAR_2 | 0x03);
  return 0;
 }
 VAR_3 = (VAR_1->io_base & 0x0f0) >> 4;

 if (VAR_3 > 3) {
  FUNC_2 (VAR_0, 0x40, VAR_2);
  return 0;
 }
 VAR_2 |= VAR_3 << 3;

 VAR_3 = 1;



 switch (FUNC_0(VAR_1->irq)) {
  case 9:
   VAR_3 = 0x4;
   break;
  case 5:
   VAR_3 = 0x5;
   break;
  case 7:
   VAR_3 = 0x6;
   break;
  case 10:
   VAR_3 = 0x7;
   break;
  default:
   return 0;
 }

 VAR_2 |= VAR_3 << 5;
 FUNC_2 (VAR_0, 0x40, VAR_2 | 0x03);

 return 1;
}
