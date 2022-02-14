
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int R_EDI; int R_ESI; int R_EBP; int R_ESP; int R_EBX; int R_EDX; int R_ECX; int R_EAX; } ;
struct x86emu {TYPE_1__ x86; } ;


 int FUNC_0 (struct x86emu*) ;

__attribute__((used)) static uint32_t *
FUNC_1(struct x86emu *VAR_0, int VAR_1)
{
 switch (VAR_1) {
 case 0:
  return &VAR_0->x86.R_EAX;
 case 1:
  return &VAR_0->x86.R_ECX;
 case 2:
  return &VAR_0->x86.R_EDX;
 case 3:
  return &VAR_0->x86.R_EBX;
 case 4:
  return &VAR_0->x86.R_ESP;
 case 5:
  return &VAR_0->x86.R_EBP;
 case 6:
  return &VAR_0->x86.R_ESI;
 case 7:
  return &VAR_0->x86.R_EDI;
 default:
  FUNC_0(VAR_0);
 }
}
