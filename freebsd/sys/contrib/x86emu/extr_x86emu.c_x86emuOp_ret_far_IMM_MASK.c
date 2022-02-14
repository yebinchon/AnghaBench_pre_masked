
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_2__ {int R_SP; void* R_CS; void* R_IP; } ;
struct x86emu {TYPE_1__ x86; } ;


 scalar_t__ FUNC_0 (struct x86emu*) ;
 void* FUNC_1 (struct x86emu*) ;

__attribute__((used)) static void
FUNC_2(struct x86emu *VAR_0)
{
 uint16_t VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 VAR_0->x86.R_IP = FUNC_1(VAR_0);
 VAR_0->x86.R_CS = FUNC_1(VAR_0);
 VAR_0->x86.R_SP += VAR_1;
}
