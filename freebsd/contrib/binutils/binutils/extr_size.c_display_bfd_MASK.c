
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ,char***) ;
 int VAR_1 ;
 char* FUNC_2 (int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char**) ;
 int FUNC_8 (char**) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_12 (bfd *VAR_6)
{
  char **VAR_7;

  if (FUNC_0 (VAR_6, VAR_0))

    return;

  if (FUNC_1 (VAR_6, VAR_3, &VAR_7))
    {
      FUNC_9 (VAR_6);
      FUNC_10 ("\n");
      return;
    }

  if (FUNC_3 () == VAR_2)
    {
      FUNC_5 (FUNC_4 (VAR_6));
      FUNC_8 (VAR_7);
      FUNC_7 (VAR_7);
      VAR_4 = 3;
      return;
    }

  if (FUNC_1 (VAR_6, VAR_1, &VAR_7))
    {
      const char *VAR_8;

      FUNC_9 (VAR_6);
      FUNC_6 (" (core file", VAR_5);

      VAR_8 = FUNC_2 (VAR_6);
      if (VAR_8)
 FUNC_10 (" invoked as %s", VAR_8);

      FUNC_11 (")\n");
      return;
    }

  FUNC_5 (FUNC_4 (VAR_6));

  if (FUNC_3 () == VAR_2)
    {
      FUNC_8 (VAR_7);
      FUNC_7 (VAR_7);
    }

  VAR_4 = 3;
}
