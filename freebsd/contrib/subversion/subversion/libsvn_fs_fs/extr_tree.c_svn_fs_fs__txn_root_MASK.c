
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int base_rev; int fs; } ;
typedef TYPE_1__ svn_fs_txn_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int **,int ,int ,int ,int ,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int **,TYPE_1__*,int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;

svn_error_t *
FUNC_5(svn_fs_root_t **VAR_4,
                    svn_fs_txn_t *VAR_5,
                    apr_pool_t *VAR_6)
{
  apr_uint32_t VAR_7 = 0;
  apr_hash_t *VAR_8;


  FUNC_0(FUNC_3(&VAR_8, VAR_5, VAR_6));
  if (VAR_8)
    {
      if (FUNC_4(VAR_8, VAR_3))
        VAR_7 |= VAR_1;

      if (FUNC_4(VAR_8, VAR_2))
        VAR_7 |= VAR_0;
    }

  return FUNC_1(VAR_4, VAR_5->fs, FUNC_2(VAR_5),
                       VAR_5->base_rev, VAR_7, VAR_6);
}
