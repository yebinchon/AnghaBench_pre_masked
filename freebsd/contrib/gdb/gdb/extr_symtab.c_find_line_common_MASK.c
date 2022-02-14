
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct linetable_entry {int line; } ;
struct linetable {int nitems; struct linetable_entry* item; } ;



__attribute__((used)) static int
FUNC_0 (struct linetable *VAR_0, int VAR_1,
    int *VAR_2)
{
  int VAR_3;
  int VAR_4;





  int VAR_5 = -1;
  int VAR_6 = 0;

  if (VAR_1 <= 0)
    return -1;
  if (VAR_0 == 0)
    return -1;

  VAR_4 = VAR_0->nitems;
  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
    {
      struct linetable_entry *VAR_7 = &(VAR_0->item[VAR_3]);

      if (VAR_7->line == VAR_1)
 {

   *VAR_2 = 1;
   return VAR_3;
 }

      if (VAR_7->line > VAR_1 && (VAR_6 == 0 || VAR_7->line < VAR_6))
 {
   VAR_6 = VAR_7->line;
   VAR_5 = VAR_3;
 }
    }



  *VAR_2 = 0;
  return VAR_5;
}
