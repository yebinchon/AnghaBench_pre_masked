
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pLog; } ;
typedef TYPE_1__ ShellState ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,int,char const*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, int VAR_1, const char *VAR_2){
  ShellState *VAR_3 = (ShellState*)VAR_0;
  if( VAR_3->pLog==0 ) return;
  FUNC_1(VAR_3->pLog, "(%d) %s\n", VAR_1, VAR_2);
  FUNC_0(VAR_3->pLog);
}
