
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3expert ;
struct TYPE_4__ {int bVerbose; int * pExpert; } ;
struct TYPE_5__ {TYPE_1__ expert; int * out; } ;
typedef TYPE_2__ ShellState ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 char* FUNC_5 (int *,int,int ) ;

__attribute__((used)) static int FUNC_6(
  ShellState *VAR_5,
  int VAR_6,
  char **VAR_7
){
  int VAR_8 = VAR_4;
  sqlite3expert *VAR_9 = VAR_5->expert.pExpert;
  FUNC_0( *VAR_9 );
  FUNC_0( VAR_6 || VAR_7==0 || *VAR_7==0 );
  if( VAR_6==0 ){
    FILE *VAR_10 = VAR_5->out;
    int VAR_11 = VAR_5->expert.bVerbose;

    VAR_8 = FUNC_2(VAR_9, VAR_7);
    if( VAR_8==VAR_4 ){
      int VAR_12 = FUNC_3(VAR_9);
      int VAR_13;

      if( VAR_11 ){
        const char *VAR_14 = FUNC_5(VAR_9,0,VAR_0);
        FUNC_1(VAR_10, "-- Candidates -----------------------------\n");
        FUNC_1(VAR_10, "%s\n", VAR_14);
      }
      for(VAR_13=0; VAR_13<VAR_12; VAR_13++){
        const char *VAR_15 = FUNC_5(VAR_9, VAR_13, VAR_3);
        const char *VAR_16 = FUNC_5(VAR_9, VAR_13, VAR_1);
        const char *VAR_17 = FUNC_5(VAR_9, VAR_13, VAR_2);
        if( VAR_16==0 ) VAR_16 = "(no new indexes)\n";
        if( VAR_11 ){
          FUNC_1(VAR_10, "-- Query %d --------------------------------\n",VAR_13+1);
          FUNC_1(VAR_10, "%s\n\n", VAR_15);
        }
        FUNC_1(VAR_10, "%s\n", VAR_16);
        FUNC_1(VAR_10, "%s\n", VAR_17);
      }
    }
  }
  FUNC_4(VAR_9);
  VAR_5->expert.pExpert = 0;
  return VAR_8;
}
