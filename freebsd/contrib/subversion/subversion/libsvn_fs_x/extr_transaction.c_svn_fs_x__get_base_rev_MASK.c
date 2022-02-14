
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_x__txn_id_t ;
struct TYPE_3__ {int base_rev; } ;
typedef TYPE_1__ svn_fs_x__transaction_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__**,int *,int ,int *) ;

svn_error_t *
FUNC_2(svn_revnum_t *VAR_1,
                       svn_fs_t *VAR_2,
                       svn_fs_x__txn_id_t VAR_3,
                       apr_pool_t *VAR_4)
{
  svn_fs_x__transaction_t *VAR_5;
  FUNC_0(FUNC_1(&VAR_5, VAR_2, VAR_3, VAR_4));
  *VAR_1 = VAR_5->base_rev;

  return VAR_0;
}
