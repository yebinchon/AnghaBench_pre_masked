
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int info; } ;
struct TYPE_13__ {scalar_t__ k; TYPE_1__ u; } ;
typedef TYPE_3__ expdesc ;
struct TYPE_16__ {int instack; int * name; int idx; } ;
struct TYPE_15__ {int nups; TYPE_2__* ls; TYPE_4__* f; } ;
struct TYPE_14__ {int sizeupvalues; TYPE_8__* upvalues; } ;
struct TYPE_12__ {int L; } ;
typedef int TString ;
typedef TYPE_4__ Proto ;
typedef TYPE_5__ FuncState ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,int,int ,char*) ;
 int FUNC_2 (int ,TYPE_4__*,int *) ;
 int FUNC_3 (int ,TYPE_8__*,int,int,int ,int ,char*) ;

__attribute__((used)) static int FUNC_4 (FuncState *VAR_3, TString *VAR_4, expdesc *VAR_5) {
  Proto *VAR_6 = VAR_3->f;
  int VAR_7 = VAR_6->sizeupvalues;
  FUNC_1(VAR_3, VAR_3->nups + 1, VAR_0, "upvalues");
  FUNC_3(VAR_3->ls->L, VAR_6->upvalues, VAR_3->nups, VAR_6->sizeupvalues,
                  VAR_1, VAR_0, "upvalues");
  while (VAR_7 < VAR_6->sizeupvalues) VAR_6->upvalues[VAR_7++].name = ((void*)0);
  VAR_6->upvalues[VAR_3->nups].instack = (VAR_5->k == VAR_2);
  VAR_6->upvalues[VAR_3->nups].idx = FUNC_0(VAR_5->u.info);
  VAR_6->upvalues[VAR_3->nups].name = VAR_4;
  FUNC_2(VAR_3->ls->L, VAR_6, VAR_4);
  return VAR_3->nups++;
}
