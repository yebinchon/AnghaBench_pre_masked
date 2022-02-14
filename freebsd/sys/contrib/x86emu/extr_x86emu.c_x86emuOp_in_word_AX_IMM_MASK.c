
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {int mode; int R_AX; int R_EAX; } ;
struct x86emu {int (* emu_inw ) (struct x86emu*,scalar_t__) ;TYPE_1__ x86; int (* emu_inl ) (struct x86emu*,scalar_t__) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct x86emu*) ;
 int FUNC_1 (struct x86emu*,scalar_t__) ;
 int FUNC_2 (struct x86emu*,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(struct x86emu *VAR_1)
{
 uint8_t VAR_2;

 VAR_2 = (uint8_t) FUNC_0(VAR_1);
 if (VAR_1->x86.mode & VAR_0) {
  VAR_1->x86.R_EAX = (*VAR_1->emu_inl) (VAR_1, VAR_2);
 } else {
  VAR_1->x86.R_AX = (*VAR_1->emu_inw) (VAR_1, VAR_2);
 }
}
