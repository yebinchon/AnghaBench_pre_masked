
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int i64 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (char const*) ;
 char* FUNC_10 (char const*,char*,char*,char*) ;

__attribute__((used)) static void FUNC_11(
  sqlite3_context *VAR_1,
  int VAR_2,
  sqlite3_value **VAR_3
){
  const char *VAR_4 = (const char*)FUNC_8(VAR_3[0]);
  FUNC_0(VAR_2);
  if( VAR_4[0]=='\'' ){
    int VAR_5 = FUNC_7(VAR_3[0]);
    int VAR_6;
    char VAR_7[20];
    char VAR_8[20];
    const char *VAR_9 = 0;
    const char *VAR_10 = 0;
    int VAR_11 = 0;
    int VAR_12 = 0;

    for(VAR_6=0; VAR_4[VAR_6]; VAR_6++){
      if( VAR_9==0 && VAR_4[VAR_6]=='\n' ){
        VAR_9 = FUNC_10(VAR_4, "\\n", "\\012", VAR_7);
        VAR_12 = (int)FUNC_9(VAR_9);
      }
      if( VAR_10==0 && VAR_4[VAR_6]=='\r' ){
        VAR_10 = FUNC_10(VAR_4, "\\r", "\\015", VAR_8);
        VAR_11 = (int)FUNC_9(VAR_10);
      }
    }

    if( VAR_9 || VAR_10 ){
      int VAR_13 = 0;
      i64 VAR_14 = (VAR_12 > VAR_11) ? VAR_12 : VAR_11;
      i64 VAR_15 = VAR_14 * VAR_5 + (VAR_14+64)*2;
      char *VAR_16 = (char*)FUNC_3(VAR_15);
      if( VAR_16==0 ){
        FUNC_4(VAR_1);
        return;
      }

      if( VAR_9 && VAR_10 ){
        FUNC_1(&VAR_16[VAR_13], "replace(replace(", 16);
        VAR_13 += 16;
      }else{
        FUNC_1(&VAR_16[VAR_13], "replace(", 8);
        VAR_13 += 8;
      }
      for(VAR_6=0; VAR_4[VAR_6]; VAR_6++){
        if( VAR_4[VAR_6]=='\n' ){
          FUNC_1(&VAR_16[VAR_13], VAR_9, VAR_12);
          VAR_13 += VAR_12;
        }else if( VAR_4[VAR_6]=='\r' ){
          FUNC_1(&VAR_16[VAR_13], VAR_10, VAR_11);
          VAR_13 += VAR_11;
        }else{
          VAR_16[VAR_13] = VAR_4[VAR_6];
          VAR_13++;
        }
      }

      if( VAR_9 ){
        FUNC_1(&VAR_16[VAR_13], ",'", 2); VAR_13 += 2;
        FUNC_1(&VAR_16[VAR_13], VAR_9, VAR_12); VAR_13 += VAR_12;
        FUNC_1(&VAR_16[VAR_13], "', char(10))", 12); VAR_13 += 12;
      }
      if( VAR_10 ){
        FUNC_1(&VAR_16[VAR_13], ",'", 2); VAR_13 += 2;
        FUNC_1(&VAR_16[VAR_13], VAR_10, VAR_11); VAR_13 += VAR_11;
        FUNC_1(&VAR_16[VAR_13], "', char(13))", 12); VAR_13 += 12;
      }

      FUNC_5(VAR_1, VAR_16, VAR_13, VAR_0);
      FUNC_2(VAR_16);
      return;
    }
  }

  FUNC_6(VAR_1, VAR_3[0]);
}
