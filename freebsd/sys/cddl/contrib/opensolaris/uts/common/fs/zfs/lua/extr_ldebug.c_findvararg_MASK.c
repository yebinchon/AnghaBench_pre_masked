
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* p; } ;
struct TYPE_8__ {int base; } ;
struct TYPE_9__ {TYPE_2__ l; } ;
struct TYPE_10__ {int func; TYPE_3__ u; } ;
struct TYPE_7__ {int numparams; } ;
typedef int StkId ;
typedef TYPE_4__ CallInfo ;


 TYPE_6__* FUNC_0 (int) ;

__attribute__((used)) static const char *FUNC_1 (CallInfo *VAR_0, int VAR_1, StkId *VAR_2) {
  int VAR_3 = FUNC_0(VAR_0->func)->p->numparams;
  if (VAR_1 >= VAR_0->u.l.base - VAR_0->func - VAR_3)
    return ((void*)0);
  else {
    *VAR_2 = VAR_0->func + VAR_3 + VAR_1;
    return "(*vararg)";
  }
}
