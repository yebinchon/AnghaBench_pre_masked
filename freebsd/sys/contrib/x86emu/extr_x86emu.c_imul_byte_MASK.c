
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_2__ {int R_AL; int R_AH; int R_AX; } ;
struct x86emu {TYPE_1__ x86; } ;
typedef int int8_t ;
typedef int int16_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct x86emu *VAR_2, uint8_t VAR_3)
{
 int16_t VAR_4 = (int16_t) ((int8_t) VAR_2->x86.R_AL * (int8_t) VAR_3);

 VAR_2->x86.R_AX = VAR_4;
 if (((VAR_2->x86.R_AL & 0x80) == 0 && VAR_2->x86.R_AH == 0x00) ||
     ((VAR_2->x86.R_AL & 0x80) != 0 && VAR_2->x86.R_AH == 0xFF)) {
  FUNC_0(VAR_0);
  FUNC_0(VAR_1);
 } else {
  FUNC_1(VAR_0);
  FUNC_1(VAR_1);
 }
}
