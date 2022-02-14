
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_5__ {TYPE_1__* all_windows; } ;
struct TYPE_4__ {int * normal; struct TYPE_4__* next; } ;
typedef TYPE_1__ DIALOG_WINDOWS ;


 TYPE_3__ VAR_0 ;

__attribute__((used)) static DIALOG_WINDOWS *
FUNC_0(WINDOW *VAR_1)
{
    DIALOG_WINDOWS *VAR_2 = 0;
    DIALOG_WINDOWS *VAR_3;

    for (VAR_3 = VAR_0.all_windows; VAR_3 != 0; VAR_3 = VAR_3->next) {
 if (VAR_3->normal == VAR_1) {
     VAR_2 = VAR_3;
     break;
 }
    }
    return VAR_2;
}
