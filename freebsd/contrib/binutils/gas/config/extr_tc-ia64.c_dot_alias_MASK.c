
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hash_control {int dummy; } ;
struct alias {char const* name; int line; int file; } ;
typedef int PTR ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 struct hash_control* VAR_0 ;
 struct hash_control* VAR_1 ;
 int FUNC_2 (int ,...) ;
 int FUNC_3 (int ,char*,char const*,char const*) ;
 int FUNC_4 (int *,int *) ;
 char* FUNC_5 (int*) ;
 int FUNC_6 () ;
 char FUNC_7 () ;
 scalar_t__ FUNC_8 (struct hash_control*,char*) ;
 char* FUNC_9 (struct hash_control*,char*,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 () ;
 char* VAR_2 ;
 int VAR_3 ;
 char* FUNC_12 (int *) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (int *,char*,int) ;
 struct hash_control* VAR_4 ;
 struct hash_control* VAR_5 ;
 scalar_t__ FUNC_15 (char const*,char*) ;
 int FUNC_16 (char*) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static void
FUNC_18 (int VAR_6)
{
  char *VAR_7, *VAR_8;
  char VAR_9;
  char *VAR_10;
  int VAR_11;
  const char *VAR_12;
  struct alias *VAR_13;
  const char *VAR_14;
  struct hash_control *VAR_15, *VAR_16;
  const char *VAR_17;

  VAR_7 = VAR_2;
  VAR_9 = FUNC_7 ();
  VAR_10 = VAR_2;
  *VAR_10 = VAR_9;

  if (VAR_7 == VAR_10)
    {
      FUNC_2 (FUNC_1("expected symbol name"));
      FUNC_11 ();
      return;
    }

  FUNC_0 ();

  if (*VAR_2 != ',')
    {
      *VAR_10 = 0;
      FUNC_2 (FUNC_1("expected comma after \"%s\""), VAR_7);
      *VAR_10 = VAR_9;
      FUNC_11 ();
      return;
    }

  VAR_2++;
  *VAR_10 = 0;
  FUNC_10 (VAR_7);



  VAR_8 = FUNC_5 (&VAR_11);
  if (VAR_8 == ((void*)0))
    {
      FUNC_11 ();
      return;
    }


  VAR_11 = FUNC_16 (VAR_7) + 1;
  FUNC_14 (&VAR_3, VAR_7, VAR_11);
  VAR_7 = FUNC_12 (&VAR_3);

  if (VAR_6)
    {
      VAR_17 = "section";
      VAR_15 = VAR_4;
      VAR_16 = VAR_5;
    }
  else
    {
      VAR_17 = "symbol";
      VAR_15 = VAR_0;
      VAR_16 = VAR_1;
    }


  VAR_13 = (struct alias *) FUNC_8 (VAR_15, VAR_8);
  if (VAR_13)
    {
      if (FUNC_15 (VAR_13->name, VAR_7))
 FUNC_2 (FUNC_1("`%s' is already the alias of %s `%s'"),
  VAR_8, VAR_17, VAR_13->name);
      goto out;
    }


  VAR_14 = (const char *) FUNC_8 (VAR_16, VAR_7);
  if (VAR_14)
    {
      if (FUNC_15 (VAR_14, VAR_8))
 FUNC_2 (FUNC_1("%s `%s' already has an alias `%s'"), VAR_17, VAR_7, VAR_14);
      goto out;
    }

  VAR_13 = (struct alias *) FUNC_17 (sizeof (struct alias));
  FUNC_4 (&VAR_13->file, &VAR_13->line);
  VAR_13->name = VAR_7;

  VAR_12 = FUNC_9 (VAR_15, VAR_8, (PTR) VAR_13);
  if (VAR_12)
    {
      FUNC_3 (FUNC_1("inserting \"%s\" into %s alias hash table failed: %s"),
  VAR_8, VAR_17, VAR_12);
      goto out;
    }

  VAR_12 = FUNC_9 (VAR_16, VAR_7, (PTR) VAR_8);
  if (VAR_12)
    {
      FUNC_3 (FUNC_1("inserting \"%s\" into %s name hash table failed: %s"),
  VAR_8, VAR_17, VAR_12);
out:
      FUNC_13 (&VAR_3, VAR_7);
      FUNC_13 (&VAR_3, VAR_8);
    }

  FUNC_6 ();
}
