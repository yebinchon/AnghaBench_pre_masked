
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int global_State ;
struct TYPE_5__ {int sizearray; int * array; } ;
typedef TYPE_1__ Table ;
typedef int Node ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_1__*,int ) ;
 int * FUNC_3 (TYPE_1__*) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9 (global_State *VAR_0, Table *VAR_1) {
  Node *VAR_2, *VAR_3 = FUNC_3(VAR_1);
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_1->sizearray; VAR_4++)
    FUNC_6(VAR_0, &VAR_1->array[VAR_4]);
  for (VAR_2 = FUNC_2(VAR_1, 0); VAR_2 < VAR_3; VAR_2++) {
    FUNC_0(VAR_2);
    if (FUNC_8(FUNC_4(VAR_2)))
      FUNC_7(VAR_2);
    else {
      FUNC_5(!FUNC_8(FUNC_1(VAR_2)));
      FUNC_6(VAR_0, FUNC_1(VAR_2));
      FUNC_6(VAR_0, FUNC_4(VAR_2));
    }
  }
}
