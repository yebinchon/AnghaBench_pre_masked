
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* zDestTable; } ;
typedef TYPE_1__ ShellState ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 char FUNC_2 (char const*) ;
 int FUNC_3 () ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(ShellState *VAR_0, const char *VAR_1){
  int VAR_2, VAR_3;
  char VAR_4;
  char *VAR_5;

  if( VAR_0->zDestTable ){
    FUNC_0(VAR_0->zDestTable);
    VAR_0->zDestTable = 0;
  }
  if( VAR_1==0 ) return;
  VAR_4 = FUNC_2(VAR_1);
  VAR_3 = FUNC_4(VAR_1);
  if( VAR_4 ) VAR_3 += VAR_3+2;
  VAR_5 = VAR_0->zDestTable = FUNC_1( VAR_3+1 );
  if( VAR_5==0 ) FUNC_3();
  VAR_3 = 0;
  if( VAR_4 ) VAR_5[VAR_3++] = VAR_4;
  for(VAR_2=0; VAR_1[VAR_2]; VAR_2++){
    VAR_5[VAR_3++] = VAR_1[VAR_2];
    if( VAR_1[VAR_2]==VAR_4 ) VAR_5[VAR_3++] = VAR_4;
  }
  if( VAR_4 ) VAR_5[VAR_3++] = VAR_4;
  VAR_5[VAR_3] = 0;
}
