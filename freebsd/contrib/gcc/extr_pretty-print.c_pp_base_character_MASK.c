
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* buffer; } ;
typedef TYPE_2__ pretty_printer ;
struct TYPE_7__ {int line_length; int obstack; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;

void
FUNC_5 (pretty_printer *VAR_0, int VAR_1)
{
  if (FUNC_2 (VAR_0)
      && FUNC_4 (VAR_0) <= 0)
    {
      FUNC_3 (VAR_0);
      if (FUNC_0 (VAR_1))
        return;
    }
  FUNC_1 (VAR_0->buffer->obstack, VAR_1);
  ++VAR_0->buffer->line_length;
}
