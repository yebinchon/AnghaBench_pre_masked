
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracepoint {char* addr_string; scalar_t__ number; } ;
struct symtabs_and_lines {int nelts; struct symtab_and_line* sals; } ;
struct symtab_and_line {int dummy; } ;
struct symtab {int dummy; } ;


 struct symtabs_and_lines FUNC_0 (char**,int,struct symtab*,int ,char***,int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct symtab_and_line*) ;
 char* FUNC_4 (char*,int) ;
 struct tracepoint* FUNC_5 (struct symtab_and_line) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct tracepoint*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_8 (char *VAR_2, int VAR_3)
{
  char **VAR_4 = (char **) ((void*)0);
  struct symtabs_and_lines VAR_5;
  struct symtab_and_line VAR_6;
  struct tracepoint *VAR_7;
  char *VAR_8 = 0, *VAR_9 = 0;
  int VAR_10;

  if (!VAR_2 || !*VAR_2)
    FUNC_1 ("trace command requires an argument");

  if (VAR_3 && VAR_0)
    FUNC_2 ("TRACE %s\n", VAR_2);

  VAR_8 = VAR_2;
  VAR_5 = FUNC_0 (&VAR_2, 1, (struct symtab *) ((void*)0), 0, &VAR_4, ((void*)0));
  VAR_9 = VAR_2;
  if (!VAR_5.nelts)
    return;


  for (VAR_10 = 0; VAR_10 < VAR_5.nelts; VAR_10++)
    FUNC_3 (&VAR_5.sals[VAR_10]);


  for (VAR_10 = 0; VAR_10 < VAR_5.nelts; VAR_10++)
    {
      VAR_6 = VAR_5.sals[VAR_10];

      VAR_7 = FUNC_5 (VAR_6);
      FUNC_6 (VAR_1 + 1);
      VAR_7->number = VAR_1;



      if (VAR_4 != (char **) ((void*)0) && VAR_4[VAR_10] != ((void*)0))
 VAR_7->addr_string = VAR_4[VAR_10];
      else if (VAR_8)
 VAR_7->addr_string = FUNC_4 (VAR_8, VAR_9 - VAR_8);

      FUNC_7 (VAR_7);
    }

  if (VAR_5.nelts > 1)
    {
      FUNC_2 ("Multiple tracepoints were set.\n");
      FUNC_2 ("Use 'delete trace' to delete unwanted tracepoints.\n");
    }
}
