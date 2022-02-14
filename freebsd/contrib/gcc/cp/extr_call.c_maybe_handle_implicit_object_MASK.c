
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tree ;
struct TYPE_7__ {TYPE_2__* next; } ;
struct TYPE_8__ {scalar_t__ kind; int type; TYPE_1__ u; scalar_t__ this_p; } ;
typedef TYPE_2__ conversion ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_3 (int ,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4 (conversion **VAR_3)
{
  if ((*VAR_3)->this_p)
    {







      conversion *VAR_4 = *VAR_3;
      tree VAR_5;




      VAR_5 = FUNC_0 (VAR_4->type);
      VAR_5 = FUNC_2 (VAR_5);

      if (VAR_4->kind == VAR_2)
 VAR_4 = VAR_4->u.next;
      if (VAR_4->kind == VAR_1)
 VAR_4 = VAR_4->u.next;
      VAR_4 = FUNC_1 (FUNC_0 (VAR_4->type), VAR_0);
      VAR_4 = FUNC_3 (VAR_5, VAR_4);
      *VAR_3 = VAR_4;
    }
}
