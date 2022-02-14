
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 char* FUNC_1 (char*,char const*) ;
 int FUNC_2 (int *,char*,int,int ) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  const char *VAR_4 = (const char*)FUNC_3(VAR_3[0]);
  FUNC_0(VAR_2);
  if( VAR_4 ){
    char *VAR_5 = FUNC_1("\"%w\"", VAR_4);
    FUNC_2(VAR_1, VAR_5, -1, VAR_0);
  }
}
