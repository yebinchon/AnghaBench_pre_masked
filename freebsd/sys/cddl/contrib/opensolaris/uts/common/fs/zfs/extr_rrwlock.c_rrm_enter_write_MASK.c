
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * locks; } ;
typedef TYPE_1__ rrmlock_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void
FUNC_1(rrmlock_t *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(&VAR_1->locks[VAR_2]);
}
