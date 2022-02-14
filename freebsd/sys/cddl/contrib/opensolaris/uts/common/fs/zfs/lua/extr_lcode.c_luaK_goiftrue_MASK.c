
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int info; } ;
struct TYPE_8__ {int k; void* t; int f; TYPE_1__ u; } ;
typedef TYPE_2__ expdesc ;
typedef int FuncState ;


 void* VAR_0 ;




 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (int *,void*) ;

void FUNC_5 (FuncState *VAR_1, expdesc *VAR_2) {
  int VAR_3;
  FUNC_3(VAR_1, VAR_2);
  switch (VAR_2->k) {
    case 131: {
      FUNC_0(VAR_1, VAR_2);
      VAR_3 = VAR_2->u.info;
      break;
    }
    case 130: case 129: case 128: {
      VAR_3 = VAR_0;
      break;
    }
    default: {
      VAR_3 = FUNC_1(VAR_1, VAR_2, 0);
      break;
    }
  }
  FUNC_2(VAR_1, &VAR_2->f, VAR_3);
  FUNC_4(VAR_1, VAR_2->t);
  VAR_2->t = VAR_0;
}
