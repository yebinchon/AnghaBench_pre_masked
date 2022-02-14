
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ ic_error_regs; scalar_t__ ic_high_regs; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;

void
FUNC_6(uintptr_t VAR_1)
{
 uint32_t VAR_2;

 if (VAR_1 < 32) {
  VAR_2 = FUNC_0();
  VAR_2 |= (1 << VAR_1);
  FUNC_3(VAR_2);

 } else if ((VAR_1 < 64) && VAR_0->ic_high_regs) {
  VAR_2 = FUNC_2();
  VAR_2 |= (1 << (VAR_1 - 32));
  FUNC_5(VAR_2);

 } else if ((VAR_1 < 96) && VAR_0->ic_error_regs) {
  VAR_2 = FUNC_1();
  VAR_2 |= (1 << (VAR_1 - 64));
  FUNC_4(VAR_2);
 }
}
