
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int nactvar; scalar_t__ upval; } ;
struct TYPE_9__ {int * fs; } ;
typedef TYPE_1__ LexState ;
typedef int FuncState ;
typedef TYPE_2__ BlockCnt ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_2__*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int,int) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_9 (LexState *VAR_2, int VAR_3) {

  int VAR_4;
  FuncState *VAR_5 = VAR_2->fs;
  int VAR_6 = FUNC_4(VAR_5);
  BlockCnt VAR_7, VAR_8;
  FUNC_2(VAR_5, &VAR_7, 1);
  FUNC_2(VAR_5, &VAR_8, 0);
  FUNC_7(VAR_2);
  FUNC_8(VAR_2);
  FUNC_0(VAR_2, VAR_1, VAR_0, VAR_3);
  VAR_4 = FUNC_1(VAR_2);
  if (VAR_8)
    FUNC_5(VAR_5, VAR_4, VAR_8);
  FUNC_3(VAR_5);
  FUNC_6(VAR_5, VAR_4, VAR_6);
  FUNC_3(VAR_5);
}
