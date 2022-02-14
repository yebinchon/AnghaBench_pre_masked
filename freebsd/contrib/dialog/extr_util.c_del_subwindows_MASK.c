
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_5__ {TYPE_1__* all_subwindows; } ;
struct TYPE_4__ {struct TYPE_4__* next; int shadow; int * normal; } ;
typedef TYPE_1__ DIALOG_WINDOWS ;


 int FUNC_0 (int ) ;
 TYPE_3__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(WINDOW *VAR_1)
{
    DIALOG_WINDOWS *VAR_2 = VAR_0.all_subwindows;
    DIALOG_WINDOWS *VAR_3 = 0;
    DIALOG_WINDOWS *VAR_4;

    while (VAR_2 != 0) {
 if (VAR_2->normal == VAR_1) {
     FUNC_0(VAR_2->shadow);
     VAR_4 = VAR_2->next;
     if (VAR_3 == 0) {
  VAR_0.all_subwindows = VAR_4;
     } else {
  VAR_3->next = VAR_4;
     }
     FUNC_1(VAR_2);
     VAR_2 = VAR_4;
 } else {
     VAR_3 = VAR_2;
     VAR_2 = VAR_2->next;
 }
    }
}
