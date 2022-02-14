
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_maps {unsigned int cache; unsigned int used; struct line_map const* maps; } ;
typedef struct line_map {scalar_t__ start_location; } const line_map ;
typedef scalar_t__ source_location ;



const struct line_map *
FUNC_0 (struct line_maps *VAR_0, source_location VAR_1)
{
  unsigned int VAR_2, VAR_3, VAR_4;
  const struct line_map *VAR_5;

  VAR_3 = VAR_0->cache;
  VAR_4 = VAR_0->used;

  VAR_5 = &VAR_0->maps[VAR_3];

  if (VAR_1 >= VAR_5->start_location)
    {
      if (VAR_3 + 1 == VAR_4 || VAR_1 < VAR_5[1].start_location)
 return VAR_5;
    }
  else
    {
      VAR_4 = VAR_3;
      VAR_3 = 0;
    }

  while (VAR_4 - VAR_3 > 1)
    {
      VAR_2 = (VAR_3 + VAR_4) / 2;
      if (VAR_0->maps[VAR_2].start_location > VAR_1)
 VAR_4 = VAR_2;
      else
 VAR_3 = VAR_2;
    }

  VAR_0->cache = VAR_3;
  return &VAR_0->maps[VAR_3];
}
