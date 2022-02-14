
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; scalar_t__ R_CX; int R_DI; int R_AL; int R_ES; } ;
struct x86emu {TYPE_1__ x86; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct x86emu*,int ,int,int ) ;

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
   FUNC_1(VAR_3, VAR_3->x86.R_ES, VAR_3->x86.R_DI,
       VAR_3->x86.R_AL);
   VAR_3->x86.R_CX -= 1;
   VAR_3->x86.R_DI += VAR_4;
  }
  VAR_3->x86.mode &= ~(VAR_1 | VAR_2);
 } else {
  FUNC_1(VAR_3, VAR_3->x86.R_ES, VAR_3->x86.R_DI, VAR_3->x86.R_AL);
  VAR_3->x86.R_DI += VAR_4;
 }
}
