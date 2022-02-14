
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,char*,int,int ) ;

void FUNC_3(sqlite3 *VAR_1){
  int VAR_2 = FUNC_0(VAR_1);
  if( VAR_2 ){
    FUNC_2(VAR_0, "Error: sqlite3_close() returns %d: %s\n",
        VAR_2, FUNC_1(VAR_1));
  }
}
