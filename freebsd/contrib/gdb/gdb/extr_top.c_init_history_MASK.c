
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,char*,int *) ;
 int VAR_0 ;
 char* FUNC_2 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (char*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;

void
FUNC_7 (void)
{
  char *VAR_3;

  VAR_3 = FUNC_2 ("HISTSIZE");
  if (VAR_3)
    VAR_2 = FUNC_0 (VAR_3);
  else if (!VAR_2)
    VAR_2 = 256;

  FUNC_5 (VAR_2);

  VAR_3 = FUNC_2 ("GDBHISTFILE");
  if (VAR_3)
    VAR_1 = FUNC_4 (VAR_3, FUNC_6 (VAR_3));
  else if (!VAR_1)
    {







      VAR_1 = FUNC_1 (VAR_0, "/.gdb_history", ((void*)0));

    }
  FUNC_3 (VAR_1);
}
