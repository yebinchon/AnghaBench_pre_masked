
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int token; } ;
struct TYPE_11__ {TYPE_1__ t; int * fs; } ;
typedef int TString ;
typedef TYPE_2__ LexState ;
typedef int FuncState ;
typedef int BlockCnt ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (TYPE_2__*,int ,int ,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,char*) ;
 int * FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_8 (LexState *VAR_2, int VAR_3) {

  FuncState *VAR_4 = VAR_2->fs;
  TString *VAR_5;
  BlockCnt VAR_6;
  FUNC_1(VAR_4, &VAR_6, 1);
  FUNC_5(VAR_2);
  VAR_5 = FUNC_7(VAR_2);
  switch (VAR_2->t.token) {
    case '=': FUNC_3(VAR_2, VAR_5, VAR_3); break;
    case ',': case 128: FUNC_2(VAR_2, VAR_5); break;
    default: FUNC_6(VAR_2, "'=' or 'in' expected");
  }
  FUNC_0(VAR_2, VAR_0, VAR_1, VAR_3);
  FUNC_4(VAR_4);
}
