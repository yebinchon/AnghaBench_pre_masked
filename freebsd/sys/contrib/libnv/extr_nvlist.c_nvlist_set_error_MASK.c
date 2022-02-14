
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int nvl_error; } ;
typedef TYPE_1__ nvlist_t ;


 int FUNC_0 (int) ;

void
FUNC_1(nvlist_t *VAR_0, int VAR_1)
{

 FUNC_0(VAR_1 != 0);





 if (VAR_0 != ((void*)0) && VAR_1 != 0 && VAR_0->nvl_error == 0)
  VAR_0->nvl_error = VAR_1;
}
