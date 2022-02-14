
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_2__ {scalar_t__ R_AL; scalar_t__ R_BX; } ;
struct x86emu {TYPE_1__ x86; } ;


 scalar_t__ FUNC_0 (struct x86emu*,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct x86emu *VAR_0)
{
 uint16_t VAR_1;

 VAR_1 = (uint16_t) (VAR_0->x86.R_BX + (uint8_t) VAR_0->x86.R_AL);
 VAR_0->x86.R_AL = FUNC_0(VAR_0, VAR_1);
}
