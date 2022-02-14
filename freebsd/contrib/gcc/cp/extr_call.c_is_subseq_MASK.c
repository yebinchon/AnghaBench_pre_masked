
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* next; } ;
struct TYPE_6__ {scalar_t__ kind; int type; TYPE_1__ u; } ;
typedef TYPE_2__ conversion ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static bool
FUNC_1 (conversion *VAR_5, conversion *VAR_6)
{




  while (VAR_5->kind == VAR_3
  || VAR_5->kind == VAR_2)
    VAR_5 = VAR_5->u.next;

  while (1)
    {
      while (VAR_6->kind == VAR_3
      || VAR_6->kind == VAR_2)
 VAR_6 = VAR_6->u.next;

      if (VAR_6->kind == VAR_4
   || VAR_6->kind == VAR_0
   || VAR_6->kind == VAR_1)




 return 0;

      VAR_6 = VAR_6->u.next;

      if (VAR_6->kind == VAR_5->kind
   && FUNC_0 (VAR_6->type, VAR_5->type)
   && FUNC_0 (VAR_6->u.next->type,
     VAR_5->u.next->type))
 return 1;
    }
}
