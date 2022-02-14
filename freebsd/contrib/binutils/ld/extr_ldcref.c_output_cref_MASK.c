
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cref_hash_entry {int dummy; } ;
typedef int FILE ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 char* FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ,struct cref_hash_entry***) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,struct cref_hash_entry*) ;
 int FUNC_5 (char,int *) ;
 int FUNC_6 (struct cref_hash_entry**,int,int,int ) ;
 int FUNC_7 (char const*) ;
 struct cref_hash_entry** FUNC_8 (int) ;

void
FUNC_9 (FILE *VAR_6)
{
  int VAR_7;
  struct cref_hash_entry **VAR_8, **VAR_9, **VAR_10, **VAR_11;
  const char *VAR_12;

  FUNC_3 (VAR_6, FUNC_1("\nCross Reference Table\n\n"));
  VAR_12 = FUNC_1("Symbol");
  FUNC_3 (VAR_6, "%s", VAR_12);
  VAR_7 = FUNC_7 (VAR_12);
  while (VAR_7 < VAR_0)
    {
      FUNC_5 (' ', VAR_6);
      ++VAR_7;
    }
  FUNC_3 (VAR_6, FUNC_1("File\n"));

  if (! VAR_2)
    {
      FUNC_3 (VAR_6, FUNC_1("No symbols\n"));
      return;
    }

  VAR_8 = FUNC_8 (VAR_4 * sizeof (*VAR_8));

  VAR_9 = VAR_8;
  FUNC_2 (&VAR_5, VAR_1, &VAR_9);
  FUNC_0 ((size_t) (VAR_9 - VAR_8) == VAR_4);

  FUNC_6 (VAR_8, VAR_4, sizeof (*VAR_8), VAR_3);

  VAR_11 = VAR_8 + VAR_4;
  for (VAR_10 = VAR_8; VAR_10 < VAR_11; VAR_10++)
    FUNC_4 (VAR_6, *VAR_10);
}
