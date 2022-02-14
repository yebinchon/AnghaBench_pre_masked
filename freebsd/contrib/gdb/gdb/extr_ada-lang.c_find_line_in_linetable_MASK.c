
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct linetable_entry {scalar_t__ pc; int line; } ;
struct linetable {int nitems; struct linetable_entry* item; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (struct symbol*) ;
 scalar_t__ FUNC_3 (struct symbol*) ;

__attribute__((used)) static int
FUNC_4 (struct linetable *VAR_1, int VAR_2,
   struct symbol **VAR_3, int VAR_4, int *VAR_5)
{
  int VAR_6, VAR_7, VAR_8, VAR_9;

  if (VAR_2 <= 0 || VAR_1 == ((void*)0))
    return -1;

  VAR_7 = VAR_1->nitems;
  for (VAR_6 = 0, VAR_8 = -1, VAR_9 = 0; VAR_6 < VAR_7; VAR_6 += 1)
    {
      int VAR_10;
      struct linetable_entry *VAR_11 = &(VAR_1->item[VAR_6]);

      for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10 += 1)
 {
   if (VAR_3[VAR_10] != ((void*)0) && FUNC_3 (VAR_3[VAR_10]) == VAR_0
       && VAR_11->pc >= FUNC_1 (FUNC_2 (VAR_3[VAR_10]))
       && VAR_11->pc < FUNC_0 (FUNC_2 (VAR_3[VAR_10])))
     goto candidate;
 }
      continue;

    candidate:

      if (VAR_11->line == VAR_2)
 {
   *VAR_5 = 1;
   return VAR_6;
 }

      if (VAR_11->line > VAR_2 && (VAR_9 == 0 || VAR_11->line < VAR_9))
 {
   VAR_9 = VAR_11->line;
   VAR_8 = VAR_6;
 }
    }

  *VAR_5 = 0;
  return VAR_8;
}
