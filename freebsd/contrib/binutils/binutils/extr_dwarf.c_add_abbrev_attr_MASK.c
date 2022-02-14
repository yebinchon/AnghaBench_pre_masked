
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned long attribute; unsigned long form; struct TYPE_4__* next; } ;
typedef TYPE_1__ abbrev_attr ;
struct TYPE_5__ {TYPE_1__* last_attr; TYPE_1__* first_attr; } ;


 TYPE_3__* VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1 (unsigned long VAR_1, unsigned long VAR_2)
{
  abbrev_attr *VAR_3;

  VAR_3 = FUNC_0 (sizeof (*VAR_3));

  if (VAR_3 == ((void*)0))

    return;

  VAR_3->attribute = VAR_1;
  VAR_3->form = VAR_2;
  VAR_3->next = ((void*)0);

  if (VAR_0->first_attr == ((void*)0))
    VAR_0->first_attr = VAR_3;
  else
    VAR_0->last_attr->next = VAR_3;

  VAR_0->last_attr = VAR_3;
}
