
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int isError; int skipFlag; } ;
typedef TYPE_1__ sqlite3_context ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(sqlite3_context *VAR_0){
  FUNC_0( VAR_0->isError<=0 );
  VAR_0->isError = -1;
  VAR_0->skipFlag = 1;
}
