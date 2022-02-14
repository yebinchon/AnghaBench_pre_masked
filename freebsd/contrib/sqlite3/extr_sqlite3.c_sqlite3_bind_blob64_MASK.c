
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_uint64 ;
typedef int sqlite3_stmt ;


 void FUNC_0 (void*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int,void const*,int,void (*) (void*),int ) ;
 int FUNC_3 (void const*,void (*) (void*),int ) ;

int FUNC_4(
  sqlite3_stmt *VAR_0,
  int VAR_1,
  const void *VAR_2,
  sqlite3_uint64 VAR_3,
  void (*VAR_4)(void*)
){
  FUNC_1( VAR_4!=FUNC_0 );
  if( VAR_3>0x7fffffff ){
    return FUNC_3(VAR_2, VAR_4, 0);
  }else{
    return FUNC_2(VAR_0, VAR_1, VAR_2, (int)VAR_3, VAR_4, 0);
  }
}
