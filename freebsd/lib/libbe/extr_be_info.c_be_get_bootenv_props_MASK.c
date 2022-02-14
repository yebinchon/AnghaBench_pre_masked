
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int single_object; int * list; int * lbh; } ;
typedef TYPE_1__ prop_data_t ;
typedef int nvlist_t ;
typedef int libbe_handle_t ;


 int FUNC_0 (TYPE_1__*) ;

int
FUNC_1(libbe_handle_t *VAR_0, nvlist_t *VAR_1)
{
 prop_data_t VAR_2;

 VAR_2.lbh = VAR_0;
 VAR_2.list = VAR_1;
 VAR_2.single_object = 0;
 return (FUNC_0(&VAR_2));
}
