
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct LastValueCtx {scalar_t__ pVal; } ;
typedef int sqlite3_context ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_2(sqlite3_context *VAR_0){
  struct LastValueCtx *VAR_1;
  VAR_1 = (struct LastValueCtx*)FUNC_0(VAR_0, 0);
  if( VAR_1 && VAR_1->pVal ){
    FUNC_1(VAR_0, VAR_1->pVal);
  }
}
