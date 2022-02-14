
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(char *VAR_1)
{
 if (VAR_0)
  FUNC_0(".globl %c%s\n", VAR_0, VAR_1);
 else
  FUNC_0(".globl %s\n", VAR_1);
 FUNC_0("\tALGN\n");
 if (VAR_0)
  FUNC_0("%c%s:\n", VAR_0, VAR_1);
 else
  FUNC_0("%s:\n", VAR_1);
}
