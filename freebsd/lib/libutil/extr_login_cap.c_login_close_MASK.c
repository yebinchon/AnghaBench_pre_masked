
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* lc_cap; struct TYPE_6__* lc_class; struct TYPE_6__* lc_style; } ;
typedef TYPE_1__ login_cap_t ;


 int FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

void
FUNC_2(login_cap_t * VAR_5)
{
    if (VAR_5) {
 FUNC_1(VAR_5->lc_style);
 FUNC_1(VAR_5->lc_class);
 FUNC_1(VAR_5->lc_cap);
 FUNC_1(VAR_5);
 if (--VAR_4 == 0) {
     FUNC_1(VAR_2);
     FUNC_1(VAR_0);
     VAR_0 = ((void*)0);
     VAR_1 = 0;
     VAR_2 = ((void*)0);
     VAR_3 = 0;
     FUNC_0();
 }
    }
}
