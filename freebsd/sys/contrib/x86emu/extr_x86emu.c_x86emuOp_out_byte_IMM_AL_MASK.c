
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {int R_AL; } ;
struct x86emu {TYPE_1__ x86; int (* emu_outb ) (struct x86emu*,scalar_t__,int ) ;} ;


 scalar_t__ FUNC_0 (struct x86emu*) ;
 int FUNC_1 (struct x86emu*,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_2(struct x86emu *VAR_0)
{
 uint8_t VAR_1;

 VAR_1 = (uint8_t) FUNC_0(VAR_0);
 (*VAR_0->emu_outb) (VAR_0, VAR_1, VAR_0->x86.R_AL);
}
