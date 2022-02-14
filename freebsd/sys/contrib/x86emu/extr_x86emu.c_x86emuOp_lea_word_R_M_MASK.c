
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_2__ {int mode; } ;
struct x86emu {int cur_mod; TYPE_1__ x86; } ;


 int VAR_0 ;
 scalar_t__* FUNC_0 (struct x86emu*) ;
 scalar_t__* FUNC_1 (struct x86emu*) ;
 scalar_t__ FUNC_2 (struct x86emu*) ;
 int FUNC_3 (struct x86emu*) ;
 int FUNC_4 (struct x86emu*) ;

__attribute__((used)) static void
FUNC_5(struct x86emu *VAR_1)
{
 uint32_t VAR_2;

 FUNC_3(VAR_1);
 if (VAR_1->cur_mod == 3)
  FUNC_4(VAR_1);

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_1->x86.mode & VAR_0) {
  uint32_t *VAR_3;

  VAR_3 = FUNC_0(VAR_1);
  *VAR_3 = (uint32_t) VAR_2;
 } else {
  uint16_t *VAR_4;

  VAR_4 = FUNC_1(VAR_1);
  *VAR_4 = (uint16_t) VAR_2;
 }
}
