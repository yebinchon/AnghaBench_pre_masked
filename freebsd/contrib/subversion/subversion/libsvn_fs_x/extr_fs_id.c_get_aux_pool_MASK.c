
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * aux_pool; int owner; } ;
typedef TYPE_2__ svn_fs_x__id_context_t ;
struct TYPE_5__ {TYPE_2__* fsap_data; } ;
struct TYPE_7__ {TYPE_1__ generic_id; } ;
typedef TYPE_3__ fs_x__id_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int ) ;

__attribute__((used)) static apr_pool_t *
FUNC_1(const fs_x__id_t *VAR_0)
{
  svn_fs_x__id_context_t *VAR_1 = VAR_0->generic_id.fsap_data;
  if (!VAR_1->aux_pool)
    VAR_1->aux_pool = FUNC_0(VAR_1->owner);

  return VAR_1->aux_pool;
}
