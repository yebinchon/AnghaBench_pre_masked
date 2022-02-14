
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int R_FLG; int R_AH; } ;
struct x86emu {TYPE_1__ x86; } ;



__attribute__((used)) static void
FUNC_0(struct x86emu *VAR_0)
{

 VAR_0->x86.R_FLG &= 0xffffff00;

 VAR_0->x86.R_FLG |= VAR_0->x86.R_AH;
}
