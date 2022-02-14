
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; int R_AX; int R_EAX; int R_AL; int R_AH; } ;
struct x86emu {TYPE_1__ x86; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct x86emu *VAR_1)
{
 if (VAR_1->x86.mode & VAR_0) {
  if (VAR_1->x86.R_AX & 0x8000) {
   VAR_1->x86.R_EAX |= 0xffff0000;
  } else {
   VAR_1->x86.R_EAX &= 0x0000ffff;
  }
 } else {
  if (VAR_1->x86.R_AL & 0x80) {
   VAR_1->x86.R_AH = 0xff;
  } else {
   VAR_1->x86.R_AH = 0x0;
  }
 }
}
