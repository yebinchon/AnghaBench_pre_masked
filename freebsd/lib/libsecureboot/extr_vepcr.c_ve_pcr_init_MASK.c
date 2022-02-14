
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int vtable; } ;
struct TYPE_4__ {int (* init ) (int *) ;} ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *) ;

void
FUNC_1(void)
{
 VAR_5 = 0;
 VAR_3 = VAR_0;
 VAR_4 = &VAR_1;
 VAR_4->init(&VAR_2.vtable);
}
