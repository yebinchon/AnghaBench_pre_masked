
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* object_pool; int ref_count; } ;
typedef TYPE_2__ object_ref_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int unused_count; } ;


 int FUNC_0 (int *,TYPE_2__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(object_ref_t *VAR_1,
              apr_pool_t *VAR_2)
{


  if (FUNC_2(&VAR_1->ref_count) == 0)
    FUNC_1(&VAR_1->object_pool->unused_count);





  FUNC_0(VAR_2, VAR_1, VAR_0);
}
