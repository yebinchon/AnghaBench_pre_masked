
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; scalar_t__ R_CX; int R_SI; void* R_AL; } ;
struct x86emu {TYPE_1__ x86; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (struct x86emu*,int) ;

__attribute__((used)) static void
FUNC_2(struct x86emu *VAR_3)
{
 int VAR_4;

 if (FUNC_0(VAR_0))
  VAR_4 = -1;
 else
  VAR_4 = 1;
 if (VAR_3->x86.mode & (VAR_1 | VAR_2)) {


  while (VAR_3->x86.R_CX != 0) {
   VAR_3->x86.R_AL = FUNC_1(VAR_3, VAR_3->x86.R_SI);
   VAR_3->x86.R_CX -= 1;
   VAR_3->x86.R_SI += VAR_4;
  }
  VAR_3->x86.mode &= ~(VAR_1 | VAR_2);
 } else {
  VAR_3->x86.R_AL = FUNC_1(VAR_3, VAR_3->x86.R_SI);
  VAR_3->x86.R_SI += VAR_4;
 }
}
