
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct obstack {int dummy; } ;
struct TYPE_5__ {TYPE_1__* buffer; } ;
typedef TYPE_2__ pretty_printer ;
struct TYPE_4__ {struct obstack* obstack; } ;


 scalar_t__ FUNC_0 (struct obstack*) ;
 scalar_t__ FUNC_1 (struct obstack*) ;

const char *
FUNC_2 (const pretty_printer *VAR_0)
{
  const char *VAR_1 = ((void*)0);
  struct obstack *VAR_2 = VAR_0->buffer->obstack;

  if (FUNC_0 (VAR_2) != FUNC_1 (VAR_2))
    VAR_1 = ((const char *) FUNC_1 (VAR_2)) - 1;
  return VAR_1;
}
