
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct line_maps {int used; int highest_line; struct line_map* maps; } ;
struct line_map {int to_file; } ;
struct TYPE_6__ {struct line_maps* line_table; TYPE_1__* buffer; } ;
typedef TYPE_2__ cpp_reader ;
struct TYPE_5__ {int sysp; } ;


 int VAR_0 ;
 int FUNC_0 (struct line_map const*,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ,int) ;

void
FUNC_2 (cpp_reader *VAR_1, int VAR_2, int VAR_3)
{
  int VAR_4 = 0;
  const struct line_maps *VAR_5 = VAR_1->line_table;
  const struct line_map *VAR_6 = &VAR_5->maps[VAR_5->used-1];


  if (VAR_2)
    VAR_4 = 1 + (VAR_3 != 0);
  VAR_1->buffer->sysp = VAR_4;
  FUNC_1 (VAR_1, VAR_0, VAR_6->to_file,
         FUNC_0 (VAR_6, VAR_1->line_table->highest_line), VAR_4);
}
