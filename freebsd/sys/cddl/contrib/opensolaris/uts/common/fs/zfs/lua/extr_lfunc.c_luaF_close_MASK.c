
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_15__ ;


struct TYPE_20__ {int * openupval; } ;
typedef TYPE_2__ lua_State ;
struct TYPE_21__ {int * allgc; } ;
typedef TYPE_3__ global_State ;
struct TYPE_19__ {int value; } ;
struct TYPE_22__ {scalar_t__ v; TYPE_1__ u; int * next; } ;
typedef TYPE_4__ UpVal ;
struct TYPE_18__ {int * next; } ;
typedef scalar_t__ StkId ;
typedef int GCObject ;


 TYPE_3__* FUNC_0 (TYPE_2__*) ;
 TYPE_15__* FUNC_1 (int *) ;
 TYPE_4__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_3__*,int *) ;
 int FUNC_5 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_6 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_7 (int) ;
 int * FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_2__*,int *,int *) ;
 int FUNC_10 (TYPE_4__*) ;

void FUNC_11 (lua_State *VAR_0, StkId VAR_1) {
  UpVal *VAR_2;
  global_State *VAR_3 = FUNC_0(VAR_0);
  while (VAR_0->openupval != ((void*)0) && (VAR_2 = FUNC_2(VAR_0->openupval))->v >= VAR_1) {
    GCObject *VAR_4 = FUNC_8(VAR_2);
    FUNC_7(!FUNC_3(VAR_4) && VAR_2->v != &VAR_2->u.value);
    VAR_0->openupval = VAR_2->next;
    if (FUNC_4(VAR_3, VAR_4))
      FUNC_6(VAR_0, VAR_2);
    else {
      FUNC_10(VAR_2);
      FUNC_9(VAR_0, &VAR_2->u.value, VAR_2->v);
      VAR_2->v = &VAR_2->u.value;
      FUNC_1(VAR_4)->next = VAR_3->allgc;
      VAR_3->allgc = VAR_4;
      FUNC_5(VAR_3, VAR_2);
    }
  }
}
