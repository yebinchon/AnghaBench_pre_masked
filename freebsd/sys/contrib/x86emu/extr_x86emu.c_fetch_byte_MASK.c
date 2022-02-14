
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct x86emu {int (* emu_rdb ) (struct x86emu*,int) ;} ;


 int FUNC_0 (struct x86emu*,int) ;

__attribute__((used)) static uint8_t
FUNC_1(struct x86emu *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{
 return (*VAR_0->emu_rdb) (VAR_0, ((uint32_t) VAR_1 << 4) + VAR_2);
}
