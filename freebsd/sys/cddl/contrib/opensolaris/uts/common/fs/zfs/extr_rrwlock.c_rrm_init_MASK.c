
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * locks; } ;
typedef TYPE_1__ rrmlock_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

void
FUNC_1(rrmlock_t *VAR_1, boolean_t VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_0(&VAR_1->locks[VAR_3], VAR_2);
}
