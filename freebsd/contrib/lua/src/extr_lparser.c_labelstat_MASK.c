
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_12__ ;


struct TYPE_22__ {TYPE_1__* bl; } ;
struct TYPE_21__ {TYPE_12__* arr; } ;
struct TYPE_20__ {TYPE_2__* dyd; TYPE_5__* fs; } ;
struct TYPE_19__ {TYPE_4__ label; } ;
struct TYPE_18__ {int nactvar; } ;
struct TYPE_17__ {int nactvar; } ;
typedef int TString ;
typedef TYPE_3__ LexState ;
typedef TYPE_4__ Labellist ;
typedef TYPE_5__ FuncState ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_5__*,TYPE_4__*,int *) ;
 int FUNC_3 (TYPE_3__*,TYPE_12__*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*,int *,int,int ) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_7 (LexState *VAR_1, TString *VAR_2, int VAR_3) {

  FuncState *VAR_4 = VAR_1->fs;
  Labellist *VAR_5 = &VAR_1->dyd->label;
  int VAR_6;
  FUNC_2(VAR_4, VAR_5, VAR_2);
  FUNC_1(VAR_1, VAR_0);

  VAR_6 = FUNC_5(VAR_1, VAR_5, VAR_2, VAR_3, FUNC_4(VAR_4));
  FUNC_6(VAR_1);
  if (FUNC_0(VAR_1, 0)) {

    VAR_5->arr[VAR_6].nactvar = VAR_4->bl->nactvar;
  }
  FUNC_3(VAR_1, &VAR_5->arr[VAR_6]);
}
