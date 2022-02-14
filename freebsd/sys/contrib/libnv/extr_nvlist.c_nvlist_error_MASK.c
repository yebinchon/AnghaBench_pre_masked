
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int nvl_error; } ;
typedef TYPE_1__ nvlist_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;

int
FUNC_1(const nvlist_t *VAR_1)
{

 if (VAR_1 == ((void*)0))
  return (VAR_0);

 FUNC_0(VAR_1);

 return (VAR_1->nvl_error);
}
