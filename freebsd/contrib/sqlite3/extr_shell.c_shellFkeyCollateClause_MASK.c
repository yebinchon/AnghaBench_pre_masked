
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef int sqlite3 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char const*) ;
 int FUNC_4 (int *,char*,int,int ) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 int FUNC_6 (int *,char*,char const*,char const*,int ,char const**,int ,int ,int ) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(
  sqlite3_context *VAR_3,
  int VAR_4,
  sqlite3_value **VAR_5
){
  sqlite3 *VAR_6 = FUNC_1(VAR_3);
  const char *VAR_7;
  const char *VAR_8;
  const char *VAR_9;
  const char *VAR_10;
  const char *VAR_11;
  const char *VAR_12 = 0;
  int VAR_13;

  FUNC_0( VAR_4==4 );
  VAR_7 = (const char*)FUNC_7(VAR_5[0]);
  VAR_8 = (const char*)FUNC_7(VAR_5[1]);
  VAR_10 = (const char*)FUNC_7(VAR_5[2]);
  VAR_11 = (const char*)FUNC_7(VAR_5[3]);

  FUNC_4(VAR_3, "", -1, VAR_1);
  VAR_13 = FUNC_6(
      VAR_6, "main", VAR_7, VAR_8, 0, &VAR_9, 0, 0, 0
  );
  if( VAR_13==VAR_0 ){
    VAR_13 = FUNC_6(
        VAR_6, "main", VAR_10, VAR_11, 0, &VAR_12, 0, 0, 0
    );
  }

  if( VAR_13==VAR_0 && FUNC_5(VAR_9, VAR_12) ){
    char *VAR_14 = FUNC_3(" COLLATE %s", VAR_9);
    FUNC_4(VAR_3, VAR_14, -1, VAR_2);
    FUNC_2(VAR_14);
  }
}
