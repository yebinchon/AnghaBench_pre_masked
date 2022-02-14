
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct x86emu {int cur_mod; } ;
typedef int int8_t ;
typedef int int16_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__* FUNC_2 (struct x86emu*) ;
 int FUNC_3 (struct x86emu*) ;
 scalar_t__* FUNC_4 (struct x86emu*) ;
 scalar_t__ FUNC_5 (struct x86emu*) ;
 scalar_t__ FUNC_6 (struct x86emu*,int) ;
 int FUNC_7 (struct x86emu*) ;
 int FUNC_8 (struct x86emu*) ;

__attribute__((used)) static void
FUNC_9(struct x86emu *VAR_2, int VAR_3)
{
 uint32_t VAR_4;
 uint16_t *VAR_5, VAR_6;
 int16_t VAR_7;
 uint32_t VAR_8;

 FUNC_7(VAR_2);
 VAR_5 = FUNC_2(VAR_2);
 if (VAR_2->cur_mod != 3) {
  VAR_4 = FUNC_3(VAR_2);
  VAR_6 = FUNC_6(VAR_2, VAR_4);
 } else {
  VAR_6 = *FUNC_4(VAR_2);
 }

 if (VAR_3)
  VAR_7 = (int8_t)FUNC_5(VAR_2);
 else
  VAR_7 = FUNC_8(VAR_2);
 VAR_8 = (int16_t)VAR_6 * VAR_7;

 if (VAR_8 > 0xffff) {
  FUNC_1(VAR_0);
  FUNC_1(VAR_1);
 } else {
  FUNC_0(VAR_0);
  FUNC_0(VAR_1);
 }
 *VAR_5 = (uint16_t) VAR_8;
}
