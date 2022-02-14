
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uchar ;
typedef int source_location ;
struct TYPE_15__ {char* cur; } ;
struct TYPE_14__ {scalar_t__ in_directive; } ;
struct TYPE_16__ {TYPE_4__ out; TYPE_3__ state; TYPE_2__* context; TYPE_6__* buffer; TYPE_1__* line_table; } ;
typedef TYPE_5__ cpp_reader ;
struct TYPE_17__ {int const* cur; } ;
typedef TYPE_6__ cpp_buffer ;
struct TYPE_13__ {scalar_t__ prev; } ;
struct TYPE_12__ {int highest_line; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_5__*,int ,int ,int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,int const*,size_t) ;
 int FUNC_4 (TYPE_5__*) ;

__attribute__((used)) static const uchar *
FUNC_5 (cpp_reader *VAR_3, const uchar *VAR_4, int VAR_5)
{
  bool VAR_6, VAR_7 = 0;
  source_location VAR_8 = VAR_3->line_table->highest_line;
  cpp_buffer *VAR_9 = VAR_3->buffer;

  VAR_9->cur = VAR_4;
  if (VAR_3->context->prev)
    VAR_6 = 0, FUNC_4 (VAR_3);
  else
    VAR_6 = FUNC_1 (VAR_3);

  if (VAR_6)
    FUNC_2 (VAR_3, VAR_0, VAR_8, 0,
    "unterminated comment");




  if (VAR_3->state.in_directive)
    {
      if (VAR_5)
 {
   if (FUNC_0 (VAR_3, VAR_2))
     VAR_3->out.cur--;
   else
     VAR_7 = 1;
 }
      else
 VAR_3->out.cur[-1] = ' ';
    }
  else if (FUNC_0 (VAR_3, VAR_1))
    VAR_3->out.cur--;
  else
    VAR_7 = 1;

  if (VAR_7)
    {
      size_t VAR_10 = (size_t) (VAR_9->cur - VAR_4);
      FUNC_3 (VAR_3->out.cur, VAR_4, VAR_10);
      VAR_3->out.cur += VAR_10;
      if (VAR_6)
 {
   *VAR_3->out.cur++ = '*';
   *VAR_3->out.cur++ = '/';
 }
    }

  return VAR_9->cur;
}
