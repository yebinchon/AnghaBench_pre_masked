
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; int R_DX; int R_AX; int R_EAX; } ;
struct x86emu {TYPE_1__ x86; int (* emu_inw ) (struct x86emu*,int ) ;int (* emu_inl ) (struct x86emu*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct x86emu*,int ) ;
 int FUNC_1 (struct x86emu*,int ) ;

__attribute__((used)) static void
FUNC_2(struct x86emu *VAR_1)
{
 if (VAR_1->x86.mode & VAR_0) {
  VAR_1->x86.R_EAX = (*VAR_1->emu_inl) (VAR_1, VAR_1->x86.R_DX);
 } else {
  VAR_1->x86.R_AX = (*VAR_1->emu_inw) (VAR_1, VAR_1->x86.R_DX);
 }
}
