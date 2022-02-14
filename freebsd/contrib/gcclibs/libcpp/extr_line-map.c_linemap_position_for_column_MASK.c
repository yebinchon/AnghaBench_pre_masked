
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_maps {int highest_line; unsigned int max_column_hint; int used; int highest_location; struct line_map* maps; } ;
struct line_map {int dummy; } ;
typedef int source_location ;


 int FUNC_0 (struct line_map*,int) ;
 int FUNC_1 (struct line_maps*,int ,unsigned int) ;

source_location
FUNC_2 (struct line_maps *VAR_0, unsigned int VAR_1)
{
  source_location VAR_2 = VAR_0->highest_line;
  if (VAR_1 >= VAR_0->max_column_hint)
    {
      if (VAR_2 >= 0xC000000 || VAR_1 > 100000)
 {

   return VAR_2;
 }
      else
 {
   struct line_map *VAR_3 = &VAR_0->maps[VAR_0->used - 1];
   VAR_2 = FUNC_1 (VAR_0, FUNC_0 (VAR_3, VAR_2), VAR_1 + 50);
 }
    }
  VAR_2 = VAR_2 + VAR_1;
  if (VAR_2 >= VAR_0->highest_location)
    VAR_0->highest_location = VAR_2;
  return VAR_2;
}
