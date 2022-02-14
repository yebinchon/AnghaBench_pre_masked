
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vim_t ;
typedef int SCR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,...) ;

void
FUNC_1(SCR *VAR_2, char *VAR_3, vim_t VAR_4)
{
 switch (VAR_4) {
 case 135:
  FUNC_0(VAR_2, VAR_1,
      "201|Buffers should be specified before the command");
  break;
 case 134:
  FUNC_0(VAR_2, VAR_0, "209|The file is empty");
  break;
 case 133:
  FUNC_0(VAR_2, VAR_0, "202|Already at end-of-file");
  break;
 case 132:
  FUNC_0(VAR_2, VAR_0, "203|Already at end-of-line");
  break;
 case 131:
 case 130:
  FUNC_0(VAR_2,
      VAR_4 == 130 ? VAR_0 : VAR_1,
      "204|%s isn't a vi command", VAR_3);
  break;
 case 128:
  FUNC_0(VAR_2, VAR_1, "Window resize interrupted text input mode");
  break;
 case 129:
  FUNC_0(VAR_2, VAR_1, "205|Usage: %s", VAR_3);
  break;
 }
}
