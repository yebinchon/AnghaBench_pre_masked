
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct linetable_entry {int line; scalar_t__ pc; } ;
struct linetable {int nitems; struct linetable_entry* item; } ;
typedef scalar_t__ CORE_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,char**,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_1 (struct symbol*,int) ;
 struct symbol* FUNC_2 (char*,int ) ;

__attribute__((used)) static int
FUNC_3 (struct linetable *VAR_2, int VAR_3)
{
  int VAR_4, VAR_5, VAR_6;

  if (VAR_3 <= 0 || VAR_2 == ((void*)0) || VAR_2->nitems == 0)
    return -1;
  VAR_5 = VAR_2->nitems;

  VAR_4 = 0;
  VAR_6 = VAR_0;
  while (VAR_4 < VAR_5)
    {
      int VAR_7;
      struct linetable_entry *VAR_8 = &(VAR_2->item[VAR_4]);

      if (VAR_8->line >= VAR_3 && VAR_8->line < VAR_6)
 {
   char *VAR_9;
   CORE_ADDR VAR_10, VAR_11;

   VAR_9 = ((void*)0);
   FUNC_0 (VAR_8->pc, &VAR_9, &VAR_10, &VAR_11);

   if (VAR_9 != ((void*)0) && VAR_8->pc < VAR_11)
     {
       if (VAR_8->line == VAR_3)
  return VAR_3;
       else
  {
    struct symbol *VAR_12 =
      FUNC_2 (VAR_9, VAR_1);
    if (FUNC_1 (VAR_12, VAR_3))
      VAR_6 = VAR_8->line;
    else
      {
        do
   VAR_4 += 1;
        while (VAR_4 < VAR_5 && VAR_2->item[VAR_4].pc < VAR_11);
        continue;
      }
  }
     }
 }

      VAR_4 += 1;
    }

  return (VAR_6 == VAR_0) ? -1 : VAR_6;
}
