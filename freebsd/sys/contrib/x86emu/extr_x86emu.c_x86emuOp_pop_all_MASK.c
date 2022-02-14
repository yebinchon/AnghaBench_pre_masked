
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; int R_ESP; int R_SP; void* R_AX; void* R_CX; void* R_DX; void* R_BX; void* R_BP; void* R_SI; void* R_DI; void* R_EAX; void* R_ECX; void* R_EDX; void* R_EBX; void* R_EBP; void* R_ESI; void* R_EDI; } ;
struct x86emu {TYPE_1__ x86; } ;


 int VAR_0 ;
 void* FUNC_0 (struct x86emu*) ;
 void* FUNC_1 (struct x86emu*) ;

__attribute__((used)) static void
FUNC_2(struct x86emu *VAR_1)
{
 if (VAR_1->x86.mode & VAR_0) {
  VAR_1->x86.R_EDI = FUNC_0(VAR_1);
  VAR_1->x86.R_ESI = FUNC_0(VAR_1);
  VAR_1->x86.R_EBP = FUNC_0(VAR_1);
  VAR_1->x86.R_ESP += 4;
  VAR_1->x86.R_EBX = FUNC_0(VAR_1);
  VAR_1->x86.R_EDX = FUNC_0(VAR_1);
  VAR_1->x86.R_ECX = FUNC_0(VAR_1);
  VAR_1->x86.R_EAX = FUNC_0(VAR_1);
 } else {
  VAR_1->x86.R_DI = FUNC_1(VAR_1);
  VAR_1->x86.R_SI = FUNC_1(VAR_1);
  VAR_1->x86.R_BP = FUNC_1(VAR_1);
  VAR_1->x86.R_SP += 2;
  VAR_1->x86.R_BX = FUNC_1(VAR_1);
  VAR_1->x86.R_DX = FUNC_1(VAR_1);
  VAR_1->x86.R_CX = FUNC_1(VAR_1);
  VAR_1->x86.R_AX = FUNC_1(VAR_1);
 }
}
