
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int info; } ;
struct TYPE_14__ {scalar_t__ k; TYPE_1__ u; } ;
typedef TYPE_2__ expdesc ;
struct TYPE_15__ {int pc; } ;
typedef int Instruction ;
typedef TYPE_3__ FuncState ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_3__*,int ,int ,int ,int) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_6 (FuncState *VAR_5, expdesc *VAR_6, int VAR_7) {
  if (VAR_6->k == VAR_4) {
    Instruction VAR_8 = FUNC_5(VAR_5, VAR_6);
    if (FUNC_1(VAR_8) == VAR_1) {
      VAR_5->pc--;
      return FUNC_2(VAR_5, VAR_2, FUNC_0(VAR_8), 0, !VAR_7);
    }

  }
  FUNC_3(VAR_5, VAR_6);
  FUNC_4(VAR_5, VAR_6);
  return FUNC_2(VAR_5, VAR_3, VAR_0, VAR_6->u.info, VAR_7);
}
