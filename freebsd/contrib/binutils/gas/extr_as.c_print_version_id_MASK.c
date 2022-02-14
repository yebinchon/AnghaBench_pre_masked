
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,char*,char*,char*) ;
 int VAR_3 ;

void
FUNC_2 (void)
{
  static int VAR_4;

  if (VAR_4)
    return;
  VAR_4 = 1;

  FUNC_1 (VAR_3, FUNC_0("GNU assembler version %s (%s) using BFD version %s\n"),
    VAR_2, VAR_1, VAR_0);
}
