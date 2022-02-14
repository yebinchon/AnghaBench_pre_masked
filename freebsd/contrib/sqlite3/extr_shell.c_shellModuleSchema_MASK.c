
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int ,char const*) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,int ,int,int ) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  const char *VAR_4 = (const char*)FUNC_6(VAR_3[0]);
  char *VAR_5 = FUNC_2(FUNC_3(VAR_1), 0, VAR_4);
  FUNC_0(VAR_2);
  if( VAR_5 ){
    FUNC_5(VAR_1, FUNC_4("/* %s */", VAR_5),
                        -1, VAR_0);
    FUNC_1(VAR_5);
  }
}
