
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int out; int db; } ;
typedef TYPE_1__ ShellState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char const*,int ,TYPE_1__*,char**) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int,char*,char*,char const*) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int ,char*,char*) ;

__attribute__((used)) static int FUNC_8(
  ShellState *VAR_2,
  const char *VAR_3
){
  int VAR_4;
  char *VAR_5 = 0;
  VAR_4 = FUNC_3(VAR_2->db, VAR_3, VAR_1, VAR_2, &VAR_5);
  if( VAR_4==VAR_0 ){
    char *VAR_6;
    int VAR_7 = FUNC_6(VAR_3);
    FUNC_2(VAR_2->out, "/****** CORRUPTION ERROR *******/\n");
    if( VAR_5 ){
      FUNC_7(VAR_2->out, "/****** %s ******/\n", VAR_5);
      FUNC_4(VAR_5);
      VAR_5 = 0;
    }
    VAR_6 = FUNC_1( VAR_7+100 );
    if( VAR_6==0 ) return VAR_4;
    FUNC_5(VAR_7+100, VAR_6, "%s ORDER BY rowid DESC", VAR_3);
    VAR_4 = FUNC_3(VAR_2->db, VAR_6, VAR_1, VAR_2, &VAR_5);
    if( VAR_4 ){
      FUNC_7(VAR_2->out, "/****** ERROR: %s ******/\n", VAR_5);
    }else{
      VAR_4 = VAR_0;
    }
    FUNC_4(VAR_5);
    FUNC_0(VAR_6);
  }
  return VAR_4;
}
