
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * root_id; } ;
typedef TYPE_1__ transaction_t ;
typedef int trail_t ;
typedef int svn_revnum_t ;
typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__**,int *,int *,int ,int *,int *) ;
 int * FUNC_2 (int *,int ) ;

svn_error_t *
FUNC_3(const svn_fs_id_t **VAR_1,
                          svn_fs_t *VAR_2,
                          svn_revnum_t VAR_3,
                          trail_t *VAR_4,
                          apr_pool_t *VAR_5)
{
  transaction_t *VAR_6;

  FUNC_0(FUNC_1(&VAR_6, ((void*)0), VAR_2, VAR_3, VAR_4, VAR_5));
  if (VAR_6->root_id == ((void*)0))
    return FUNC_2(VAR_2, VAR_3);

  *VAR_1 = VAR_6->root_id;
  return VAR_0;
}
