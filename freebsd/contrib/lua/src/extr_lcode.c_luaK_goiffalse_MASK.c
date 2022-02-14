
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int info; } ;
struct TYPE_7__ {int k; void* f; int t; TYPE_1__ u; } ;
typedef TYPE_2__ expdesc ;
typedef int FuncState ;


 void* VAR_0 ;



 int FUNC_0 (int *,TYPE_2__*,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (int *,void*) ;

void FUNC_4 (FuncState *VAR_1, expdesc *VAR_2) {
  int VAR_3;
  FUNC_2(VAR_1, VAR_2);
  switch (VAR_2->k) {
    case 129: {
      VAR_3 = VAR_2->u.info;
      break;
    }
    case 128: case 130: {
      VAR_3 = VAR_0;
      break;
    }
    default: {
      VAR_3 = FUNC_0(VAR_1, VAR_2, 1);
      break;
    }
  }
  FUNC_1(VAR_1, &VAR_2->t, VAR_3);
  FUNC_3(VAR_1, VAR_2->f);
  VAR_2->f = VAR_0;
}
