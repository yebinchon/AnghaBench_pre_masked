
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sqlite3_vfs ;
typedef int sqlite3_file ;
struct TYPE_5__ {int mutex; } ;
typedef TYPE_1__ sqlite3 ;
typedef int Pager ;
typedef int Btree ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (TYPE_1__*,char const*) ;
 int FUNC_5 (int *,int,void*) ;
 unsigned int FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

int FUNC_13(sqlite3 *VAR_7, const char *VAR_8, int VAR_9, void *VAR_10){
  int VAR_11 = VAR_0;
  Btree *VAR_12;




  FUNC_11(VAR_7->mutex);
  VAR_12 = FUNC_4(VAR_7, VAR_8);
  if( VAR_12 ){
    Pager *VAR_13;
    sqlite3_file *VAR_14;
    FUNC_1(VAR_12);
    VAR_13 = FUNC_3(VAR_12);
    FUNC_0( VAR_13!=0 );
    VAR_14 = FUNC_7(VAR_13);
    FUNC_0( VAR_14!=0 );
    if( VAR_9==VAR_2 ){
      *(sqlite3_file**)VAR_10 = VAR_14;
      VAR_11 = VAR_6;
    }else if( VAR_9==VAR_4 ){
      *(sqlite3_vfs**)VAR_10 = FUNC_9(VAR_13);
      VAR_11 = VAR_6;
    }else if( VAR_9==VAR_3 ){
      *(sqlite3_file**)VAR_10 = FUNC_8(VAR_13);
      VAR_11 = VAR_6;
    }else if( VAR_9==VAR_1 ){
      *(unsigned int*)VAR_10 = FUNC_6(VAR_13);
      VAR_11 = VAR_6;
    }else{
      VAR_11 = FUNC_5(VAR_14, VAR_9, VAR_10);
    }
    FUNC_2(VAR_12);
  }
  FUNC_12(VAR_7->mutex);
  return VAR_11;
}
