
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int expdesc ;
struct TYPE_7__ {struct TYPE_7__* prev; } ;
typedef int TString ;
typedef TYPE_1__ FuncState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int *,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_5 (FuncState *VAR_3, TString *VAR_4, expdesc *VAR_5, int VAR_6) {
  if (VAR_3 == ((void*)0))
    return VAR_2;
  else {
    int VAR_7 = FUNC_4(VAR_3, VAR_4);
    if (VAR_7 >= 0) {
      FUNC_0(VAR_5, VAR_0, VAR_7);
      if (!VAR_6)
        FUNC_1(VAR_3, VAR_7);
      return VAR_0;
    }
    else {
      int VAR_8 = FUNC_3(VAR_3, VAR_4);
      if (VAR_8 < 0) {
        if (FUNC_5(VAR_3->prev, VAR_4, VAR_5, 0) == VAR_2)
          return VAR_2;

        VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5);
      }
      FUNC_0(VAR_5, VAR_1, VAR_8);
      return VAR_1;
    }
  }
}
