
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int R_BH; int R_DH; int R_CH; int R_AH; int R_BL; int R_DL; int R_CL; int R_AL; } ;
struct x86emu {TYPE_1__ x86; } ;


 int FUNC_0 (struct x86emu*) ;

__attribute__((used)) static uint8_t *
FUNC_1(struct x86emu *VAR_0, int VAR_1)
{
 switch (VAR_1) {
 case 0:
  return &VAR_0->x86.R_AL;
 case 1:
  return &VAR_0->x86.R_CL;
 case 2:
  return &VAR_0->x86.R_DL;
 case 3:
  return &VAR_0->x86.R_BL;
 case 4:
  return &VAR_0->x86.R_AH;
 case 5:
  return &VAR_0->x86.R_CH;
 case 6:
  return &VAR_0->x86.R_DH;
 case 7:
  return &VAR_0->x86.R_BH;
 default:
  FUNC_0(VAR_0);
 }
}
