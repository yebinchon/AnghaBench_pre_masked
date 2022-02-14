
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pex_obj {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (char*,char const*) ;
 struct pex_obj* FUNC_5 (int ,char*,int *) ;
 char* FUNC_6 (struct pex_obj*,int,char*,char**,char const*,char const*,int*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

struct pex_obj *
FUNC_7 (const char *VAR_7, char **VAR_8, const char *VAR_9,
   const char *VAR_10)
{
  struct pex_obj *VAR_11;
  const char *VAR_12;
  int VAR_13;

  if (VAR_6 || VAR_2)
    {
      char **VAR_14;
      const char *VAR_15;

      if (VAR_8[0])
 FUNC_3 (VAR_4, "%s", VAR_8[0]);
      else
 FUNC_4 ("[cannot find %s]", VAR_7);

      for (VAR_14 = &VAR_8[1]; (VAR_15 = *VAR_14) != (char *) 0; VAR_14++)
 FUNC_3 (VAR_4, " %s", VAR_15);

      FUNC_3 (VAR_4, "\n");
    }

  FUNC_2 (VAR_5);
  FUNC_2 (VAR_4);




  if (VAR_8[0] == 0)
    FUNC_0 ("cannot find '%s'", VAR_7);

  VAR_11 = FUNC_5 (0, "collect2", ((void*)0));
  if (VAR_11 == ((void*)0))
    FUNC_1 ("pex_init failed");

  VAR_12 = FUNC_6 (VAR_11, VAR_0 | VAR_1, VAR_8[0], VAR_8, VAR_9,
      VAR_10, &VAR_13);
  if (VAR_12 != ((void*)0))
    {
      if (VAR_13 != 0)
 {
   VAR_3 = VAR_13;
   FUNC_1 ("%s", VAR_12);
 }
      else
 FUNC_0 ("%s", VAR_12);
    }

  return VAR_11;
}
