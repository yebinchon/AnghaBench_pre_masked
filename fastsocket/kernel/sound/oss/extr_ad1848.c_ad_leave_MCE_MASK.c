
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int MCE_bit; int base; } ;
typedef TYPE_1__ ad1848_info ;


 unsigned char FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_5(ad1848_info * VAR_0)
{
 unsigned char VAR_1, VAR_2;
 int VAR_3 = 1000;

 while (VAR_3 > 0 && FUNC_1(VAR_0->base) == 0x80)
  VAR_3--;

 VAR_2 = FUNC_0(VAR_0, 9);

 VAR_0->MCE_bit = 0x00;
 VAR_1 = FUNC_1(FUNC_2(VAR_0));
 FUNC_3((0x00), FUNC_2(VAR_0));

 if ((VAR_1 & 0x40) == 0)
 {
  return;
 }
 FUNC_3((0x00), FUNC_2(VAR_0));
 if (VAR_2 & 0x08)
  FUNC_4(VAR_0);
}
