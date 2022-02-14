
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct x86emu {int (* emu_wrw ) (struct x86emu*,int,int ) ;} ;


 int FUNC_0 (struct x86emu*,int,int ) ;

__attribute__((used)) static void
FUNC_1(struct x86emu *VAR_0, uint32_t VAR_1, uint32_t VAR_2, uint16_t VAR_3)
{
 (*VAR_0->emu_wrw) (VAR_0, ((uint32_t) VAR_1 << 4) + VAR_2, VAR_3);
}
