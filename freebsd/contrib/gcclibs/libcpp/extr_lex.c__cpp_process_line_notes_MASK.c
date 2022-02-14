
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {TYPE_1__* line_table; TYPE_3__* buffer; } ;
typedef TYPE_2__ cpp_reader ;
struct TYPE_14__ {size_t cur_note; scalar_t__ cur; scalar_t__ next_line; scalar_t__ rlimit; scalar_t__ line_base; TYPE_4__* notes; } ;
typedef TYPE_3__ cpp_buffer ;
struct TYPE_15__ {scalar_t__ pos; char type; } ;
typedef TYPE_4__ _cpp_line_note ;
struct TYPE_12__ {int highest_line; } ;


 unsigned int FUNC_0 (TYPE_3__*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ) ;
 scalar_t__* VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*,int ,int ,unsigned int,char*,...) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_4__*) ;
 int VAR_4 ;

void
FUNC_6 (cpp_reader *VAR_5, int VAR_6)
{
  cpp_buffer *VAR_7 = VAR_5->buffer;

  for (;;)
    {
      _cpp_line_note *VAR_8 = &VAR_7->notes[VAR_7->cur_note];
      unsigned int VAR_9;

      if (VAR_8->pos > VAR_7->cur)
 break;

      VAR_7->cur_note++;
      VAR_9 = FUNC_0 (VAR_7, VAR_8->pos + 1);

      if (VAR_8->type == '\\' || VAR_8->type == ' ')
 {
   if (VAR_8->type == ' ' && !VAR_6)
     FUNC_4 (VAR_5, VAR_1, VAR_5->line_table->highest_line, VAR_9,
     "backslash and newline separated by space");

   if (VAR_7->next_line > VAR_7->rlimit)
     {
       FUNC_4 (VAR_5, VAR_0, VAR_5->line_table->highest_line, VAR_9,
       "backslash-newline at end of file");

       VAR_7->next_line = VAR_7->rlimit;
     }

   VAR_7->line_base = VAR_8->pos;
   FUNC_1 (VAR_5, 0);
 }
      else if (VAR_2[VAR_8->type])
 {
   if (FUNC_2 (VAR_5, VAR_4)
       && (!VAR_6 || FUNC_5 (VAR_5, VAR_8)))
     {
       if (FUNC_2 (VAR_5, VAR_3))
  FUNC_4 (VAR_5, VAR_1, VAR_5->line_table->highest_line, VAR_9,
         "trigraph ??%c converted to %c",
         VAR_8->type,
         (int) VAR_2[VAR_8->type]);
       else
  {
    FUNC_4
      (VAR_5, VAR_1, VAR_5->line_table->highest_line, VAR_9,
       "trigraph ??%c ignored, use -trigraphs to enable",
       VAR_8->type);
  }
     }
 }
      else
 FUNC_3 ();
    }
}
