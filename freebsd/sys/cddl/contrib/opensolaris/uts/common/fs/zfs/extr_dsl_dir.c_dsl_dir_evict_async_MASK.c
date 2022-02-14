
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int dp_spa; int dp_dirty_dirs; } ;
typedef TYPE_1__ dsl_pool_t ;
struct TYPE_9__ {scalar_t__* dd_tempreserved; scalar_t__* dd_space_towrite; int dd_lock; TYPE_1__* dd_pool; scalar_t__ dd_parent; int * dd_dbuf; } ;
typedef TYPE_2__ dsl_dir_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__,TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,TYPE_2__*) ;
 int FUNC_6 (int *,TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_7(void *VAR_1)
{
 dsl_dir_t *VAR_2 = VAR_1;
 dsl_pool_t *VAR_3 = VAR_2->dd_pool;
 int VAR_4;

 VAR_2->dd_dbuf = ((void*)0);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  FUNC_0(!FUNC_6(&VAR_3->dp_dirty_dirs, VAR_2, VAR_4));
  FUNC_0(VAR_2->dd_tempreserved[VAR_4] == 0);
  FUNC_0(VAR_2->dd_space_towrite[VAR_4] == 0);
 }

 if (VAR_2->dd_parent)
  FUNC_1(VAR_2->dd_parent, VAR_2);

 FUNC_5(VAR_2->dd_pool->dp_spa, VAR_2);

 FUNC_2(VAR_2);
 FUNC_4(&VAR_2->dd_lock);
 FUNC_3(VAR_2, sizeof (dsl_dir_t));
}
