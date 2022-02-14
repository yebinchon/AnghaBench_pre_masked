
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pc; int lasttarget; TYPE_1__* f; } ;
struct TYPE_5__ {int * code; } ;
typedef int Instruction ;
typedef TYPE_2__ FuncState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (TYPE_2__*,scalar_t__,int,int,int ) ;

void FUNC_6 (FuncState *VAR_1, int VAR_2, int VAR_3) {
  Instruction *VAR_4;
  int VAR_5 = VAR_2 + VAR_3 - 1;
  if (VAR_1->pc > VAR_1->lasttarget) {
    VAR_4 = &VAR_1->f->code[VAR_1->pc-1];
    if (FUNC_2(*VAR_4) == VAR_0) {
      int VAR_6 = FUNC_0(*VAR_4);
      int VAR_7 = VAR_6 + FUNC_1(*VAR_4);
      if ((VAR_6 <= VAR_2 && VAR_2 <= VAR_7 + 1) ||
          (VAR_2 <= VAR_6 && VAR_6 <= VAR_5 + 1)) {
        if (VAR_6 < VAR_2) VAR_2 = VAR_6;
        if (VAR_7 > VAR_5) VAR_5 = VAR_7;
        FUNC_3(*VAR_4, VAR_2);
        FUNC_4(*VAR_4, VAR_5 - VAR_2);
        return;
      }
    }
  }
  FUNC_5(VAR_1, VAR_0, VAR_2, VAR_3 - 1, 0);
}
