
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ kind; struct TYPE_3__* declarator; } ;
typedef TYPE_1__ cp_declarator ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool
FUNC_0 (const cp_declarator *VAR_3)
{
  while (VAR_3)
    {
      if (VAR_3->kind == VAR_1
   && VAR_3->declarator->kind == VAR_2)
 return 1;
      if (VAR_3->kind == VAR_2
   || VAR_3->kind == VAR_0)
 return 0;
      VAR_3 = VAR_3->declarator;
    }
  return 0;
}
