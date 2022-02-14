
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct x86emu {int cur_mod; int cur_offset; } ;


 int * FUNC_0 (struct x86emu*) ;
 int FUNC_1 (struct x86emu*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct x86emu *VAR_0, uint8_t VAR_1)
{
 if (VAR_0->cur_mod != 3)
  FUNC_1(VAR_0, VAR_0->cur_offset, VAR_1);
 else
  *FUNC_0(VAR_0) = VAR_1;
}
