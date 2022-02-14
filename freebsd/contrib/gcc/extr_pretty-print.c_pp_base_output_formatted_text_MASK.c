
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct chunk_info {char** args; struct chunk_info* prev; } ;
typedef int pretty_printer ;
struct TYPE_3__ {scalar_t__ line_length; int chunk_obstack; struct chunk_info* cur_chunk_array; int formatted_obstack; int * obstack; } ;
typedef TYPE_1__ output_buffer ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct chunk_info*) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,char const*) ;

void
FUNC_4 (pretty_printer *VAR_0)
{
  unsigned int VAR_1;
  output_buffer *VAR_2 = FUNC_2 (VAR_0);
  struct chunk_info *VAR_3 = VAR_2->cur_chunk_array;
  const char **VAR_4 = VAR_3->args;

  FUNC_0 (VAR_2->obstack == &VAR_2->formatted_obstack);
  FUNC_0 (VAR_2->line_length == 0);



  for (VAR_1 = 0; VAR_4[VAR_1]; VAR_1++)
    FUNC_3 (VAR_0, VAR_4[VAR_1]);



  VAR_2->cur_chunk_array = VAR_3->prev;
  FUNC_1 (&VAR_2->chunk_obstack, VAR_3);
}
