
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct CallCount {int nStep; } ;
typedef int sqlite3_value ;
typedef int sqlite3_context ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int) ;

__attribute__((used)) static void FUNC_2(
  sqlite3_context *VAR_0,
  int VAR_1,
  sqlite3_value **VAR_2
){
  struct CallCount *VAR_3;
  VAR_3 = (struct CallCount*)FUNC_1(VAR_0, sizeof(*VAR_3));
  if( VAR_3 ) VAR_3->nStep = 1;
  FUNC_0(VAR_1);
  FUNC_0(VAR_2);
}
