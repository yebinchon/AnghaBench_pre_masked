
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ k; } ;
struct LHS_assign {TYPE_4__ v; int * prev; } ;
struct TYPE_9__ {char token; } ;
struct TYPE_10__ {TYPE_1__ t; int * fs; } ;
typedef TYPE_2__ LexState ;
typedef int FuncState ;


 int FUNC_0 (int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_2__*,struct LHS_assign*,int) ;
 int FUNC_2 (TYPE_2__*,int,char*) ;
 int FUNC_3 (int *,TYPE_4__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_4__*) ;

__attribute__((used)) static void FUNC_5 (LexState *VAR_1) {

  FuncState *VAR_2 = VAR_1->fs;
  struct LHS_assign VAR_3;
  FUNC_4(VAR_1, &VAR_3.v);
  if (VAR_1->t.token == '=' || VAR_1->t.token == ',') {
    VAR_3.prev = ((void*)0);
    FUNC_1(VAR_1, &VAR_3, 1);
  }
  else {
    FUNC_2(VAR_1, VAR_3.v.k == VAR_0, "syntax error");
    FUNC_0(FUNC_3(VAR_2, &VAR_3.v), 1);
  }
}
