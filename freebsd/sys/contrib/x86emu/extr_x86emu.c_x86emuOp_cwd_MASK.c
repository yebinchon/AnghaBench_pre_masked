
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; int R_EAX; int R_EDX; int R_AX; int R_DX; } ;
struct x86emu {TYPE_1__ x86; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct x86emu *VAR_1)
{
 if (VAR_1->x86.mode & VAR_0) {
  if (VAR_1->x86.R_EAX & 0x80000000) {
   VAR_1->x86.R_EDX = 0xffffffff;
  } else {
   VAR_1->x86.R_EDX = 0x0;
  }
 } else {
  if (VAR_1->x86.R_AX & 0x8000) {
   VAR_1->x86.R_DX = 0xffff;
  } else {
   VAR_1->x86.R_DX = 0x0;
  }
 }
}
