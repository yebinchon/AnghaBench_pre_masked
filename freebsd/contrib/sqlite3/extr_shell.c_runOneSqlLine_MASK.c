
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int zPrefix ;
struct TYPE_6__ {int flgProgress; int db; int out; scalar_t__ nProgress; } ;
typedef TYPE_1__ ShellState ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*,char*,char**) ;
 int FUNC_5 (int ) ;
 char* FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,char*,char*,...) ;
 int FUNC_9 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_10 (int ,char*,char*,char*) ;

__attribute__((used)) static int FUNC_11(ShellState *VAR_7, char *VAR_8, FILE *VAR_9, int VAR_10){
  int VAR_11;
  char *VAR_12 = 0;

  FUNC_1(VAR_7, 0);
  if( FUNC_0(VAR_7,VAR_3) ) FUNC_3(VAR_8);
  if( VAR_7->flgProgress & VAR_2 ) VAR_7->nProgress = 0;
  VAR_0;
  VAR_11 = FUNC_4(VAR_7, VAR_8, &VAR_12);
  VAR_1;
  if( VAR_11 || VAR_12 ){
    char VAR_13[100];
    if( VAR_9!=0 || !VAR_6 ){
      FUNC_8(sizeof(VAR_13), VAR_13,
                       "Error: near line %d:", VAR_10);
    }else{
      FUNC_8(sizeof(VAR_13), VAR_13, "Error:");
    }
    if( VAR_12!=0 ){
      FUNC_10(VAR_5, "%s %s\n", VAR_13, VAR_12);
      FUNC_7(VAR_12);
      VAR_12 = 0;
    }else{
      FUNC_10(VAR_5, "%s %s\n", VAR_13, FUNC_6(VAR_7->db));
    }
    return 1;
  }else if( FUNC_0(VAR_7, VAR_4) ){
    FUNC_2(VAR_7->out, "changes: %3d   total_changes: %d\n",
            FUNC_5(VAR_7->db), FUNC_9(VAR_7->db));
  }
  return 0;
}
