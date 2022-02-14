
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int R_SP; int R_SS; } ;
struct x86emu {TYPE_1__ x86; } ;


 int FUNC_0 (struct x86emu*,int ,int,int ) ;

__attribute__((used)) static void
FUNC_1(struct x86emu *VAR_0, uint32_t VAR_1)
{
 VAR_0->x86.R_SP -= 4;
 FUNC_0(VAR_0, VAR_0->x86.R_SS, VAR_0->x86.R_SP, VAR_1);
}
