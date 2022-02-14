
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_fs_id_t ;
struct TYPE_5__ {TYPE_2__* fsap_data; } ;
struct TYPE_6__ {TYPE_1__ generic_id; } ;
typedef TYPE_2__ fs_fs__id_t ;
typedef int apr_pool_t ;


 TYPE_2__* FUNC_0 (int *,TYPE_2__ const*,int) ;

svn_fs_id_t *
FUNC_1(const svn_fs_id_t *VAR_0, apr_pool_t *VAR_1)
{
  const fs_fs__id_t *VAR_2 = (const fs_fs__id_t *)VAR_0;
  fs_fs__id_t *VAR_3 = FUNC_0(VAR_1, VAR_2, sizeof(*VAR_3));

  VAR_3->generic_id.fsap_data = VAR_3;

  return (svn_fs_id_t *)VAR_3;
}
