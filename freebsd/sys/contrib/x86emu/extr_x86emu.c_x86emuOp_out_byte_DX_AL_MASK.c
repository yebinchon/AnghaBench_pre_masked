
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int R_AL; int R_DX; } ;
struct x86emu {TYPE_1__ x86; int (* emu_outb ) (struct x86emu*,int ,int ) ;} ;


 int FUNC_0 (struct x86emu*,int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct x86emu *VAR_0)
{
 (*VAR_0->emu_outb) (VAR_0, VAR_0->x86.R_DX, VAR_0->x86.R_AL);
}
