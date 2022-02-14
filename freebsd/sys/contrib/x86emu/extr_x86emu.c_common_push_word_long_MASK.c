
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int x_reg; } ;
struct TYPE_5__ {int e_reg; } ;
union x86emu_register {TYPE_3__ I16_reg; TYPE_2__ I32_reg; } ;
struct TYPE_4__ {int mode; } ;
struct x86emu {TYPE_1__ x86; } ;


 int VAR_0 ;
 int FUNC_0 (struct x86emu*,int ) ;
 int FUNC_1 (struct x86emu*,int ) ;

__attribute__((used)) static void
FUNC_2(struct x86emu *VAR_1, union x86emu_register *VAR_2)
{
 if (VAR_1->x86.mode & VAR_0)
  FUNC_0(VAR_1, VAR_2->I32_reg.e_reg);
 else
  FUNC_1(VAR_1, VAR_2->I16_reg.x_reg);
}
