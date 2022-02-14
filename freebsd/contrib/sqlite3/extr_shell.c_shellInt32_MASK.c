
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_int64 ;
typedef int sqlite3_context ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  const unsigned char *VAR_3;
  int VAR_4;
  int VAR_5;

  FUNC_0(VAR_1);
  VAR_4 = FUNC_3(VAR_2[0]);
  VAR_3 = (const unsigned char*)FUNC_2(VAR_2[0]);
  VAR_5 = FUNC_4(VAR_2[1]);

  if( VAR_5>=0 && (VAR_5+1)*4<=VAR_4 ){
    const unsigned char *VAR_6 = &VAR_3[VAR_5*4];
    sqlite3_int64 VAR_7 = ((sqlite3_int64)VAR_6[0]<<24)
                       + ((sqlite3_int64)VAR_6[1]<<16)
                       + ((sqlite3_int64)VAR_6[2]<< 8)
                       + ((sqlite3_int64)VAR_6[3]<< 0);
    FUNC_1(VAR_0, VAR_7);
  }
}
