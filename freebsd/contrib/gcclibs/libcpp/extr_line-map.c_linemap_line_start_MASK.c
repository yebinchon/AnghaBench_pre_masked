
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_maps {int used; int highest_location; int highest_line; unsigned int max_column_hint; struct line_map* maps; } ;
struct line_map {int column_bits; unsigned int to_line; int start_location; int to_file; int sysp; } ;
typedef int source_location ;


 int VAR_0 ;
 int FUNC_0 (struct line_map*,int) ;
 unsigned int FUNC_1 (struct line_map*,int) ;
 scalar_t__ FUNC_2 (struct line_maps*,int ,int ,int ,unsigned int) ;

source_location
FUNC_3 (struct line_maps *VAR_1, unsigned int VAR_2,
      unsigned int VAR_3)
{
  struct line_map *VAR_4 = &VAR_1->maps[VAR_1->used - 1];
  source_location VAR_5 = VAR_1->highest_location;
  source_location VAR_6;
  unsigned int VAR_7 = FUNC_1 (VAR_4, VAR_1->highest_line);
  int VAR_8 = VAR_2 - VAR_7;
  bool VAR_9 = 0;
  if (VAR_8 < 0
      || (VAR_8 > 10 && VAR_8 * VAR_4->column_bits > 1000)
      || (VAR_3 >= (1U << VAR_4->column_bits))
      || (VAR_3 <= 80 && VAR_4->column_bits >= 10))
    {
      VAR_9 = 1;
    }
  else
    VAR_3 = VAR_1->max_column_hint;
  if (VAR_9)
    {
      int VAR_10;
      if (VAR_3 > 100000 || VAR_5 > 0xC0000000)
 {


   VAR_3 = 0;
   if (VAR_5 >0xF0000000)
     return 0;
   VAR_10 = 0;
 }
      else
 {
   VAR_10 = 7;
   while (VAR_3 >= (1U << VAR_10))
     VAR_10++;
   VAR_3 = 1U << VAR_10;
 }


      if (VAR_8 < 0
   || VAR_7 != VAR_4->to_line
   || FUNC_0 (VAR_4, VAR_5) >= (1U << VAR_10))
 VAR_4 = (struct line_map*) FUNC_2 (VAR_1, VAR_0, VAR_4->sysp,
          VAR_4->to_file, VAR_2);
      VAR_4->column_bits = VAR_10;
      VAR_6 = VAR_4->start_location + ((VAR_2 - VAR_4->to_line) << VAR_10);
    }
  else
    VAR_6 = VAR_5 - FUNC_0 (VAR_4, VAR_5)
      + (VAR_8 << VAR_4->column_bits);
  VAR_1->highest_line = VAR_6;
  if (VAR_6 > VAR_1->highest_location)
    VAR_1->highest_location = VAR_6;
  VAR_1->max_column_hint = VAR_3;
  return VAR_6;
}
