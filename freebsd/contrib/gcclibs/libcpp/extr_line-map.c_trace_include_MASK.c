
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_maps {unsigned int depth; } ;
struct line_map {char* to_file; } ;


 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (char,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2 (const struct line_maps *VAR_1, const struct line_map *VAR_2)
{
  unsigned int VAR_3 = VAR_1->depth;

  while (--VAR_3)
    FUNC_1 ('.', VAR_0);
  FUNC_0 (VAR_0, " %s\n", VAR_2->to_file);
}
