
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; } ;
struct x86emu {TYPE_1__ x86; } ;


 int VAR_0 ;
 int FUNC_0 (struct x86emu*,int) ;
 int FUNC_1 (struct x86emu*,int) ;

__attribute__((used)) static void
FUNC_2(struct x86emu *VAR_1, int VAR_2)
{
 if (VAR_1->x86.mode & VAR_0)
  FUNC_0(VAR_1, VAR_2);
 else
  FUNC_1(VAR_1, VAR_2);
}
