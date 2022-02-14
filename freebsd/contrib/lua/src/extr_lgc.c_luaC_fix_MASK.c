
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_6__ {TYPE_2__* fixedgc; TYPE_2__* allgc; } ;
typedef TYPE_1__ global_State ;
struct TYPE_7__ {struct TYPE_7__* next; } ;
typedef TYPE_2__ GCObject ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*) ;

void FUNC_3 (lua_State *VAR_0, GCObject *VAR_1) {
  global_State *VAR_2 = FUNC_0(VAR_0);
  FUNC_1(VAR_2->allgc == VAR_1);
  FUNC_2(VAR_1);
  VAR_2->allgc = VAR_1->next;
  VAR_1->next = VAR_2->fixedgc;
  VAR_2->fixedgc = VAR_1;
}
