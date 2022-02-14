
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lineno; int * in; } ;
typedef TYPE_1__ ShellState ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 char* FUNC_1 (int ) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char*,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_7 (int ,char*,char const*) ;

__attribute__((used)) static void FUNC_8(
  ShellState *VAR_2,
  const char *VAR_3
){
  char *VAR_4 = ((void*)0);
  const char *VAR_5 = VAR_3;
  char *VAR_6 = 0;
  FILE *VAR_7 = VAR_2->in;
  int VAR_8 = VAR_2->lineno;

  if (VAR_5 == ((void*)0)) {
    VAR_4 = FUNC_1(0);
    if( VAR_4==0 ){
      FUNC_4(VAR_0, "-- warning: cannot find home directory;"
                      " cannot read ~/.sqliterc\n");
      return;
    }
    VAR_6 = FUNC_6("%s/.sqliterc",VAR_4);
    VAR_5 = VAR_6;
  }
  VAR_2->in = FUNC_2(VAR_5,"rb");
  if( VAR_2->in ){
    if( VAR_1 ){
      FUNC_7(VAR_0,"-- Loading resources from %s\n",VAR_5);
    }
    FUNC_3(VAR_2);
    FUNC_0(VAR_2->in);
  }
  VAR_2->in = VAR_7;
  VAR_2->lineno = VAR_8;
  FUNC_5(VAR_6);
}
