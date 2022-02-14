
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CallCount {int nTotal; scalar_t__ nValue; scalar_t__ nStep; } ;
typedef int sqlite3_context ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (int *,double) ;

__attribute__((used)) static void FUNC_2(sqlite3_context *VAR_0){
  struct CallCount *VAR_1;
  VAR_1 = (struct CallCount*)FUNC_0(VAR_0, sizeof(*VAR_1));
  if( VAR_1 ){
    VAR_1->nValue = VAR_1->nStep;
    if( VAR_1->nTotal>1 ){
      double VAR_2 = (double)VAR_1->nValue / (double)(VAR_1->nTotal-1);
      FUNC_1(VAR_0, VAR_2);
    }else{
      FUNC_1(VAR_0, 0.0);
    }
  }
}
