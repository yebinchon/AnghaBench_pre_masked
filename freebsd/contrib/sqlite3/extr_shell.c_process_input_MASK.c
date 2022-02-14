
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int lineno; int in; scalar_t__ outCount; int out; } ;
typedef TYPE_1__ ShellState ;


 scalar_t__ FUNC_0 (char) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*,TYPE_1__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,int) ;
 scalar_t__ FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,int) ;
 int FUNC_11 (char*,char*,int) ;
 char* FUNC_12 (int ,char*,int) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (char*,...) ;
 char* FUNC_15 (char*,int) ;
 scalar_t__ FUNC_16 (TYPE_1__*,char*,int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_17 () ;
 scalar_t__ FUNC_18 (char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_19 (char*) ;

__attribute__((used)) static int FUNC_20(ShellState *VAR_4){
  char *VAR_5 = 0;
  char *VAR_6 = 0;
  int VAR_7;
  int VAR_8 = 0;
  int VAR_9 = 0;
  int VAR_10 = 0;
  int VAR_11;
  int VAR_12 = 0;
  int VAR_13 = 0;

  VAR_4->lineno = 0;
  while( VAR_12==0 || !VAR_1 || (VAR_4->in==0 && VAR_3) ){
    FUNC_6(VAR_4->out);
    VAR_5 = FUNC_12(VAR_4->in, VAR_5, VAR_8>0);
    if( VAR_5==0 ){

      if( VAR_4->in==0 && VAR_3 ) FUNC_14("\n");
      break;
    }
    if( VAR_2 ){
      if( VAR_4->in!=0 ) break;
      VAR_2 = 0;
    }
    VAR_4->lineno++;
    if( VAR_8==0 && FUNC_2(VAR_5) ){
      if( FUNC_1(VAR_4, VAR_0) ) FUNC_14("%s\n", VAR_5);
      continue;
    }
    if( VAR_5 && (VAR_5[0]=='.' || VAR_5[0]=='#') && VAR_8==0 ){
      if( FUNC_1(VAR_4, VAR_0) ) FUNC_14("%s\n", VAR_5);
      if( VAR_5[0]=='.' ){
        VAR_11 = FUNC_5(VAR_5, VAR_4);
        if( VAR_11==2 ){
          break;
        }else if( VAR_11 ){
          VAR_12++;
        }
      }
      continue;
    }
    if( FUNC_9(VAR_5) && FUNC_10(VAR_6, VAR_8) ){
      FUNC_11(VAR_5,";",2);
    }
    VAR_7 = FUNC_19(VAR_5);
    if( VAR_8+VAR_7+2>=VAR_9 ){
      VAR_9 = VAR_8+VAR_7+100;
      VAR_6 = FUNC_15(VAR_6, VAR_9);
      if( VAR_6==0 ) FUNC_17();
    }
    VAR_10 = VAR_8;
    if( VAR_8==0 ){
      int VAR_14;
      for(VAR_14=0; VAR_5[VAR_14] && FUNC_0(VAR_5[VAR_14]); VAR_14++){}
      FUNC_3( VAR_9>0 && VAR_6!=0 );
      FUNC_11(VAR_6, VAR_5+VAR_14, VAR_7+1-VAR_14);
      VAR_13 = VAR_4->lineno;
      VAR_8 = VAR_7-VAR_14;
    }else{
      VAR_6[VAR_8++] = '\n';
      FUNC_11(VAR_6+VAR_8, VAR_5, VAR_7+1);
      VAR_8 += VAR_7;
    }
    if( VAR_8 && FUNC_8(&VAR_6[VAR_10], VAR_8-VAR_10)
                && FUNC_18(VAR_6) ){
      VAR_12 += FUNC_16(VAR_4, VAR_6, VAR_4->in, VAR_13);
      VAR_8 = 0;
      if( VAR_4->outCount ){
        FUNC_13(VAR_4);
        VAR_4->outCount = 0;
      }else{
        FUNC_4(VAR_4);
      }
    }else if( VAR_8 && FUNC_2(VAR_6) ){
      if( FUNC_1(VAR_4, VAR_0) ) FUNC_14("%s\n", VAR_6);
      VAR_8 = 0;
    }
  }
  if( VAR_8 && !FUNC_2(VAR_6) ){
    VAR_12 += FUNC_16(VAR_4, VAR_6, VAR_4->in, VAR_13);
  }
  FUNC_7(VAR_6);
  FUNC_7(VAR_5);
  return VAR_12>0;
}
