
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned long entry; unsigned long tag; int children; struct TYPE_5__* next; int * last_attr; int * first_attr; } ;
typedef TYPE_1__ abbrev_entry ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1 (unsigned long VAR_2, unsigned long VAR_3, int VAR_4)
{
  abbrev_entry *VAR_5;

  VAR_5 = FUNC_0 (sizeof (*VAR_5));

  if (VAR_5 == ((void*)0))

    return;

  VAR_5->entry = VAR_2;
  VAR_5->tag = VAR_3;
  VAR_5->children = VAR_4;
  VAR_5->first_attr = ((void*)0);
  VAR_5->last_attr = ((void*)0);
  VAR_5->next = ((void*)0);

  if (VAR_0 == ((void*)0))
    VAR_0 = VAR_5;
  else
    VAR_1->next = VAR_5;

  VAR_1 = VAR_5;
}
