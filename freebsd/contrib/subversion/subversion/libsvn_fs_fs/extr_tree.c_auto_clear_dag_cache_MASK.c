
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ insertions; int buckets; int pool; } ;
typedef TYPE_1__ fs_fs_dag_cache_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(fs_fs_dag_cache_t* VAR_1)
{
  if (VAR_1->insertions > VAR_0)
    {
      FUNC_1(VAR_1->pool);

      FUNC_0(VAR_1->buckets, 0, sizeof(VAR_1->buckets));
      VAR_1->insertions = 0;
    }
}
