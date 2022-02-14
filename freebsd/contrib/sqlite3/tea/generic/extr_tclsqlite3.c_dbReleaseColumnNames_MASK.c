
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nCol; int * apColName; } ;
typedef TYPE_1__ DbEvalContext ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(DbEvalContext *VAR_0){
  if( VAR_0->apColName ){
    int VAR_1;
    for(VAR_1=0; VAR_1<VAR_0->nCol; VAR_1++){
      FUNC_0(VAR_0->apColName[VAR_1]);
    }
    FUNC_1((char *)VAR_0->apColName);
    VAR_0->apColName = 0;
  }
  VAR_0->nCol = 0;
}
