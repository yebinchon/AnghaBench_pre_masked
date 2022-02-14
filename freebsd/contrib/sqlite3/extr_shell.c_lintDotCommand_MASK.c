
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ShellState ;


 int VAR_0 ;
 int FUNC_0 (int *,char**,int) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int FUNC_4(
  ShellState *VAR_2,
  char **VAR_3,
  int VAR_4
){
  int VAR_5;
  VAR_5 = (VAR_4>=2 ? FUNC_3(VAR_3[1]) : 0);
  if( VAR_5<1 || FUNC_2(VAR_3[1], "fkey-indexes", VAR_5) ) goto usage;
  return FUNC_0(VAR_2, VAR_3, VAR_4);

 usage:
  FUNC_1(VAR_1, "Usage %s sub-command ?switches...?\n", VAR_3[0]);
  FUNC_1(VAR_1, "Where sub-commands are:\n");
  FUNC_1(VAR_1, "    fkey-indexes\n");
  return VAR_0;
}
