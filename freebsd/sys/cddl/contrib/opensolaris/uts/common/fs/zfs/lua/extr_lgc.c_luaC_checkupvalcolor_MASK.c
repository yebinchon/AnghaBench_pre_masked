
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int global_State ;
struct TYPE_4__ {int v; } ;
typedef TYPE_1__ UpVal ;
typedef int GCObject ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int ) ;
 int * FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *) ;

void FUNC_10 (global_State *VAR_0, UpVal *VAR_1) {
  GCObject *VAR_2 = FUNC_8(VAR_1);
  FUNC_5(!FUNC_1(VAR_2));
  if (FUNC_2(VAR_2)) {
    if (FUNC_4(VAR_0)) {
      FUNC_9(VAR_2);
      FUNC_0(VAR_2);
      FUNC_7(VAR_0, VAR_1->v);
    }
    else {
      FUNC_5(FUNC_3(VAR_0));
      FUNC_6(VAR_0, VAR_2);
    }
  }
}
