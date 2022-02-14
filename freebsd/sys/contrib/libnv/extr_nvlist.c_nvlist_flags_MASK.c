
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nvl_error; int nvl_flags; } ;
typedef TYPE_1__ nvlist_t ;


 int FUNC_0 (TYPE_1__ const*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

int
FUNC_2(const nvlist_t *VAR_1)
{

 FUNC_0(VAR_1);
 FUNC_1(VAR_1->nvl_error == 0);

 return (VAR_1->nvl_flags & VAR_0);
}
