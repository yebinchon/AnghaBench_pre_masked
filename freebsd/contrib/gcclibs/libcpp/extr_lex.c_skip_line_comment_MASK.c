
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* line_table; TYPE_3__* buffer; } ;
typedef TYPE_2__ cpp_reader ;
struct TYPE_8__ {char* cur; } ;
typedef TYPE_3__ cpp_buffer ;
struct TYPE_6__ {unsigned int highest_line; } ;


 int FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static int
FUNC_1 (cpp_reader *VAR_0)
{
  cpp_buffer *VAR_1 = VAR_0->buffer;
  unsigned int VAR_2 = VAR_0->line_table->highest_line;

  while (*VAR_1->cur != '\n')
    VAR_1->cur++;

  FUNC_0 (VAR_0, 1);
  return VAR_2 != VAR_0->line_table->highest_line;
}
