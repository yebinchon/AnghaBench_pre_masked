
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int pEnd; int pStart; int pFilter; int pPartition; int pOrderBy; struct TYPE_3__* pNextWin; } ;
typedef TYPE_1__ Window ;
typedef int Walker ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(Walker *VAR_2, Window *VAR_3){
  Window *VAR_4;
  for(VAR_4=VAR_3; VAR_4; VAR_4=VAR_4->pNextWin){
    int VAR_5;
    VAR_5 = FUNC_2(VAR_2, VAR_4->pOrderBy);
    if( VAR_5 ) return VAR_0;
    VAR_5 = FUNC_2(VAR_2, VAR_4->pPartition);
    if( VAR_5 ) return VAR_0;
    VAR_5 = FUNC_1(VAR_2, VAR_4->pFilter);
    if( VAR_5 ) return VAR_0;





    VAR_5 = FUNC_1(VAR_2, VAR_4->pStart);
    if( FUNC_0(VAR_5) ) return VAR_0;
    VAR_5 = FUNC_1(VAR_2, VAR_4->pEnd);
    if( FUNC_0(VAR_5) ) return VAR_0;
  }
  return VAR_1;
}
