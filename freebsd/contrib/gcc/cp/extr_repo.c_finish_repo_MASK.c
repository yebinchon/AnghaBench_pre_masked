
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int FILE ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 char* FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int *) ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int *,char*,...) ;
 char* FUNC_7 (char*) ;
 char* FUNC_8 () ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int * FUNC_9 () ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (char*,char*) ;

void
FUNC_11 (void)
{
  tree VAR_6;
  char *VAR_7, *VAR_8;
  FILE *VAR_9;

  if (!VAR_2)
    return;

  if (VAR_0 || VAR_5)
    return;

  VAR_9 = FUNC_9 ();
  if (VAR_9 == 0)
    goto out;

  FUNC_6 (VAR_9, "M %s\n", VAR_3);
  VAR_7 = FUNC_8 ();
  FUNC_6 (VAR_9, "D %s\n", VAR_7);
  VAR_8 = FUNC_7 ("COLLECT_GCC_OPTIONS");
  if (VAR_8)
    {
      FUNC_6 (VAR_9, "A %s", VAR_8);




      if (!FUNC_10 (VAR_8, "'-frandom-seed="))
 FUNC_6 (VAR_9, " '-frandom-seed=%s'", VAR_1);
      FUNC_6 (VAR_9, "\n");
    }

  for (VAR_6 = VAR_4; VAR_6; VAR_6 = FUNC_3 (VAR_6))
    {
      tree VAR_10 = FUNC_4 (VAR_6);
      tree VAR_11 = FUNC_0 (VAR_10);
      char VAR_12 = FUNC_2 (VAR_11) ? 'C' : 'O';
      FUNC_6 (VAR_9, "%c %s\n", VAR_12, FUNC_1 (VAR_11));
    }

 out:
  if (VAR_9)
    FUNC_5 (VAR_9);
}
