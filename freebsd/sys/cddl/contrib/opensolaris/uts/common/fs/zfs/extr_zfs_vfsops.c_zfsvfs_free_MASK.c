
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * z_hold_mtx; int z_fuid_lock; int z_teardown_inactive_lock; int z_teardown_lock; int z_all_znodes; int z_lock; int z_znodes_lock; } ;
typedef TYPE_1__ zfsvfs_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_2 ;

void
FUNC_8(zfsvfs_t *VAR_3)
{
 int VAR_4;







 FUNC_5(&VAR_2, VAR_0);
 FUNC_6(&VAR_2);

 FUNC_7(VAR_3);

 FUNC_2(&VAR_3->z_znodes_lock);
 FUNC_2(&VAR_3->z_lock);
 FUNC_1(&VAR_3->z_all_znodes);
 FUNC_3(&VAR_3->z_teardown_lock);
 FUNC_4(&VAR_3->z_teardown_inactive_lock);
 FUNC_4(&VAR_3->z_fuid_lock);
 for (VAR_4 = 0; VAR_4 != VAR_1; VAR_4++)
  FUNC_2(&VAR_3->z_hold_mtx[VAR_4]);
 FUNC_0(VAR_3, sizeof (zfsvfs_t));
}
