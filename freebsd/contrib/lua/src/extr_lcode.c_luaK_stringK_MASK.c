
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ls; } ;
struct TYPE_5__ {int L; } ;
typedef int TValue ;
typedef int TString ;
typedef TYPE_2__ FuncState ;


 int FUNC_0 (TYPE_2__*,int *,int *) ;
 int FUNC_1 (int ,int *,int *) ;

int FUNC_2 (FuncState *VAR_0, TString *VAR_1) {
  TValue VAR_2;
  FUNC_1(VAR_0->ls->L, &VAR_2, VAR_1);
  return FUNC_0(VAR_0, &VAR_2, &VAR_2);
}
