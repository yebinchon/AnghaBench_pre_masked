
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int _notty; } ;
struct TYPE_6__ {int Filedes; } ;
struct TYPE_5__ {TYPE_3__* csp; } ;
typedef int TTY ;
typedef TYPE_1__ TERMINAL_CONTROL_BLOCK ;
typedef TYPE_2__ TERMINAL ;
typedef TYPE_3__ SCREEN ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_3(TERMINAL_CONTROL_BLOCK * VAR_6, int VAR_7, TTY * VAR_8)
{
    SCREEN *VAR_9 = VAR_6->csp;
    TERMINAL *VAR_10 = (TERMINAL *) VAR_6;
    int VAR_11 = VAR_3;

    FUNC_0();
    if (VAR_7) {
 for (;;) {
     if (FUNC_2(VAR_10->Filedes, VAR_8) != 0) {
  if (VAR_5 == VAR_0)
      continue;
  if (VAR_5 == VAR_1) {
      if (VAR_9)
   VAR_9->_notty = VAR_4;
  }
  VAR_11 = VAR_2;
     }
     break;
 }
    } else {
 for (;;) {
     if (FUNC_1(VAR_10->Filedes, VAR_8) != 0) {
  if (VAR_5 == VAR_0)
      continue;
  VAR_11 = VAR_2;
     }
     break;
 }
    }
    return VAR_11;
}
