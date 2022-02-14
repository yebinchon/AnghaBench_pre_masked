
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bar_nthr; scalar_t__ bar_numin; int bar_sem; int bar_lock; } ;
typedef TYPE_1__ barrier_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ,int *) ;

void
FUNC_3(barrier_t *VAR_1, int VAR_2)
{
 FUNC_0(&VAR_1->bar_lock, ((void*)0));



 FUNC_1(&VAR_1->bar_sem, 0, 0);


 VAR_1->bar_numin = 0;
 VAR_1->bar_nthr = VAR_2;
}
