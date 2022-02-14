
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct if_stack {size_t type; int line; struct if_stack* next; } ;
struct _cpp_file {int dummy; } ;
struct TYPE_10__ {scalar_t__ skipping; } ;
struct TYPE_11__ {int buffer_ob; TYPE_3__* buffer; TYPE_1__ state; } ;
typedef TYPE_2__ cpp_reader ;
struct TYPE_12__ {int notes; struct TYPE_12__* prev; struct if_stack* if_stack; struct _cpp_file* file; } ;
typedef TYPE_3__ cpp_buffer ;
struct TYPE_13__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,struct _cpp_file*) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ,char*,int ) ;
 TYPE_5__* VAR_2 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,TYPE_3__*) ;

void
FUNC_5 (cpp_reader *VAR_3)
{
  cpp_buffer *VAR_4 = VAR_3->buffer;
  struct _cpp_file *VAR_5 = VAR_4->file;
  struct if_stack *VAR_6;



  for (VAR_6 = VAR_4->if_stack; VAR_6; VAR_6 = VAR_6->next)
    FUNC_2 (VAR_3, VAR_0, VAR_6->line, 0,
    "unterminated #%s", VAR_2[VAR_6->type].name);


  VAR_3->state.skipping = 0;


  VAR_3->buffer = VAR_4->prev;

  FUNC_3 (VAR_4->notes);



  FUNC_4 (&VAR_3->buffer_ob, VAR_4);

  if (VAR_5)
    {
      FUNC_1 (VAR_3, VAR_5);

      FUNC_0 (VAR_3, VAR_1, 0, 0, 0);
    }
}
