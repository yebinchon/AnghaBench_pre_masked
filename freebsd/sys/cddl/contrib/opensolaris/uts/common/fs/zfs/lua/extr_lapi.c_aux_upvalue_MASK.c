
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int nupvalues; int * v; int * upvalue; } ;
struct TYPE_10__ {TYPE_4__** upvals; TYPE_2__* p; } ;
struct TYPE_9__ {int sizeupvalues; TYPE_1__* upvalues; } ;
struct TYPE_8__ {int * name; } ;
typedef int TValue ;
typedef int TString ;
typedef int StkId ;
typedef TYPE_2__ Proto ;
typedef TYPE_3__ LClosure ;
typedef int GCObject ;
typedef TYPE_4__ CClosure ;




 TYPE_4__* FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (int ) ;
 char const* FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static const char *FUNC_5 (StkId VAR_0, int VAR_1, TValue **VAR_2,
                                GCObject **VAR_3) {
  switch (FUNC_4(VAR_0)) {
    case 129: {
      CClosure *VAR_4 = FUNC_0(VAR_0);
      if (!(1 <= VAR_1 && VAR_1 <= VAR_4->nupvalues)) return ((void*)0);
      *VAR_2 = &VAR_4->upvalue[VAR_1-1];
      if (VAR_3) *VAR_3 = FUNC_3(VAR_4);
      return "";
    }
    case 128: {
      LClosure *VAR_5 = FUNC_1(VAR_0);
      TString *VAR_6;
      Proto *VAR_7 = VAR_5->p;
      if (!(1 <= VAR_1 && VAR_1 <= VAR_7->sizeupvalues)) return ((void*)0);
      *VAR_2 = VAR_5->upvals[VAR_1-1]->v;
      if (VAR_3) *VAR_3 = FUNC_3(VAR_5->upvals[VAR_1 - 1]);
      VAR_6 = VAR_7->upvalues[VAR_1-1].name;
      return (VAR_6 == ((void*)0)) ? "" : FUNC_2(VAR_6);
    }
    default: return ((void*)0);
  }
}
