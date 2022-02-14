
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct NthValueCtx {double nStep; int pValue; } ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;
typedef double i64 ;




 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *) ;
 double FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 double FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  struct NthValueCtx *VAR_3;
  VAR_3 = (struct NthValueCtx*)FUNC_1(VAR_0, sizeof(*VAR_3));
  if( VAR_3 ){
    i64 VAR_4;
    switch( FUNC_7(VAR_2[1]) ){
      case 128:
        VAR_4 = FUNC_6(VAR_2[1]);
        break;
      case 129: {
        double VAR_5 = FUNC_4(VAR_2[1]);
        if( ((i64)VAR_5)!=VAR_5 ) goto error_out;
        VAR_4 = (i64)VAR_5;
        break;
      }
      default:
        goto error_out;
    }
    if( VAR_4<=0 ) goto error_out;

    VAR_3->nStep++;
    if( VAR_4==VAR_3->nStep ){
      VAR_3->pValue = FUNC_5(VAR_2[0]);
      if( !VAR_3->pValue ){
        FUNC_3(VAR_0);
      }
    }
  }
  FUNC_0(VAR_1);
  FUNC_0(VAR_2);
  return;

 error_out:
  FUNC_2(
      VAR_0, "second argument to nth_value must be a positive integer", -1
  );
}
