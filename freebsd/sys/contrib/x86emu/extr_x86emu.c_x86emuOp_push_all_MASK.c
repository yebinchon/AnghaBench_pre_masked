
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int mode; int R_DI; int R_SI; int R_BP; int R_BX; int R_DX; int R_CX; int R_AX; int R_SP; int R_EDI; int R_ESI; int R_EBP; int R_EBX; int R_EDX; int R_ECX; int R_EAX; int R_ESP; } ;
struct x86emu {TYPE_1__ x86; } ;


 int VAR_0 ;
 int FUNC_0 (struct x86emu*,int ) ;
 int FUNC_1 (struct x86emu*,int ) ;

__attribute__((used)) static void
FUNC_2(struct x86emu *VAR_1)
{
 if (VAR_1->x86.mode & VAR_0) {
  uint32_t VAR_2 = VAR_1->x86.R_ESP;

  FUNC_0(VAR_1, VAR_1->x86.R_EAX);
  FUNC_0(VAR_1, VAR_1->x86.R_ECX);
  FUNC_0(VAR_1, VAR_1->x86.R_EDX);
  FUNC_0(VAR_1, VAR_1->x86.R_EBX);
  FUNC_0(VAR_1, VAR_2);
  FUNC_0(VAR_1, VAR_1->x86.R_EBP);
  FUNC_0(VAR_1, VAR_1->x86.R_ESI);
  FUNC_0(VAR_1, VAR_1->x86.R_EDI);
 } else {
  uint16_t VAR_3 = VAR_1->x86.R_SP;

  FUNC_1(VAR_1, VAR_1->x86.R_AX);
  FUNC_1(VAR_1, VAR_1->x86.R_CX);
  FUNC_1(VAR_1, VAR_1->x86.R_DX);
  FUNC_1(VAR_1, VAR_1->x86.R_BX);
  FUNC_1(VAR_1, VAR_3);
  FUNC_1(VAR_1, VAR_1->x86.R_BP);
  FUNC_1(VAR_1, VAR_1->x86.R_SI);
  FUNC_1(VAR_1, VAR_1->x86.R_DI);
 }
}
