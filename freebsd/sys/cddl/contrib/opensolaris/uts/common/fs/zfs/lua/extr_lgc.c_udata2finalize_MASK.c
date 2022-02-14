
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * allgc; int * tobefnz; } ;
typedef TYPE_1__ global_State ;
struct TYPE_7__ {int marked; int * next; } ;
typedef int GCObject ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static GCObject *FUNC_7 (global_State *VAR_1) {
  GCObject *VAR_2 = VAR_1->tobefnz;
  FUNC_4(FUNC_1(VAR_2));
  VAR_1->tobefnz = FUNC_0(VAR_2)->next;
  FUNC_0(VAR_2)->next = VAR_1->allgc;
  VAR_1->allgc = VAR_2;
  FUNC_6(FUNC_0(VAR_2)->marked, VAR_0);
  FUNC_4(!FUNC_2(VAR_2));
  if (!FUNC_3(VAR_1))
    FUNC_5(VAR_1, VAR_2);
  return VAR_2;
}
