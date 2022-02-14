
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int maximum_length; TYPE_1__* buffer; } ;
typedef TYPE_2__ pretty_printer ;
struct TYPE_4__ {int line_length; } ;



int
FUNC_0 (pretty_printer *VAR_0)
{
  return VAR_0->maximum_length - VAR_0->buffer->line_length;
}
