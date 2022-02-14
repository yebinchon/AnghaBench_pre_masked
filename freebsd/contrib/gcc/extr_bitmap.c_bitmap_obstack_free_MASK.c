
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* bitmap ;
struct TYPE_6__ {TYPE_1__* obstack; void* first; } ;
struct TYPE_5__ {TYPE_2__* heads; } ;


 int FUNC_0 (TYPE_2__*) ;

void
FUNC_1 (bitmap VAR_0)
{
  if (VAR_0)
    {
      FUNC_0 (VAR_0);
      VAR_0->first = (void *)VAR_0->obstack->heads;
      VAR_0->obstack->heads = VAR_0;
    }
}
