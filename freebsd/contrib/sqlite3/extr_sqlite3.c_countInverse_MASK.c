
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3_value ;
typedef int sqlite3_context ;
struct TYPE_4__ {int bInverse; int n; } ;
typedef TYPE_1__ CountCtx ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(sqlite3_context *VAR_1, int VAR_2, sqlite3_value **VAR_3){
  CountCtx *VAR_4;
  VAR_4 = FUNC_1(VAR_1, sizeof(*VAR_4));

  if( (VAR_2==0 || VAR_0!=FUNC_2(VAR_3[0])) && FUNC_0(VAR_4) ){
    VAR_4->n--;



  }
}
