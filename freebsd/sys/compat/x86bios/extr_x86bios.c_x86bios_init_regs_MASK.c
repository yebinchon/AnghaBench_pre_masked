
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x86regs {scalar_t__ X86BIOS_R_SP; int X86BIOS_R_SS; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct x86regs*,int) ;
 int VAR_1 ;

void
FUNC_2(struct x86regs *VAR_2)
{

 FUNC_1(VAR_2, sizeof(*VAR_2));
 VAR_2->X86BIOS_R_SS = FUNC_0(VAR_1);
 VAR_2->X86BIOS_R_SP = VAR_0 - 2;
}
