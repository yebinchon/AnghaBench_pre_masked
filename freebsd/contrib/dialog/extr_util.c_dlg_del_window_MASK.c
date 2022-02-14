
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WINDOW ;
struct TYPE_8__ {scalar_t__ getc_callbacks; TYPE_1__* all_windows; } ;
struct TYPE_7__ {scalar_t__ keep_window; } ;
struct TYPE_6__ {scalar_t__ shadow; int * normal; struct TYPE_6__* next; } ;
typedef TYPE_1__ DIALOG_WINDOWS ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_5__ VAR_0 ;
 TYPE_4__ VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int * VAR_2 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void
FUNC_8(WINDOW *VAR_3)
{
    DIALOG_WINDOWS *VAR_4, *VAR_5, *VAR_6;




    if (VAR_1.keep_window)
 return;





    if (VAR_0.getc_callbacks != 0) {
 FUNC_6(VAR_2);
 FUNC_7(VAR_2);
    }

    for (VAR_4 = VAR_0.all_windows, VAR_5 = VAR_6 = 0; VAR_4 != 0; VAR_6 = VAR_4, VAR_4 = VAR_4->next) {
 if (VAR_4->normal == VAR_3) {
     VAR_5 = VAR_4;
     if (VAR_6 == 0) {
  VAR_0.all_windows = VAR_4->next;
     } else {
  VAR_6->next = VAR_4->next;
     }
 } else {
     if (VAR_4->shadow != 0) {
  FUNC_6(VAR_4->shadow);
  FUNC_7(VAR_4->shadow);
     }
     FUNC_6(VAR_4->normal);
     FUNC_7(VAR_4->normal);
 }
    }

    if (VAR_5) {
 if (VAR_0.all_windows != 0)
     FUNC_4(VAR_5);
 FUNC_0(VAR_5->normal);
 FUNC_2(VAR_5->normal);
 FUNC_1(VAR_5->normal);
 FUNC_5(VAR_5);
    }
    FUNC_3();
}
