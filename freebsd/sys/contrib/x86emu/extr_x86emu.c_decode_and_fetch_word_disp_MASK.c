
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_2__ {int mode; } ;
struct x86emu {int cur_mod; int cur_offset; TYPE_1__ x86; } ;
typedef int int16_t ;


 int VAR_0 ;
 int FUNC_0 (struct x86emu*) ;
 int * FUNC_1 (struct x86emu*) ;
 int FUNC_2 (struct x86emu*,int) ;

__attribute__((used)) static uint16_t
FUNC_3(struct x86emu *VAR_1, int16_t VAR_2)
{
 if (VAR_1->cur_mod != 3) {

  VAR_1->cur_offset = FUNC_0(VAR_1) + VAR_2;
  if ((VAR_1->x86.mode & VAR_0) == 0)
   VAR_1->cur_offset &= 0xffff;
  return FUNC_2(VAR_1, VAR_1->cur_offset);
 } else {
  return *FUNC_1(VAR_1);
 }
}
