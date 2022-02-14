
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kind; struct TYPE_4__* level_chain; } ;
typedef TYPE_1__ cxx_scope ;


 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static cxx_scope *
FUNC_0 (void)
{
  cxx_scope *VAR_2;

  VAR_2 = VAR_0;
  while (VAR_2->kind == VAR_1)
    VAR_2 = VAR_2->level_chain;

  return VAR_2;
}
