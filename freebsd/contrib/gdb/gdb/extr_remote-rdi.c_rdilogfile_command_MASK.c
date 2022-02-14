
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,scalar_t__) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (char*) ;

__attribute__((used)) static void
FUNC_5 (char *VAR_1, int VAR_2)
{
  if (!VAR_1 || FUNC_2 (VAR_1) == 0)
    {
      FUNC_1 ("rdi log file is '%s'\n", VAR_0);
      return;
    }

  if (VAR_0)
    FUNC_3 (VAR_0);

  VAR_0 = FUNC_4 (VAR_1);

  FUNC_0 (VAR_0);
}
