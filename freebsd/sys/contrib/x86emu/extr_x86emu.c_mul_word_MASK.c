
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int R_AX; int R_DX; } ;
struct x86emu {TYPE_1__ x86; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct x86emu *VAR_2, uint16_t VAR_3)
{
 uint32_t VAR_4 = VAR_2->x86.R_AX * VAR_3;

 VAR_2->x86.R_AX = (uint16_t) VAR_4;
 VAR_2->x86.R_DX = (uint16_t) (VAR_4 >> 16);
 if (VAR_2->x86.R_DX == 0) {
  FUNC_0(VAR_0);
  FUNC_0(VAR_1);
 } else {
  FUNC_1(VAR_0);
  FUNC_1(VAR_1);
 }
}
