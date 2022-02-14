
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct x86emu {int cur_mod; int cur_offset; } ;


 int FUNC_0 (struct x86emu*) ;
 int * FUNC_1 (struct x86emu*) ;
 int FUNC_2 (struct x86emu*,int ) ;

__attribute__((used)) static uint8_t
FUNC_3(struct x86emu *VAR_0)
{
 if (VAR_0->cur_mod != 3) {
  VAR_0->cur_offset = FUNC_0(VAR_0);
  return FUNC_2(VAR_0, VAR_0->cur_offset);
 } else {
  return *FUNC_1(VAR_0);
 }
}
