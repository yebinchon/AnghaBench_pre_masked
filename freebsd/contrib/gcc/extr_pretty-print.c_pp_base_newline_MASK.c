
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* buffer; } ;
typedef TYPE_2__ pretty_printer ;
struct TYPE_4__ {scalar_t__ line_length; int obstack; } ;


 int FUNC_0 (int ,char) ;

void
FUNC_1 (pretty_printer *VAR_0)
{
  FUNC_0 (VAR_0->buffer->obstack, '\n');
  VAR_0->buffer->line_length = 0;
}
