
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_4__ {TYPE_1__* all_subwindows; } ;
struct TYPE_3__ {int * normal; int * shadow; struct TYPE_3__* next; } ;
typedef TYPE_1__ DIALOG_WINDOWS ;


 TYPE_2__ VAR_0 ;

WINDOW *
FUNC_0(WINDOW *VAR_1)
{

    WINDOW *VAR_2 = 0;
    DIALOG_WINDOWS *VAR_3;

    for (VAR_3 = VAR_0.all_subwindows; VAR_3 != 0; VAR_3 = VAR_3->next) {
 if (VAR_3->shadow == VAR_1) {
     VAR_2 = VAR_3->normal;
     break;
 }
    }
    return VAR_2;
}
