
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct x86emu {int cur_mod; } ;


 int * FUNC_0 (struct x86emu*) ;
 scalar_t__ FUNC_1 (struct x86emu*) ;
 int FUNC_2 (struct x86emu*,scalar_t__) ;
 int FUNC_3 (struct x86emu*) ;
 int FUNC_4 (struct x86emu*) ;

__attribute__((used)) static void
FUNC_5(struct x86emu *VAR_0, uint16_t *VAR_1)
{
 uint16_t *VAR_2;
 uint32_t VAR_3;

 FUNC_3(VAR_0);
 if (VAR_0->cur_mod == 3)
  FUNC_4(VAR_0);

 VAR_2 = FUNC_0(VAR_0);
 VAR_3 = FUNC_1(VAR_0);
 *VAR_2 = FUNC_2(VAR_0, VAR_3);
 *VAR_1 = FUNC_2(VAR_0, VAR_3 + 2);
}
