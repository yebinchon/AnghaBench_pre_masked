
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int nupvalues; int p; TYPE_1__** upvals; } ;
struct TYPE_4__ {int const* v; } ;
typedef int TValue ;
typedef TYPE_2__ LClosure ;
typedef int CallInfo ;


 TYPE_2__* FUNC_0 (int *) ;
 char* FUNC_1 (int ,int) ;

__attribute__((used)) static const char *FUNC_2 (CallInfo *VAR_0, const TValue *VAR_1,
                                 const char **VAR_2) {
  LClosure *VAR_3 = FUNC_0(VAR_0);
  int VAR_4;
  for (VAR_4 = 0; VAR_4 < VAR_3->nupvalues; VAR_4++) {
    if (VAR_3->upvals[VAR_4]->v == VAR_1) {
      *VAR_2 = FUNC_1(VAR_3->p, VAR_4);
      return "upvalue";
    }
  }
  return ((void*)0);
}
