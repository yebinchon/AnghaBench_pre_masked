
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int info; } ;
struct TYPE_14__ {scalar_t__ k; TYPE_1__ u; } ;
typedef TYPE_2__ expdesc ;
struct TYPE_15__ {scalar_t__ nactvar; } ;
typedef TYPE_3__ FuncState ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;

int FUNC_4 (FuncState *VAR_1, expdesc *VAR_2) {
  FUNC_2(VAR_1, VAR_2);
  if (VAR_2->k == VAR_0) {
    if (!FUNC_1(VAR_2)) return VAR_2->u.info;
    if (VAR_2->u.info >= VAR_1->nactvar) {
      FUNC_0(VAR_1, VAR_2, VAR_2->u.info);
      return VAR_2->u.info;
    }
  }
  FUNC_3(VAR_1, VAR_2);
  return VAR_2->u.info;
}
