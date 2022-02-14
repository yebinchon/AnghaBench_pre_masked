
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_2__ {int R_AX; scalar_t__ R_DX; } ;
struct x86emu {TYPE_1__ x86; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct x86emu*,int) ;

__attribute__((used)) static void
FUNC_4(struct x86emu *VAR_4, uint16_t VAR_5)
{
 uint32_t VAR_6, VAR_7, VAR_8;

 VAR_6 = (((uint32_t) VAR_4->x86.R_DX) << 16) | VAR_4->x86.R_AX;
 if (VAR_5 == 0) {
  FUNC_3(VAR_4, 8);
  return;
 }
 VAR_7 = VAR_6 / (uint16_t) VAR_5;
 VAR_8 = VAR_6 % (uint16_t) VAR_5;
 if (VAR_7 > 0xffff) {
  FUNC_3(VAR_4, 8);
  return;
 }
 FUNC_0(VAR_0);
 FUNC_0(VAR_2);
 FUNC_1(VAR_7 == 0, VAR_3);
 FUNC_1(FUNC_2(VAR_8 & 0xff), VAR_1);

 VAR_4->x86.R_AX = (uint16_t) VAR_7;
 VAR_4->x86.R_DX = (uint16_t) VAR_8;
}
