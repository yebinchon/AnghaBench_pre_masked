
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_5__ {int pSelect; int pExprList; int pWhere; } ;
typedef TYPE_1__ TriggerStep ;
struct TYPE_6__ {int pWhen; TYPE_1__* step_list; } ;
typedef TYPE_2__ Trigger ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static void FUNC_4(sqlite3 *VAR_0, Trigger *VAR_1){
  if( VAR_1 ){
    TriggerStep *VAR_2 = VAR_1->step_list;
    FUNC_1(VAR_0, VAR_2->pWhere);
    FUNC_2(VAR_0, VAR_2->pExprList);
    FUNC_3(VAR_0, VAR_2->pSelect);
    FUNC_1(VAR_0, VAR_1->pWhen);
    FUNC_0(VAR_0, VAR_1);
  }
}
