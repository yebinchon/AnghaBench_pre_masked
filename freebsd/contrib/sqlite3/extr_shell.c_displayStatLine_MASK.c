
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zLine ;
typedef int sqlite3_int64 ;
struct TYPE_3__ {int out; } ;
typedef TYPE_1__ ShellState ;


 int FUNC_0 (int ,char*,char*,char*) ;
 int FUNC_1 (int,char*,char*,int,...) ;
 int FUNC_2 (int,int*,int*,int) ;

__attribute__((used)) static void FUNC_3(
  ShellState *VAR_0,
  char *VAR_1,
  char *VAR_2,
  int VAR_3,
  int VAR_4
){
  sqlite3_int64 VAR_5 = -1;
  sqlite3_int64 VAR_6 = -1;
  int VAR_7, VAR_8;
  char VAR_9[200];
  FUNC_2(VAR_3, &VAR_5, &VAR_6, VAR_4);
  for(VAR_7=0, VAR_8=0; VAR_2[VAR_7]; VAR_7++){
    if( VAR_2[VAR_7]=='%' ) VAR_8++;
  }
  if( VAR_8>1 ){
    FUNC_1(sizeof(VAR_9), VAR_9, VAR_2, VAR_5, VAR_6);
  }else{
    FUNC_1(sizeof(VAR_9), VAR_9, VAR_2, VAR_6);
  }
  FUNC_0(VAR_0->out, "%-36s %s\n", VAR_1, VAR_9);
}
