
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ R_CX; scalar_t__ R_IP; } ;
struct x86emu {TYPE_1__ x86; } ;
typedef scalar_t__ int8_t ;
typedef scalar_t__ int16_t ;


 scalar_t__ FUNC_0 (struct x86emu*) ;

__attribute__((used)) static void
FUNC_1(struct x86emu *VAR_0)
{
 int16_t VAR_1;

 VAR_1 = (int8_t) FUNC_0(VAR_0);
 VAR_1 += (int16_t) VAR_0->x86.R_IP;
 VAR_0->x86.R_CX -= 1;
 if (VAR_0->x86.R_CX != 0)
  VAR_0->x86.R_IP = VAR_1;
}
