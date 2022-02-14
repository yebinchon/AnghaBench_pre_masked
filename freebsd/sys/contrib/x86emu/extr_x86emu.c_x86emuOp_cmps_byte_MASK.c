
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; scalar_t__ R_CX; int R_SI; int R_DI; int R_ES; } ;
struct x86emu {TYPE_1__ x86; } ;
typedef int int8_t ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct x86emu*,int ,int ) ;
 int FUNC_2 (struct x86emu*,int ,int) ;
 int FUNC_3 (struct x86emu*,int) ;

__attribute__((used)) static void
FUNC_4(struct x86emu *VAR_4)
{
 int8_t VAR_5, VAR_6;
 int VAR_7;

 if (FUNC_0(VAR_0))
  VAR_7 = -1;
 else
  VAR_7 = 1;

 if (VAR_4->x86.mode & VAR_2) {


  while (VAR_4->x86.R_CX != 0) {
   VAR_5 = FUNC_3(VAR_4, VAR_4->x86.R_SI);
   VAR_6 = FUNC_2(VAR_4, VAR_4->x86.R_ES, VAR_4->x86.R_DI);
   FUNC_1(VAR_4, VAR_5, VAR_6);
   VAR_4->x86.R_CX -= 1;
   VAR_4->x86.R_SI += VAR_7;
   VAR_4->x86.R_DI += VAR_7;
   if (FUNC_0(VAR_1) == 0)
    break;
  }
  VAR_4->x86.mode &= ~VAR_2;
 } else if (VAR_4->x86.mode & VAR_3) {


  while (VAR_4->x86.R_CX != 0) {
   VAR_5 = FUNC_3(VAR_4, VAR_4->x86.R_SI);
   VAR_6 = FUNC_2(VAR_4, VAR_4->x86.R_ES, VAR_4->x86.R_DI);
   FUNC_1(VAR_4, VAR_5, VAR_6);
   VAR_4->x86.R_CX -= 1;
   VAR_4->x86.R_SI += VAR_7;
   VAR_4->x86.R_DI += VAR_7;
   if (FUNC_0(VAR_1))
    break;
  }
  VAR_4->x86.mode &= ~VAR_3;
 } else {
  VAR_5 = FUNC_3(VAR_4, VAR_4->x86.R_SI);
  VAR_6 = FUNC_2(VAR_4, VAR_4->x86.R_ES, VAR_4->x86.R_DI);
  FUNC_1(VAR_4, VAR_5, VAR_6);
  VAR_4->x86.R_SI += VAR_7;
  VAR_4->x86.R_DI += VAR_7;
 }
}
