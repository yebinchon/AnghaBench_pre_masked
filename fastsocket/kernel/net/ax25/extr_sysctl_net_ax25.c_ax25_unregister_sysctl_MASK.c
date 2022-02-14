
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* child; scalar_t__ ctl_name; } ;
typedef TYPE_1__ ctl_table ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void FUNC_2(void)
{
 ctl_table *VAR_2;
 FUNC_1(VAR_1);

 for (VAR_2 = VAR_0; VAR_2->ctl_name; VAR_2++)
  FUNC_0(VAR_2->child);
 FUNC_0(VAR_0);
}
