
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_int64 ;
typedef int sqlite3_context ;
typedef scalar_t__ mode_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,char*,char const*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (int *,char*,int) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *,char const*,int *,scalar_t__,int) ;

__attribute__((used)) static void FUNC_9(
  sqlite3_context *VAR_3,
  int VAR_4,
  sqlite3_value **VAR_5
){
  const char *VAR_6;
  mode_t VAR_7 = 0;
  int VAR_8;
  sqlite3_int64 VAR_9 = -1;

  if( VAR_4<2 || VAR_4>4 ){
    FUNC_4(VAR_3,
        "wrong number of arguments to function writefile()", -1
    );
    return;
  }

  VAR_6 = (const char*)FUNC_7(VAR_5[0]);
  if( VAR_6==0 ) return;
  if( VAR_4>=3 ){
    VAR_7 = (mode_t)FUNC_5(VAR_5[2]);
  }
  if( VAR_4==4 ){
    VAR_9 = FUNC_6(VAR_5[3]);
  }

  VAR_8 = FUNC_8(VAR_3, VAR_6, VAR_5[1], VAR_7, VAR_9);
  if( VAR_8==1 && VAR_2==VAR_0 ){
    if( FUNC_3(VAR_6)==VAR_1 ){
      VAR_8 = FUNC_8(VAR_3, VAR_6, VAR_5[1], VAR_7, VAR_9);
    }
  }

  if( VAR_4>2 && VAR_8!=0 ){
    if( FUNC_1(VAR_7) ){
      FUNC_2(VAR_3, "failed to create symlink: %s", VAR_6);
    }else if( FUNC_0(VAR_7) ){
      FUNC_2(VAR_3, "failed to create directory: %s", VAR_6);
    }else{
      FUNC_2(VAR_3, "failed to write file: %s", VAR_6);
    }
  }
}
