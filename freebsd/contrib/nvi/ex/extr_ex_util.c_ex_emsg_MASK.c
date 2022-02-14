
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int exm_t ;
typedef int SCR ;
 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,...) ;
 int FUNC_1 (int *,int ,char*,char*) ;

void
FUNC_2(SCR *VAR_1, char *VAR_2, exm_t VAR_3)
{
 switch (VAR_3) {
 case 138:
  FUNC_0(VAR_1, VAR_0, "168|Buffer %s is empty", VAR_2);
  break;
 case 137:
   FUNC_1(VAR_1, VAR_0, VAR_2,
       "144|%s: expanded into too many file names");
  break;
 case 136:
  FUNC_0(VAR_1, VAR_0,
      "283|The %s command requires the ex terminal interface", VAR_2);
  break;
 case 135:
  FUNC_0(VAR_1, VAR_0,
      "272|That form of %s requires the ex terminal interface",
      VAR_2);
  break;
 case 134:
  if (VAR_2 == ((void*)0))
   FUNC_0(VAR_1, VAR_0,
       "274|Command failed, no file read in yet.");
  else
   FUNC_0(VAR_1, VAR_0,
 "173|The %s command requires that a file have already been read in", VAR_2);
  break;
 case 133:
  FUNC_0(VAR_1, VAR_0, "171|No previous buffer to execute");
  break;
 case 132:
  FUNC_0(VAR_1, VAR_0, "172|No previous regular expression");
  break;
 case 131:
  FUNC_0(VAR_1, VAR_0, "230|This screen may not be suspended");
  break;
 case 130:
  FUNC_0(VAR_1, VAR_0,
"290|The %s command is not supported when the secure edit option is set", VAR_2);
  break;
 case 129:
  FUNC_0(VAR_1, VAR_0,
"284|That form of %s is not supported when the secure edit option is set", VAR_2);
  break;
 case 128:
  FUNC_0(VAR_1, VAR_0, "174|Usage: %s", VAR_2);
  break;
 }
}
