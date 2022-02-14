
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__** aHash; } ;
struct TYPE_6__ {struct TYPE_6__* zVal2; struct TYPE_6__* pHashNext; } ;
typedef TYPE_1__ IdxHashEntry ;
typedef TYPE_2__ IdxHash ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(IdxHash *VAR_1){
  int VAR_2;
  for(VAR_2=0; VAR_2<VAR_0; VAR_2++){
    IdxHashEntry *VAR_3;
    IdxHashEntry *VAR_4;
    for(VAR_3=VAR_1->aHash[VAR_2]; VAR_3; VAR_3=VAR_4){
      VAR_4 = VAR_3->pHashNext;
      FUNC_1(VAR_3->zVal2);
      FUNC_1(VAR_3);
    }
  }
  FUNC_0(VAR_1, 0, sizeof(IdxHash));
}
