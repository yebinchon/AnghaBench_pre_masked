
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_4__ {scalar_t__ is_function_key; struct TYPE_4__* binding; struct TYPE_4__* link; int * win; } ;
typedef TYPE_1__ LIST_BINDINGS ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(WINDOW *VAR_1)
{
    LIST_BINDINGS *VAR_2, *VAR_3;

    for (VAR_2 = VAR_0, VAR_3 = 0; VAR_2 != 0; VAR_2 = VAR_2->link) {
 if (VAR_2->win == VAR_1) {
     if (VAR_3 != 0) {
  VAR_3->link = VAR_2->link;
     } else {
  VAR_0 = VAR_2->link;
     }

     if (VAR_2->binding[1].is_function_key < 0)
  FUNC_0(VAR_2->binding);
     FUNC_0(VAR_2);
     FUNC_1(VAR_1);
     break;
 }
 VAR_3 = VAR_2;
    }
}
