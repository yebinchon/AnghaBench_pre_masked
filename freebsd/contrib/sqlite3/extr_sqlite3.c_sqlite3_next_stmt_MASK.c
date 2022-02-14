
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_stmt ;
struct TYPE_5__ {int mutex; scalar_t__ pVdbe; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_6__ {scalar_t__ pNext; } ;
typedef TYPE_2__ Vdbe ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

sqlite3_stmt *FUNC_3(sqlite3 *VAR_1, sqlite3_stmt *VAR_2){
  sqlite3_stmt *VAR_3;






  FUNC_1(VAR_1->mutex);
  if( VAR_2==0 ){
    VAR_3 = (sqlite3_stmt*)VAR_1->pVdbe;
  }else{
    VAR_3 = (sqlite3_stmt*)((Vdbe*)VAR_2)->pNext;
  }
  FUNC_2(VAR_1->mutex);
  return VAR_3;
}
