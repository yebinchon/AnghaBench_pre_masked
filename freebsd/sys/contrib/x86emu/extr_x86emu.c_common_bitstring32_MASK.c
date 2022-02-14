
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct x86emu {int dummy; } ;
typedef int int16_t ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct x86emu*,int) ;
 int* FUNC_2 (struct x86emu*) ;
 int FUNC_3 (struct x86emu*) ;
 int FUNC_4 (struct x86emu*,int) ;

__attribute__((used)) static void
FUNC_5(struct x86emu *VAR_1, int VAR_2)
{
 int VAR_3;
 uint32_t VAR_4, *VAR_5, VAR_6;

 FUNC_3(VAR_1);
 VAR_5 = FUNC_2(VAR_1);
 VAR_4 = FUNC_1(VAR_1, (int16_t) *VAR_5 >> 5);
 VAR_3 = *VAR_5 & 0x1F;
 VAR_6 = 0x1 << VAR_3;
 FUNC_0(VAR_4 & VAR_6, VAR_0);

 switch (VAR_2) {
 case 0:
  break;
 case 1:
  FUNC_4(VAR_1, VAR_4 | VAR_6);
  break;
 case 2:
  FUNC_4(VAR_1, VAR_4 & ~VAR_6);
  break;
 case 3:
  FUNC_4(VAR_1, VAR_4 ^ VAR_6);
  break;
 }
}
