
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int unused_count; } ;
typedef TYPE_1__ svn_object_pool__t ;
struct TYPE_4__ {int ref_count; TYPE_1__* object_pool; } ;
typedef TYPE_2__ object_ref_t ;
typedef int apr_status_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static apr_status_t
FUNC_2(void *VAR_1)
{
  object_ref_t *VAR_2 = VAR_1;
  svn_object_pool__t *VAR_3 = VAR_2->object_pool;
  if (FUNC_0(&VAR_2->ref_count) == 0)
    FUNC_1(&VAR_3->unused_count);

  return VAR_0;
}
