
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; int R_SI; int R_ESI; } ;
struct x86emu {TYPE_1__ x86; } ;


 int VAR_0 ;
 int FUNC_0 (struct x86emu*) ;
 int FUNC_1 (struct x86emu*) ;

__attribute__((used)) static void
FUNC_2(struct x86emu *VAR_1)
{
 if (VAR_1->x86.mode & VAR_0)
  VAR_1->x86.R_ESI = FUNC_0(VAR_1);
 else
  VAR_1->x86.R_SI = FUNC_1(VAR_1);
}
