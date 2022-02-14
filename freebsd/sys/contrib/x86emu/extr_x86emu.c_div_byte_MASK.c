
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_2__ {scalar_t__ R_AX; scalar_t__ R_AH; scalar_t__ R_AL; } ;
struct x86emu {TYPE_1__ x86; } ;


 int FUNC_0 (struct x86emu*,int) ;

__attribute__((used)) static void
FUNC_1(struct x86emu *VAR_0, uint8_t VAR_1)
{
 uint32_t VAR_2, VAR_3, VAR_4;

 VAR_2 = VAR_0->x86.R_AX;
 if (VAR_1 == 0) {
  FUNC_0(VAR_0, 8);
  return;
 }
 VAR_3 = VAR_2 / (uint8_t) VAR_1;
 VAR_4 = VAR_2 % (uint8_t) VAR_1;
 if (VAR_3 > 0xff) {
  FUNC_0(VAR_0, 8);
  return;
 }
 VAR_0->x86.R_AL = (uint8_t) VAR_3;
 VAR_0->x86.R_AH = (uint8_t) VAR_4;
}
