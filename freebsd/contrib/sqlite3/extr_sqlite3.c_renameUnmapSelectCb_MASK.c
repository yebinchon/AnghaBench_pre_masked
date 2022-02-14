
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int * pParse; } ;
typedef TYPE_2__ Walker ;
struct TYPE_12__ {TYPE_3__* pSrc; TYPE_3__* pEList; } ;
struct TYPE_11__ {int nExpr; int nSrc; TYPE_1__* a; } ;
struct TYPE_9__ {scalar_t__ zName; } ;
typedef TYPE_3__ SrcList ;
typedef TYPE_4__ Select ;
typedef int Parse ;
typedef TYPE_3__ ExprList ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,void*) ;

__attribute__((used)) static int FUNC_2(Walker *VAR_1, Select *VAR_2){
  Parse *VAR_3 = VAR_1->pParse;
  int VAR_4;
  if( FUNC_0(VAR_2->pEList) ){
    ExprList *VAR_5 = VAR_2->pEList;
    for(VAR_4=0; VAR_4<VAR_5->nExpr; VAR_4++){
      if( VAR_5->a[VAR_4].zName ){
        FUNC_1(VAR_3, 0, (void*)VAR_5->a[VAR_4].zName);
      }
    }
  }
  if( FUNC_0(VAR_2->pSrc) ){
    SrcList *VAR_6 = VAR_2->pSrc;
    for(VAR_4=0; VAR_4<VAR_6->nSrc; VAR_4++){
      FUNC_1(VAR_3, 0, (void*)VAR_6->a[VAR_4].zName);
    }
  }
  return VAR_0;
}
