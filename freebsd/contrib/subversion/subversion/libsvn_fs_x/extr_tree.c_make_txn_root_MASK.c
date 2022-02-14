
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_x__txn_id_t ;
typedef int svn_fs_t ;
struct TYPE_6__ {TYPE_2__* fsap_data; int rev; int txn_flags; int pool; int txn; int is_txn_root; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_error_t ;
struct TYPE_7__ {int txn_id; } ;
typedef TYPE_2__ fs_txn_root_data_t ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int ,int) ;
 TYPE_1__* FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_fs_root_t **VAR_2,
              svn_fs_t *VAR_3,
              svn_fs_x__txn_id_t VAR_4,
              svn_revnum_t VAR_5,
              apr_uint32_t VAR_6,
              apr_pool_t *VAR_7)
{
  svn_fs_root_t *VAR_8 = FUNC_1(VAR_3, VAR_7);
  fs_txn_root_data_t *VAR_9 = FUNC_0(VAR_8->pool, sizeof(*VAR_9));
  VAR_9->txn_id = VAR_4;

  VAR_8->is_txn_root = VAR_1;
  VAR_8->txn = FUNC_2(VAR_4, VAR_8->pool);
  VAR_8->txn_flags = VAR_6;
  VAR_8->rev = VAR_5;
  VAR_8->fsap_data = VAR_9;

  *VAR_2 = VAR_8;
  return VAR_0;
}
