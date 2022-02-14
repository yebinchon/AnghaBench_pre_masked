
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct IdxSampleCtx {double nRow; int nRet; int target; int iTarget; } ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,void*) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  struct IdxSampleCtx *VAR_3 = (struct IdxSampleCtx*)FUNC_3(VAR_0);
  int VAR_4;

  (void)VAR_2;
  FUNC_0( VAR_1==0 );
  if( VAR_3->nRow==0.0 ){
    VAR_4 = 1;
  }else{
    VAR_4 = (VAR_3->nRet / VAR_3->nRow) <= VAR_3->target;
    if( VAR_4==0 ){
      unsigned short VAR_5;
      FUNC_1(2, (void*)&VAR_5);
      VAR_4 = ((int)VAR_5 % 100) <= VAR_3->iTarget;
    }
  }

  FUNC_2(VAR_0, VAR_4);
  VAR_3->nRow += 1.0;
  VAR_3->nRet += (double)VAR_4;
}
