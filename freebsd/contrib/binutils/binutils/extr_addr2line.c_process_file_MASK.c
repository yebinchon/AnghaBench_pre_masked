
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;
typedef int asection ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,char***) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int *,char const*) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 int * FUNC_9 (char const*,char const*) ;
 int FUNC_10 (int ,char const*,...) ;
 int FUNC_11 (char**) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (char**) ;
 int FUNC_14 (int *) ;
 char** VAR_3 ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int) ;

__attribute__((used)) static int
FUNC_17 (const char *VAR_4, const char *VAR_5,
       const char *VAR_6)
{
  bfd *VAR_7;
  asection *VAR_8;
  char **VAR_9;

  if (FUNC_12 (VAR_4) < 1)
    return 1;

  VAR_7 = FUNC_9 (VAR_4, VAR_6);
  if (VAR_7 == ((void*)0))
    FUNC_4 (VAR_4);

  if (FUNC_1 (VAR_7, VAR_0))
    FUNC_10 (FUNC_0("%s: cannot get addresses from archive"), VAR_4);

  if (! FUNC_2 (VAR_7, VAR_2, &VAR_9))
    {
      FUNC_8 (FUNC_6 (VAR_7));
      if (FUNC_5 () == VAR_1)
 {
   FUNC_13 (VAR_9);
   FUNC_11 (VAR_9);
 }
      FUNC_16 (1);
    }

  if (VAR_5 != ((void*)0))
    {
      VAR_8 = FUNC_7 (VAR_7, VAR_5);
      if (VAR_8 == ((void*)0))
 FUNC_10 (FUNC_0("%s: cannot find section %s"), VAR_4, VAR_5);
    }
  else
    VAR_8 = ((void*)0);

  FUNC_14 (VAR_7);

  FUNC_15 (VAR_7, VAR_8);

  if (VAR_3 != ((void*)0))
    {
      FUNC_11 (VAR_3);
      VAR_3 = ((void*)0);
    }

  FUNC_3 (VAR_7);

  return 0;
}
