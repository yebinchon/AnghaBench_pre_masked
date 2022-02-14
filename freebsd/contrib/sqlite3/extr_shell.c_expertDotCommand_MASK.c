
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int bVerbose; int pExpert; } ;
struct TYPE_4__ {TYPE_2__ expert; int db; } ;
typedef TYPE_1__ ShellState ;
typedef int ExpertInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,char**) ;
 int VAR_3 ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;

__attribute__((used)) static int FUNC_8(
  ShellState *VAR_4,
  char **VAR_5,
  int VAR_6
){
  int VAR_7 = VAR_2;
  char *VAR_8 = 0;
  int VAR_9;
  int VAR_10 = 0;

  FUNC_0( VAR_4->expert.pExpert==0 );
  FUNC_2(&VAR_4->expert, 0, sizeof(ExpertInfo));

  for(VAR_9=1; VAR_7==VAR_2 && VAR_9<VAR_6; VAR_9++){
    char *VAR_11 = VAR_5[VAR_9];
    int VAR_12;
    if( VAR_11[0]=='-' && VAR_11[1]=='-' ) VAR_11++;
    VAR_12 = FUNC_6(VAR_11);
    if( VAR_12>=2 && 0==FUNC_7(VAR_11, "-verbose", VAR_12) ){
      VAR_4->expert.bVerbose = 1;
    }
    else if( VAR_12>=2 && 0==FUNC_7(VAR_11, "-sample", VAR_12) ){
      if( VAR_9==(VAR_6-1) ){
        FUNC_3(VAR_3, "option requires an argument: %s\n", VAR_11);
        VAR_7 = VAR_1;
      }else{
        VAR_10 = (int)FUNC_1(VAR_5[++VAR_9]);
        if( VAR_10<0 || VAR_10>100 ){
          FUNC_3(VAR_3, "value out of range: %s\n", VAR_5[VAR_9]);
          VAR_7 = VAR_1;
        }
      }
    }
    else{
      FUNC_3(VAR_3, "unknown option: %s\n", VAR_11);
      VAR_7 = VAR_1;
    }
  }

  if( VAR_7==VAR_2 ){
    VAR_4->expert.pExpert = FUNC_5(VAR_4->db, &VAR_8);
    if( VAR_4->expert.pExpert==0 ){
      FUNC_3(VAR_3, "sqlite3_expert_new: %s\n", VAR_8);
      VAR_7 = VAR_1;
    }else{
      FUNC_4(
          VAR_4->expert.pExpert, VAR_0, VAR_10
      );
    }
  }

  return VAR_7;
}
