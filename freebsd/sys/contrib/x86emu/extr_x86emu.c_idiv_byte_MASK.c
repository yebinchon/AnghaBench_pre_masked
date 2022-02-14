
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {int R_AL; int R_AH; scalar_t__ R_AX; } ;
struct x86emu {TYPE_1__ x86; } ;
typedef int int8_t ;
typedef int int32_t ;
typedef int int16_t ;


 int FUNC_0 (struct x86emu*,int) ;

__attribute__((used)) static void
FUNC_1(struct x86emu *VAR_0, uint8_t VAR_1)
{
 int32_t VAR_2, VAR_3, VAR_4;

 VAR_2 = (int16_t) VAR_0->x86.R_AX;
 if (VAR_1 == 0) {
  FUNC_0(VAR_0, 8);
  return;
 }
 VAR_3 = VAR_2 / (int8_t) VAR_1;
 VAR_4 = VAR_2 % (int8_t) VAR_1;
 if (VAR_3 > 0x7f || VAR_3 < -0x7f) {
  FUNC_0(VAR_0, 8);
  return;
 }
 VAR_0->x86.R_AL = (int8_t) VAR_3;
 VAR_0->x86.R_AH = (int8_t) VAR_4;
}
