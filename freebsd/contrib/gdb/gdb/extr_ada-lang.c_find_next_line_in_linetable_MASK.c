
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct linetable_entry {scalar_t__ pc; int line; } ;
struct linetable {int nitems; struct linetable_entry* item; } ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,char**,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_1 (struct symbol*,int) ;
 struct symbol* FUNC_2 (char*,int ) ;

__attribute__((used)) static int
FUNC_3 (struct linetable *VAR_1, int VAR_2,
        int VAR_3, int VAR_4)
{
  int VAR_5, VAR_6;

  if (VAR_2 <= 0 || VAR_1 == ((void*)0) || VAR_4 >= VAR_1->nitems)
    return -1;
  VAR_6 = VAR_1->nitems;

  if (VAR_4 >= 0)
    {
      CORE_ADDR VAR_7, VAR_8;

      if (FUNC_0 (VAR_1->item[VAR_4].pc,
        (char **) ((void*)0), &VAR_7, &VAR_8))
 {
   while (VAR_4 < VAR_6 && VAR_1->item[VAR_4].pc < VAR_8)
     VAR_4 += 1;
 }
      else
 VAR_4 += 1;
    }
  else
    VAR_4 = 0;

  VAR_5 = VAR_4;
  while (VAR_5 < VAR_6)
    {
      int VAR_9;
      struct linetable_entry *VAR_10 = &(VAR_1->item[VAR_5]);

      if (VAR_10->line >= VAR_2)
 {
   char *VAR_11;
   CORE_ADDR VAR_12, VAR_13;

   VAR_11 = ((void*)0);
   FUNC_0 (VAR_10->pc, &VAR_11, &VAR_12, &VAR_13);

   if (VAR_11 != ((void*)0) && VAR_10->pc < VAR_13)
     {
       if (VAR_10->line == VAR_2)
  {
    struct symbol *VAR_14 =
      FUNC_2 (VAR_11, VAR_0);
    if (FUNC_1 (VAR_14, VAR_3))
      return VAR_5;
    else
      {
        while ((VAR_5 + 1) < VAR_6 && VAR_1->item[VAR_5 + 1].pc < VAR_13)
   VAR_5 += 1;
      }
  }
     }
 }
      VAR_5 += 1;
    }

  return -1;
}
