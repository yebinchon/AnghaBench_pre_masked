
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ nArg; scalar_t__ nUsed; int * apArg; } ;
typedef TYPE_1__ PrintfArguments ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static char *FUNC_1(PrintfArguments *VAR_0){
  if( VAR_0->nArg<=VAR_0->nUsed ) return 0;
  return (char*)FUNC_0(VAR_0->apArg[VAR_0->nUsed++]);
}
