
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int zr_cv; int zr_refcount; int zr_mtx; } ;
typedef TYPE_1__ zrlock_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(zrlock_t *VAR_1)
{
 FUNC_0(VAR_1->zr_refcount);

 FUNC_2(&VAR_1->zr_mtx);
 VAR_1->zr_refcount = VAR_0;
 FUNC_1(&VAR_1->zr_cv);
}
