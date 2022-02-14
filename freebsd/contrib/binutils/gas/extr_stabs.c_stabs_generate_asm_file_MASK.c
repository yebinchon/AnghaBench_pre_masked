
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char**,unsigned int*) ;
 int FUNC_2 (int ,char*) ;
 char* FUNC_3 () ;
 int FUNC_4 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ VAR_1 ;

void
FUNC_6 (void)
{
  char *VAR_2;
  unsigned int VAR_3;

  FUNC_1 (&VAR_2, &VAR_3);
  if (VAR_1)
    {
      char *VAR_4, *VAR_5;

      VAR_4 = FUNC_3 ();
      VAR_5 = FUNC_0 (FUNC_5 (VAR_4) + 2);
      FUNC_4 (VAR_5, "%s%s", VAR_4, "/");
      FUNC_2 (VAR_0, VAR_5);
    }
  FUNC_2 (VAR_0, VAR_2);
}
