
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct symtab_and_line {int line; TYPE_1__* symtab; } ;
struct symtab {int filename; } ;
struct symbol {int dummy; } ;
struct block {int dummy; } ;
struct TYPE_2__ {char* filename; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct symbol*) ;
 scalar_t__ FUNC_1 (struct symbol*) ;
 int FUNC_2 (struct symbol*) ;
 int * FUNC_3 (struct symbol*) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ VAR_2 ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *,int *,int ,int,int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 struct symtab_and_line FUNC_9 (struct symbol*,int) ;
 int VAR_3 ;
 int FUNC_10 (int*,int,int,int,char*) ;
 int FUNC_11 (char*,...) ;
 int FUNC_12 (struct symbol**,struct block**,int) ;
 struct symtab* FUNC_13 (struct symbol*) ;

int
FUNC_14 (struct symbol *VAR_4[], struct block *VAR_5[], int VAR_6,
    int VAR_7)
{
  int VAR_8;
  int *VAR_9 = (int *) FUNC_7 (sizeof (int) * VAR_6);
  int VAR_10;
  int VAR_11 = (VAR_7 == 1) ? 1 : 2;

  if (VAR_7 < 1)
    FUNC_8 ("Request to select 0 symbols!");
  if (VAR_6 <= 1)
    return VAR_6;

  FUNC_11 ("[0] cancel\n");
  if (VAR_7 > 1)
    FUNC_11 ("[1] all\n");

  FUNC_12 (VAR_4, VAR_5, VAR_6);

  for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8 += 1)
    {
      if (VAR_4[VAR_8] == ((void*)0))
 continue;

      if (FUNC_0 (VAR_4[VAR_8]) == VAR_0)
 {
   struct symtab_and_line VAR_12 = FUNC_9 (VAR_4[VAR_8], 1);
   FUNC_11 ("[%d] %s at %s:%d\n",
        VAR_8 + VAR_11,
        FUNC_2 (VAR_4[VAR_8]),
        VAR_12.symtab == ((void*)0)
        ? "<no source file available>"
        : VAR_12.symtab->filename, VAR_12.line);
   continue;
 }
      else
 {
   int VAR_13 =
     (FUNC_0 (VAR_4[VAR_8]) == VAR_1
      && FUNC_3 (VAR_4[VAR_8]) != ((void*)0)
      && FUNC_4 (FUNC_3 (VAR_4[VAR_8])) == VAR_2);
   struct symtab *VAR_14 = FUNC_13 (VAR_4[VAR_8]);

   if (FUNC_1 (VAR_4[VAR_8]) != 0 && VAR_14 != ((void*)0))
     FUNC_11 ("[%d] %s at %s:%d\n",
          VAR_8 + VAR_11,
          FUNC_2 (VAR_4[VAR_8]),
          VAR_14->filename, FUNC_1 (VAR_4[VAR_8]));
   else if (VAR_13 && FUNC_5 (FUNC_3 (VAR_4[VAR_8])) != ((void*)0))
     {
       FUNC_11 ("[%d] ", VAR_8 + VAR_11);
       FUNC_6 (FUNC_3 (VAR_4[VAR_8]), ((void*)0), VAR_3, -1, 0);
       FUNC_11 ("'(%s) (enumeral)\n",
     FUNC_2 (VAR_4[VAR_8]));
     }
   else if (VAR_14 != ((void*)0))
     FUNC_11 (VAR_13
          ? "[%d] %s in %s (enumeral)\n"
          : "[%d] %s at %s:?\n",
          VAR_8 + VAR_11,
          FUNC_2 (VAR_4[VAR_8]),
          VAR_14->filename);
   else
     FUNC_11 (VAR_13
          ? "[%d] %s (enumeral)\n"
          : "[%d] %s at ?\n",
          VAR_8 + VAR_11,
          FUNC_2 (VAR_4[VAR_8]));
 }
    }

  VAR_10 = FUNC_10 (VAR_9, VAR_6, VAR_7, VAR_7 > 1,
        "overload-choice");

  for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8 += 1)
    {
      VAR_4[VAR_8] = VAR_4[VAR_9[VAR_8]];
      if (VAR_5 != ((void*)0))
 VAR_5[VAR_8] = VAR_5[VAR_9[VAR_8]];
    }

  return VAR_10;
}
