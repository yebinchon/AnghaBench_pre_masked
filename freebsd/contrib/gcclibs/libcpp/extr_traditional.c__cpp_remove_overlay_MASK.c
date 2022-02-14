
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* overlaid_buffer; int saved_line_base; int saved_rlimit; int saved_cur; } ;
typedef TYPE_1__ cpp_reader ;
struct TYPE_5__ {int need_line; int line_base; int rlimit; int cur; } ;
typedef TYPE_2__ cpp_buffer ;



void
FUNC_0 (cpp_reader *VAR_0)
{
  cpp_buffer *VAR_1 = VAR_0->overlaid_buffer;

  VAR_1->cur = VAR_0->saved_cur;
  VAR_1->rlimit = VAR_0->saved_rlimit;
  VAR_1->line_base = VAR_0->saved_line_base;
  VAR_1->need_line = 1;

  VAR_0->overlaid_buffer = ((void*)0);
}
