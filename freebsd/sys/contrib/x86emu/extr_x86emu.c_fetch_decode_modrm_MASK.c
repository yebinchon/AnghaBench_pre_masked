
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x86emu {int cur_mod; int cur_rh; int cur_rl; } ;


 int FUNC_0 (struct x86emu*) ;

__attribute__((used)) static void
FUNC_1(struct x86emu *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 VAR_0->cur_mod = (VAR_1 >> 6) & 0x03;
 VAR_0->cur_rh = (VAR_1 >> 3) & 0x07;
 VAR_0->cur_rl = (VAR_1 >> 0) & 0x07;
}
