
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct LastValueCtx {scalar_t__ pVal; int nVal; } ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  struct LastValueCtx *VAR_3;
  FUNC_0(VAR_1);
  VAR_3 = (struct LastValueCtx*)FUNC_1(VAR_0, sizeof(*VAR_3));
  if( VAR_3 ){
    FUNC_4(VAR_3->pVal);
    VAR_3->pVal = FUNC_3(VAR_2[0]);
    if( VAR_3->pVal==0 ){
      FUNC_2(VAR_0);
    }else{
      VAR_3->nVal++;
    }
  }
}
