
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct line_maps {scalar_t__ last_listed; } ;
struct line_map {scalar_t__ included_from; char* to_file; } ;


 struct line_map* FUNC_0 (struct line_maps*,struct line_map const*) ;
 int FUNC_1 (struct line_map const*) ;
 scalar_t__ FUNC_2 (struct line_map const*) ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,char*,int) ;
 int FUNC_5 (char*,int ) ;
 int VAR_0 ;

void
FUNC_6 (struct line_maps *VAR_1,
    const struct line_map *VAR_2)
{
  if (FUNC_2 (VAR_2) || VAR_1->last_listed == VAR_2->included_from)
    return;

  VAR_1->last_listed = VAR_2->included_from;
  VAR_2 = FUNC_0 (VAR_1, VAR_2);

  FUNC_4 (VAR_0, FUNC_3("In file included from %s:%u"),
    VAR_2->to_file, FUNC_1 (VAR_2));

  while (! FUNC_2 (VAR_2))
    {
      VAR_2 = FUNC_0 (VAR_1, VAR_2);
      FUNC_4 (VAR_0, FUNC_3(",\n                 from %s:%u"),
        VAR_2->to_file, FUNC_1 (VAR_2));
    }

  FUNC_5 (":\n", VAR_0);
}
