
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char) ;
 scalar_t__ FUNC_2 (int ,char*,int) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;

void
FUNC_5 (char *VAR_0, int VAR_1)
{
  int VAR_2;

  if (FUNC_2 (FUNC_4 (), VAR_0, VAR_1) != 0)
    FUNC_0 ("sr_write: Error writing to remote");

  if (FUNC_3 () > 0)
    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
      FUNC_1 ("%c", VAR_0[VAR_2]);

  return;
}
