
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int z_os; scalar_t__ z_vfs; int z_teardown_lock; } ;
typedef TYPE_1__ zfsvfs_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (int *,void*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(zfsvfs_t *VAR_0, void *VAR_1)
{
 FUNC_2(&VAR_0->z_teardown_lock, VAR_1);

 if (VAR_0->z_vfs) {



  FUNC_3(VAR_0->z_vfs);

 } else {
  FUNC_1(VAR_0->z_os, VAR_0);
  FUNC_4(VAR_0);
 }
}
