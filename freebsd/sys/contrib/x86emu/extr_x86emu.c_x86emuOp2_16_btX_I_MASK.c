
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct x86emu {int cur_rh; } ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct x86emu*,int*) ;
 int FUNC_2 (struct x86emu*) ;
 int FUNC_3 (struct x86emu*,int) ;
 int FUNC_4 (struct x86emu*) ;

__attribute__((used)) static void
FUNC_5(struct x86emu *VAR_1)
{
 int VAR_2;

 uint16_t VAR_3, VAR_4;
 uint8_t VAR_5;

 FUNC_2(VAR_1);
 if (VAR_1->cur_rh < 4)
  FUNC_4(VAR_1);

 VAR_3 = FUNC_1(VAR_1, &VAR_5);
 VAR_2 = VAR_5 & 0xF;
 VAR_4 = (0x1 << VAR_2);
 switch (VAR_1->cur_rh) {
 case 5:
  FUNC_3(VAR_1, VAR_3 | VAR_4);
  break;
 case 6:
  FUNC_3(VAR_1, VAR_3 & ~VAR_4);
  break;
 case 7:
  FUNC_3(VAR_1, VAR_3 ^ VAR_4);
  break;
 }
 FUNC_0(VAR_3 & VAR_4, VAR_0);
}
