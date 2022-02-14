
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* lc_cap; struct TYPE_4__* lc_class; struct TYPE_4__* lc_style; } ;
typedef TYPE_1__ login_cap_t ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(login_cap_t *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;
 FUNC_0(VAR_0->lc_style);
 FUNC_0(VAR_0->lc_class);
 FUNC_0(VAR_0->lc_cap);
 FUNC_0(VAR_0);
}
