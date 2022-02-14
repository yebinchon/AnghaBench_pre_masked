
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 scalar_t__ FUNC_0 (char*,char const*) ;
 int FUNC_1 (int *,char*,char const*,char const*) ;

__attribute__((used)) static void FUNC_2(FILE *VAR_0, const char *VAR_1, const char *VAR_2){
  if( VAR_1==0 ) return;
  if( VAR_2==0 ) return;
  if( FUNC_0("CREATE TABLE ['\"]*", VAR_1)==0 ){
    FUNC_1(VAR_0, "CREATE TABLE IF NOT EXISTS %s%s", VAR_1+13, VAR_2);
  }else{
    FUNC_1(VAR_0, "%s%s", VAR_1, VAR_2);
  }
}
