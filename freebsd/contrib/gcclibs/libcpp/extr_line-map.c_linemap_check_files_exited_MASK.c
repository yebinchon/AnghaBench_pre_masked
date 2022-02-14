
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_maps {int used; struct line_map* maps; } ;
struct line_map {char* to_file; } ;


 struct line_map* FUNC_0 (struct line_maps*,struct line_map*) ;
 int FUNC_1 (struct line_map*) ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_0 ;

void
FUNC_3 (struct line_maps *VAR_1)
{
  struct line_map *VAR_2;


  for (VAR_2 = &VAR_1->maps[VAR_1->used - 1]; ! FUNC_1 (VAR_2);
       VAR_2 = FUNC_0 (VAR_1, VAR_2))
    FUNC_2 (VAR_0, "line-map.c: file \"%s\" entered but not left\n",
      VAR_2->to_file);
}
