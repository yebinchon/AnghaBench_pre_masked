
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int MCE_bit; int base; } ;
typedef TYPE_1__ ad1848_info ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(ad1848_info * VAR_0)
{
 int VAR_1 = 1000;
 unsigned short VAR_2;

 while (VAR_1 > 0 && FUNC_0(VAR_0->base) == 0x80)
  VAR_1--;

 VAR_0->MCE_bit = 0x40;
 VAR_2 = FUNC_0(FUNC_1(VAR_0));
 if (VAR_2 & 0x40)
 {
  return;
 }
 FUNC_2((VAR_0->MCE_bit), FUNC_1(VAR_0));
}
