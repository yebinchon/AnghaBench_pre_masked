
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int R_DI; int R_SI; int R_BP; int R_SP; int R_BX; int R_DX; int R_CX; int R_AX; } ;
struct x86emu {TYPE_1__ x86; } ;


 int FUNC_0 (struct x86emu*) ;

__attribute__((used)) static uint16_t *
FUNC_1(struct x86emu *VAR_0, int VAR_1)
{
 switch (VAR_1) {
 case 0:
  return &VAR_0->x86.R_AX;
 case 1:
  return &VAR_0->x86.R_CX;
 case 2:
  return &VAR_0->x86.R_DX;
 case 3:
  return &VAR_0->x86.R_BX;
 case 4:
  return &VAR_0->x86.R_SP;
 case 5:
  return &VAR_0->x86.R_BP;
 case 6:
  return &VAR_0->x86.R_SI;
 case 7:
  return &VAR_0->x86.R_DI;
 default:
  FUNC_0(VAR_0);
 }
}
