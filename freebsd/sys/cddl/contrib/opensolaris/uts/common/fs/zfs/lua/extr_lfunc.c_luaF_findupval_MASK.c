
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {TYPE_3__* next; TYPE_3__* prev; } ;
struct TYPE_16__ {TYPE_1__ l; int value; } ;
struct TYPE_17__ {TYPE_2__ u; int * v; int * next; int * openupval; } ;
typedef TYPE_3__ lua_State ;
struct TYPE_18__ {TYPE_3__ uvhead; } ;
typedef TYPE_4__ global_State ;
typedef TYPE_3__ UpVal ;
struct TYPE_19__ {TYPE_3__ uv; } ;
typedef int * StkId ;
typedef int GCObject ;


 TYPE_4__* FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 TYPE_9__* FUNC_5 (TYPE_3__*,int ,int,int **,int ) ;
 int FUNC_6 (int) ;
 int * FUNC_7 (TYPE_3__*) ;

UpVal *FUNC_8 (lua_State *VAR_1, StkId VAR_2) {
  global_State *VAR_3 = FUNC_0(VAR_1);
  GCObject **VAR_4 = &VAR_1->openupval;
  UpVal *VAR_5;
  UpVal *VAR_6;
  while (*VAR_4 != ((void*)0) && (VAR_5 = FUNC_2(*VAR_4))->v >= VAR_2) {
    GCObject *VAR_7 = FUNC_7(VAR_5);
    FUNC_6(VAR_5->v != &VAR_5->u.value);
    FUNC_6(!FUNC_4(VAR_7) || FUNC_4(FUNC_7(VAR_1)));
    if (VAR_5->v == VAR_2) {
      if (FUNC_3(VAR_3, VAR_7))
        FUNC_1(VAR_7);
      return VAR_5;
    }
    VAR_4 = &VAR_5->next;
  }

  VAR_6 = &FUNC_5(VAR_1, VAR_0, sizeof(UpVal), VAR_4, 0)->uv;
  VAR_6->v = VAR_2;
  VAR_6->u.l.prev = &VAR_3->uvhead;
  VAR_6->u.l.next = VAR_3->uvhead.u.l.next;
  VAR_6->u.l.next->u.l.prev = VAR_6;
  VAR_3->uvhead.u.l.next = VAR_6;
  FUNC_6(VAR_6->u.l.next->u.l.prev == VAR_6 && VAR_6->u.l.prev->u.l.next == VAR_6);
  return VAR_6;
}
