
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * zd_range_lock; int * zd_object_lock; int zd_dirobj_lock; } ;
typedef TYPE_1__ ztest_ds_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(ztest_ds_t *VAR_2)
{
 FUNC_0(&VAR_2->zd_dirobj_lock);

 for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_1(&VAR_2->zd_object_lock[VAR_3]);

 for (int VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
  FUNC_1(&VAR_2->zd_range_lock[VAR_4]);
}
