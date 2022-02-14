
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int sqlite3 ;
typedef int aPrefix ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char FUNC_2 (char const*) ;
 char* FUNC_3 (int *,char const*,char const*) ;
 int * FUNC_4 (int *) ;
 int VAR_0 ;
 char* FUNC_5 (char*,...) ;
 int FUNC_6 (int *,char*,int,int ) ;
 int FUNC_7 (int *,int *) ;
 scalar_t__ FUNC_8 (char const*,char*) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (char const*) ;
 scalar_t__ FUNC_11 (char const*,char const*,int) ;

__attribute__((used)) static void FUNC_12(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  static const char *VAR_4[] = {
     "TABLE",
     "INDEX",
     "UNIQUE INDEX",
     "VIEW",
     "TRIGGER",
     "VIRTUAL TABLE"
  };
  int VAR_5 = 0;
  const char *VAR_6 = (const char*)FUNC_9(VAR_3[0]);
  const char *VAR_7 = (const char*)FUNC_9(VAR_3[1]);
  const char *VAR_8 = (const char*)FUNC_9(VAR_3[2]);
  sqlite3 *VAR_9 = FUNC_4(VAR_1);
  FUNC_0(VAR_2);
  if( VAR_6!=0 && FUNC_11(VAR_6, "CREATE ", 7)==0 ){
    for(VAR_5=0; VAR_5<(int)(sizeof(VAR_4)/sizeof(VAR_4[0])); VAR_5++){
      int VAR_10 = FUNC_10(VAR_4[VAR_5]);
      if( FUNC_11(VAR_6+7, VAR_4[VAR_5], VAR_10)==0 && VAR_6[VAR_10+7]==' ' ){
        char *VAR_11 = 0;
        char *VAR_12 = 0;
        if( VAR_7 ){
          char VAR_13 = FUNC_2(VAR_7);
          if( VAR_13 && FUNC_8(VAR_7,"temp")!=0 ){
            VAR_11 = FUNC_5("%.*s \"%w\".%s", VAR_10+7, VAR_6, VAR_7, VAR_6+VAR_10+8);
          }else{
            VAR_11 = FUNC_5("%.*s %s.%s", VAR_10+7, VAR_6, VAR_7, VAR_6+VAR_10+8);
          }
        }
        if( VAR_8
         && VAR_4[VAR_5][0]=='V'
         && (VAR_12 = FUNC_3(VAR_9, VAR_7, VAR_8))!=0
        ){
          if( VAR_11==0 ){
            VAR_11 = FUNC_5("%s\n/* %s */", VAR_6, VAR_12);
          }else{
            VAR_11 = FUNC_5("%z\n/* %s */", VAR_11, VAR_12);
          }
          FUNC_1(VAR_12);
        }
        if( VAR_11 ){
          FUNC_6(VAR_1, VAR_11, -1, VAR_0);
          return;
        }
      }
    }
  }
  FUNC_7(VAR_1, VAR_3[0]);
}
