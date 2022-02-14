
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sqlite3_str ;
struct TYPE_3__ {int * aLimit; } ;
typedef TYPE_1__ sqlite3 ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ,int ) ;
 int * FUNC_1 (int) ;

sqlite3_str *FUNC_2(sqlite3 *VAR_3){
  sqlite3_str *VAR_4 = FUNC_1(sizeof(*VAR_4));
  if( VAR_4 ){
    FUNC_0(VAR_4, 0, 0, 0,
            VAR_3 ? VAR_3->aLimit[VAR_0] : VAR_1);
  }else{
    VAR_4 = &VAR_2;
  }
  return VAR_4;
}
