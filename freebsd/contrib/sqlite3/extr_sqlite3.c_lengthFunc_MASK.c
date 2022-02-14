
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sqlite3_value ;
typedef int sqlite3_context ;






 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned char* FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  FUNC_1( VAR_1==1 );
  FUNC_0(VAR_1);
  switch( FUNC_6(VAR_2[0]) ){
    case 131:
    case 129:
    case 130: {
      FUNC_2(VAR_0, FUNC_4(VAR_2[0]));
      break;
    }
    case 128: {
      const unsigned char *VAR_3 = FUNC_5(VAR_2[0]);
      const unsigned char *VAR_4;
      unsigned char VAR_5;
      if( VAR_3==0 ) return;
      VAR_4 = VAR_3;
      while( (VAR_5 = *VAR_3)!=0 ){
        VAR_3++;
        if( VAR_5>=0xc0 ){
          while( (*VAR_3 & 0xc0)==0x80 ){ VAR_3++; VAR_4++; }
        }
      }
      FUNC_2(VAR_0, (int)(VAR_3-VAR_4));
      break;
    }
    default: {
      FUNC_3(VAR_0);
      break;
    }
  }
}
