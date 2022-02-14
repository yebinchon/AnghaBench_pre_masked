
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int R_GS; int R_FS; int R_DS; int R_SS; int R_CS; int R_ES; } ;
struct x86emu {int cur_rh; TYPE_1__ x86; } ;


 int FUNC_0 (struct x86emu*) ;

__attribute__((used)) static uint16_t *
FUNC_1(struct x86emu *VAR_0)
{
 switch (VAR_0->cur_rh) {
 case 0:
  return &VAR_0->x86.R_ES;
 case 1:
  return &VAR_0->x86.R_CS;
 case 2:
  return &VAR_0->x86.R_SS;
 case 3:
  return &VAR_0->x86.R_DS;
 case 4:
  return &VAR_0->x86.R_FS;
 case 5:
  return &VAR_0->x86.R_GS;
 default:
  FUNC_0(VAR_0);
 }
}
