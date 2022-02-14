
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; int text; } ;
typedef TYPE_1__ dlist_type ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char const*) ;

void
FUNC_2 (const char *VAR_1)
{
  dlist_type *VAR_2 = (dlist_type *) FUNC_0 (sizeof (dlist_type));
  VAR_2->text = FUNC_1 (VAR_1);
  VAR_2->next = VAR_0;
  VAR_0 = VAR_2;
}
