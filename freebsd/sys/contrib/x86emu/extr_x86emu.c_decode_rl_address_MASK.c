
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_2__ {int mode; scalar_t__ R_BX; scalar_t__ R_BP; scalar_t__ R_DI; scalar_t__ R_SI; scalar_t__ R_EDI; scalar_t__ R_ESI; scalar_t__ R_EBP; scalar_t__ R_EBX; scalar_t__ R_EDX; scalar_t__ R_ECX; scalar_t__ R_EAX; } ;
struct x86emu {int cur_rl; int cur_mod; TYPE_1__ x86; } ;
typedef scalar_t__ int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct x86emu*,scalar_t__,int ) ;
 scalar_t__ FUNC_1 (struct x86emu*) ;
 scalar_t__ FUNC_2 (struct x86emu*) ;
 scalar_t__ FUNC_3 (struct x86emu*) ;
 int FUNC_4 (struct x86emu*) ;

__attribute__((used)) static uint32_t
FUNC_5(struct x86emu *VAR_2)
{
 if (VAR_2->x86.mode & VAR_0) {
  uint32_t VAR_3, VAR_4;

  switch (VAR_2->cur_rl) {
  case 0:
   VAR_3 = VAR_2->x86.R_EAX;
   break;
  case 1:
   VAR_3 = VAR_2->x86.R_ECX;
   break;
  case 2:
   VAR_3 = VAR_2->x86.R_EDX;
   break;
  case 3:
   VAR_3 = VAR_2->x86.R_EBX;
   break;
  case 4:
   VAR_4 = FUNC_1(VAR_2);
   VAR_3 = FUNC_0(VAR_2, VAR_4, 0);
   break;
  case 5:
   if (VAR_2->cur_mod == 0) {
    VAR_3 = FUNC_2(VAR_2);
   } else {
    VAR_2->x86.mode |= VAR_1;
    VAR_3 = VAR_2->x86.R_EBP;
   }
   break;
  case 6:
   VAR_3 = VAR_2->x86.R_ESI;
   break;
  case 7:
   VAR_3 = VAR_2->x86.R_EDI;
   break;
  default:
   FUNC_4(VAR_2);
  }
  if (VAR_2->cur_mod == 1)
   VAR_3 += (int8_t)FUNC_1(VAR_2);
  else if (VAR_2->cur_mod == 2)
   VAR_3 += FUNC_2(VAR_2);
  return VAR_3;
 } else {
  uint16_t VAR_5;


  switch (VAR_2->cur_rl) {
  case 0:
   VAR_5 = VAR_2->x86.R_BX + VAR_2->x86.R_SI;
   break;
  case 1:
   VAR_5 = VAR_2->x86.R_BX + VAR_2->x86.R_DI;
   break;
  case 2:
   VAR_2->x86.mode |= VAR_1;
   VAR_5 = VAR_2->x86.R_BP + VAR_2->x86.R_SI;
   break;
  case 3:
   VAR_2->x86.mode |= VAR_1;
   VAR_5 = VAR_2->x86.R_BP + VAR_2->x86.R_DI;
   break;
  case 4:
   VAR_5 = VAR_2->x86.R_SI;
   break;
  case 5:
   VAR_5 = VAR_2->x86.R_DI;
   break;
  case 6:
   if (VAR_2->cur_mod == 0) {
    VAR_5 = FUNC_3(VAR_2);
   } else {
    VAR_2->x86.mode |= VAR_1;
    VAR_5 = VAR_2->x86.R_BP;
   }
   break;
  case 7:
   VAR_5 = VAR_2->x86.R_BX;
   break;
  default:
   FUNC_4(VAR_2);
  }
  if (VAR_2->cur_mod == 1)
   VAR_5 += (int8_t)FUNC_1(VAR_2);
  else if (VAR_2->cur_mod == 2)
   VAR_5 += FUNC_3(VAR_2);
  return VAR_5;
 }
}
