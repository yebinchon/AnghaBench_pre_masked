
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int intr; int intno; } ;
struct x86emu {TYPE_1__ x86; } ;


 int VAR_0 ;

void
FUNC_0(struct x86emu *VAR_1, uint8_t VAR_2)
{
 VAR_1->x86.intno = VAR_2;
 VAR_1->x86.intr |= VAR_0;
}
