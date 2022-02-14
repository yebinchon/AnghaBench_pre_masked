
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * zr_caller; int * zr_owner; int zr_cv; scalar_t__ zr_refcount; int zr_mtx; } ;
typedef TYPE_1__ zrlock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *) ;
 int FUNC_1 (int *,int *,int ,int *) ;

void
FUNC_2(zrlock_t *VAR_2)
{
 FUNC_1(&VAR_2->zr_mtx, ((void*)0), VAR_1, ((void*)0));
 VAR_2->zr_refcount = 0;
 FUNC_0(&VAR_2->zr_cv, ((void*)0), VAR_0, ((void*)0));




}
