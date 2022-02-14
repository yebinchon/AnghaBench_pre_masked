
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int mode; int R_CX; int R_SI; int R_DI; int R_ES; } ;
struct x86emu {TYPE_1__ x86; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct x86emu*,int) ;
 int FUNC_2 (struct x86emu*,int ,int,int ) ;

__attribute__((used)) static void
FUNC_3(struct x86emu *VAR_3)
{
 uint8_t VAR_4;
 uint32_t VAR_5;
 int VAR_6;

 if (FUNC_0(VAR_0))
  VAR_6 = -1;
 else
  VAR_6 = 1;
 VAR_5 = 1;
 if (VAR_3->x86.mode & (VAR_1 | VAR_2)) {


  VAR_5 = VAR_3->x86.R_CX;
  VAR_3->x86.R_CX = 0;
  VAR_3->x86.mode &= ~(VAR_1 | VAR_2);
 }
 while (VAR_5--) {
  VAR_4 = FUNC_1(VAR_3, VAR_3->x86.R_SI);
  FUNC_2(VAR_3, VAR_3->x86.R_ES, VAR_3->x86.R_DI, VAR_4);
  VAR_3->x86.R_SI += VAR_6;
  VAR_3->x86.R_DI += VAR_6;
 }
}
