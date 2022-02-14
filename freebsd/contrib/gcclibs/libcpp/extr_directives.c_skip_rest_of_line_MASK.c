
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* context; } ;
typedef TYPE_2__ cpp_reader ;
struct TYPE_9__ {scalar_t__ type; } ;
struct TYPE_7__ {scalar_t__ prev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 TYPE_5__* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3 (cpp_reader *VAR_1)
{

  while (VAR_1->context->prev)
    FUNC_2 (VAR_1);


  if (! FUNC_0 ())
    while (FUNC_1 (VAR_1)->type != VAR_0)
      ;
}
