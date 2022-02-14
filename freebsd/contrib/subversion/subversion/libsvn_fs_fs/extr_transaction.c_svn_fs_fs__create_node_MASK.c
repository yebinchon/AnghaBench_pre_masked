
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
struct TYPE_4__ {int const* id; } ;
typedef TYPE_1__ node_revision_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int *,int *,int const*,int *) ;
 int * FUNC_2 (int *,int const*,int const*,int *) ;
 int FUNC_3 (int *,int const*,TYPE_1__*,int ,int *) ;

svn_error_t *
FUNC_4(const svn_fs_id_t **VAR_2,
                       svn_fs_t *VAR_3,
                       node_revision_t *VAR_4,
                       const svn_fs_fs__id_part_t *VAR_5,
                       const svn_fs_fs__id_part_t *VAR_6,
                       apr_pool_t *VAR_7)
{
  svn_fs_fs__id_part_t VAR_8;
  const svn_fs_id_t *VAR_9;


  FUNC_0(FUNC_1(&VAR_8, VAR_3, VAR_6, VAR_7));

  VAR_9 = FUNC_2(&VAR_8, VAR_5, VAR_6, VAR_7);

  VAR_4->id = VAR_9;

  FUNC_0(FUNC_3(VAR_3, VAR_4->id, VAR_4, VAR_0, VAR_7));

  *VAR_2 = VAR_9;

  return VAR_1;
}
