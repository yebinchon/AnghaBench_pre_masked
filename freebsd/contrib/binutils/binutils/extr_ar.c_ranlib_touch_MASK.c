
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (int *,int ,char***) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (char const*) ;
 int * FUNC_4 (char const*,char const*,int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,char const*) ;
 int FUNC_11 (char**) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (char**) ;
 int FUNC_14 (char const*,int,int ) ;
 int FUNC_15 (char const*) ;
 int FUNC_16 (int) ;

__attribute__((used)) static int
FUNC_17 (const char *VAR_5)
{




  int VAR_6;
  bfd *VAR_7;
  char **VAR_8;

  if (FUNC_12 (VAR_5) < 1)
    return 1;
  VAR_6 = FUNC_14 (VAR_5, VAR_1 | VAR_0, 0);
  if (VAR_6 < 0)
    {
      FUNC_8 (VAR_4);
      FUNC_3 (VAR_5);
    }

  VAR_7 = FUNC_4 (VAR_5, (const char *) ((void*)0), VAR_6);
  if (VAR_7 == ((void*)0))
    FUNC_3 (VAR_5);
  if (! FUNC_1 (VAR_7, VAR_2, &VAR_8))
    {
      FUNC_7 (VAR_5);
      if (FUNC_5 () == VAR_3)
 {
   FUNC_13 (VAR_8);
   FUNC_11 (VAR_8);
 }
      FUNC_16 (1);
    }

  if (! FUNC_6 (VAR_7))

    FUNC_10 (FUNC_0("%s: no archive map to update"), VAR_5);

  FUNC_9 (VAR_7);

  if (! FUNC_2 (VAR_7))
    FUNC_3 (VAR_5);

  return 0;
}
