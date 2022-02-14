
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * tobefnz; } ;
typedef TYPE_1__ global_State ;
struct TYPE_7__ {int * next; } ;
typedef int GCObject ;


 TYPE_5__* FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_3 (global_State *VAR_0) {
  GCObject *VAR_1;
  for (VAR_1 = VAR_0->tobefnz; VAR_1 != ((void*)0); VAR_1 = FUNC_0(VAR_1)->next) {
    FUNC_1(VAR_0, VAR_1);
    FUNC_2(VAR_0, VAR_1);
  }
}
