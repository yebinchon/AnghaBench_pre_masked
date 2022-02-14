
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct line_map {int to_line; } ;
typedef enum lc_reason { ____Placeholder_lc_reason } lc_reason ;
struct TYPE_5__ {int (* file_change ) (TYPE_2__*,struct line_map const*) ;} ;
struct TYPE_6__ {TYPE_1__ cb; int line_table; } ;
typedef TYPE_2__ cpp_reader ;


 struct line_map* FUNC_0 (int ,int,unsigned int,char const*,unsigned int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_2__*,struct line_map const*) ;

void
FUNC_3 (cpp_reader *VAR_0, enum lc_reason VAR_1,
       const char *VAR_2, unsigned int VAR_3,
       unsigned int VAR_4)
{
  const struct line_map *VAR_5 = FUNC_0 (VAR_0->line_table, VAR_1, VAR_4,
         VAR_2, VAR_3);
  if (VAR_5 != ((void*)0))
    FUNC_1 (VAR_0->line_table, VAR_5->to_line, 127);

  if (VAR_0->cb.file_change)
    VAR_0->cb.file_change (VAR_0, VAR_5);
}
