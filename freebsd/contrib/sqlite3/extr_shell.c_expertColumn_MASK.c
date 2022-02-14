
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_vtab_cursor ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_2__ {int pData; } ;
typedef TYPE_1__ ExpertCsr ;


 int VAR_0 ;
 int * FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(sqlite3_vtab_cursor *VAR_1, sqlite3_context *VAR_2, int VAR_3){
  ExpertCsr *VAR_4 = (ExpertCsr*)VAR_1;
  sqlite3_value *VAR_5;
  VAR_5 = FUNC_0(VAR_4->pData, VAR_3);
  if( VAR_5 ){
    FUNC_1(VAR_2, VAR_5);
  }
  return VAR_0;
}
