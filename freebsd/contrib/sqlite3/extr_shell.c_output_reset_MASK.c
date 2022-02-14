
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* outfile; int out; scalar_t__ doXdgOpen; int zTempFile; } ;
typedef TYPE_1__ ShellState ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char const*,int ) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (int ,char*,char*) ;

__attribute__((used)) static void FUNC_8(ShellState *VAR_2){
  if( VAR_2->outfile[0]=='|' ){

    FUNC_2(VAR_2->out);

  }else{
    FUNC_1(VAR_2->out);

    if( VAR_2->doXdgOpen ){
      const char *VAR_3 =





      "xdg-open";

      char *VAR_4;
      VAR_4 = FUNC_4("%s %s", VAR_3, VAR_2->zTempFile);
      if( FUNC_6(VAR_4) ){
        FUNC_7(VAR_0, "Failed: [%s]\n", VAR_4);
      }
      FUNC_3(VAR_4);
      FUNC_0(VAR_2);
      VAR_2->doXdgOpen = 0;
      FUNC_5(100);
    }

  }
  VAR_2->outfile[0] = 0;
  VAR_2->out = VAR_1;
}
