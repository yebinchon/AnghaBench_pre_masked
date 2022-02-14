
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ms_max_size; int ms_weight; int ms_loaded; int ms_allocatable; int ms_lock; } ;
typedef TYPE_1__ metaslab_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int *) ;

void
FUNC_3(metaslab_t *VAR_2)
{
 FUNC_0(FUNC_1(&VAR_2->ms_lock));
 FUNC_2(VAR_2->ms_allocatable, ((void*)0), ((void*)0));
 VAR_2->ms_loaded = VAR_0;
 VAR_2->ms_weight &= ~VAR_1;
 VAR_2->ms_max_size = 0;
}
