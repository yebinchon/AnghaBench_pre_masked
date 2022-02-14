
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int base; } ;
typedef TYPE_1__ sb_devc ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(sb_devc * VAR_0)
{
 unsigned char VAR_1;

 switch (VAR_0->base)
 {
  case 0x220:
   VAR_1 = 0x04;
   break;
  case 0x230:
   VAR_1 = 0x05;
   break;
  case 0x240:
   VAR_1 = 0x06;
   break;
  case 0x250:
   VAR_1 = 0x07;
   break;
  default:
   return;
 }

 FUNC_0(FUNC_3("Doing ESS1688 address selection\n"));







 FUNC_1(0x229);
 FUNC_1(0x229);
 FUNC_1(0x229);


 FUNC_1(0x22b);
 FUNC_1(0x229);
 FUNC_1(0x22b);
 FUNC_1(0x229);
 FUNC_1(0x229);
 FUNC_1(0x22b);
 FUNC_1(0x229);


 FUNC_1(VAR_0->base);
 if (FUNC_4(VAR_0))
  return;
}
