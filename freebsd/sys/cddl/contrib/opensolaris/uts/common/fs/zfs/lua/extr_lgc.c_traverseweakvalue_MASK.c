
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int grayagain; int weak; } ;
typedef TYPE_1__ global_State ;
struct TYPE_11__ {scalar_t__ sizearray; } ;
typedef TYPE_2__ Table ;
typedef int Node ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_2__*,int ) ;
 int * FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_2__*,int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11 (global_State *VAR_0, Table *VAR_1) {
  Node *VAR_2, *VAR_3 = FUNC_3(VAR_1);


  int VAR_4 = (VAR_1->sizearray > 0);
  for (VAR_2 = FUNC_2(VAR_1, 0); VAR_2 < VAR_3; VAR_2++) {
    FUNC_0(VAR_2);
    if (FUNC_10(FUNC_4(VAR_2)))
      FUNC_9(VAR_2);
    else {
      FUNC_7(!FUNC_10(FUNC_1(VAR_2)));
      FUNC_8(VAR_0, FUNC_1(VAR_2));
      if (!VAR_4 && FUNC_5(VAR_0, FUNC_4(VAR_2)))
        VAR_4 = 1;
    }
  }
  if (VAR_4)
    FUNC_6(VAR_1, &VAR_0->weak);
  else
    FUNC_6(VAR_1, &VAR_0->grayagain);
}
