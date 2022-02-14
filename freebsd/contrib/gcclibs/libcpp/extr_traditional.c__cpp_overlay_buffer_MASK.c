
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uchar ;
struct TYPE_4__ {int saved_line_base; int const* saved_rlimit; int const* saved_cur; TYPE_2__* overlaid_buffer; TYPE_2__* buffer; } ;
typedef TYPE_1__ cpp_reader ;
struct TYPE_5__ {int need_line; int const* rlimit; int const* line_base; int const* cur; int next_line; } ;
typedef TYPE_2__ cpp_buffer ;



void
FUNC_0 (cpp_reader *VAR_0, const uchar *VAR_1, size_t VAR_2)
{
  cpp_buffer *VAR_3 = VAR_0->buffer;

  VAR_0->overlaid_buffer = VAR_3;
  VAR_0->saved_cur = VAR_3->cur;
  VAR_0->saved_rlimit = VAR_3->rlimit;
  VAR_0->saved_line_base = VAR_3->next_line;
  VAR_3->need_line = 0;

  VAR_3->cur = VAR_1;
  VAR_3->line_base = VAR_1;
  VAR_3->rlimit = VAR_1 + VAR_2;
}
