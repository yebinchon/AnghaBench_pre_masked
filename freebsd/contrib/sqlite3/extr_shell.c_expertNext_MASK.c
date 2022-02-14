
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
struct TYPE_2__ {scalar_t__ pData; } ;
typedef TYPE_1__ ExpertCsr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(sqlite3_vtab_cursor *VAR_2){
  ExpertCsr *VAR_3 = (ExpertCsr*)VAR_2;
  int VAR_4 = VAR_0;

  FUNC_0( VAR_3->pData );
  VAR_4 = FUNC_2(VAR_3->pData);
  if( VAR_4!=VAR_1 ){
    VAR_4 = FUNC_1(VAR_3->pData);
    VAR_3->pData = 0;
  }else{
    VAR_4 = VAR_0;
  }

  return VAR_4;
}
