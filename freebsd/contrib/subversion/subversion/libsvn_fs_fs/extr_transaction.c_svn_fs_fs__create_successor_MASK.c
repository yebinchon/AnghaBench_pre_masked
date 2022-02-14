
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
struct TYPE_4__ {int const* id; int copyroot_rev; int created_path; scalar_t__ copyroot_path; } ;
typedef TYPE_1__ node_revision_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int * FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int FUNC_4 (int const*) ;
 int * FUNC_5 (int ,int const*,int const*,int *) ;
 int FUNC_6 (int *,int const*,TYPE_1__*,int ,int *) ;

svn_error_t *
FUNC_7(const svn_fs_id_t **VAR_2,
                            svn_fs_t *VAR_3,
                            const svn_fs_id_t *VAR_4,
                            node_revision_t *VAR_5,
                            const svn_fs_fs__id_part_t *VAR_6,
                            const svn_fs_fs__id_part_t *VAR_7,
                            apr_pool_t *VAR_8)
{
  const svn_fs_id_t *VAR_9;

  if (! VAR_6)
    VAR_6 = FUNC_2(VAR_4);
  VAR_9 = FUNC_5(FUNC_3(VAR_4), VAR_6,
                                VAR_7, VAR_8);

  VAR_5->id = VAR_9;

  if (! VAR_5->copyroot_path)
    {
      VAR_5->copyroot_path = FUNC_1(VAR_8,
                                               VAR_5->created_path);
      VAR_5->copyroot_rev = FUNC_4(VAR_5->id);
    }

  FUNC_0(FUNC_6(VAR_3, VAR_5->id, VAR_5, VAR_0,
                                       VAR_8));

  *VAR_2 = VAR_9;

  return VAR_1;
}
