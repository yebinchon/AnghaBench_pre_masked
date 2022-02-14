
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_t ;
struct TYPE_6__ {TYPE_2__* fsap_data; int pool; int txn; int rev; int txn_flags; int is_txn_root; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
struct TYPE_7__ {int txn_node_cache; int txn_id; } ;
typedef TYPE_2__ fs_txn_root_data_t ;
typedef int apr_uint32_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_1 (int ,int) ;
 int FUNC_2 (int *,int const*,char*,int ) ;
 TYPE_1__* FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ,int ,int ,int,int,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int const*,int ) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_fs_root_t **VAR_7,
              svn_fs_t *VAR_8,
              const svn_fs_fs__id_part_t *VAR_9,
              svn_revnum_t VAR_10,
              apr_uint32_t VAR_11,
              apr_pool_t *VAR_12)
{
  svn_fs_root_t *VAR_13 = FUNC_3(VAR_8, VAR_12);
  fs_txn_root_data_t *VAR_14 = FUNC_1(VAR_13->pool, sizeof(*VAR_14));
  VAR_14->txn_id = *VAR_9;

  VAR_13->is_txn_root = VAR_4;
  VAR_13->txn = FUNC_5(VAR_9, VAR_13->pool);
  VAR_13->txn_flags = VAR_11;
  VAR_13->rev = VAR_10;






  FUNC_0(FUNC_4(&(VAR_14->txn_node_cache),
                                      VAR_6,
                                      VAR_5,
                                      VAR_0,
                                      32, 20, VAR_1,
                                      FUNC_2(VAR_12, VAR_9, ":TXN",
                                                  VAR_3),
                                      VAR_13->pool));





  FUNC_0(FUNC_6(VAR_8, VAR_13->txn, VAR_13->pool));

  VAR_13->fsap_data = VAR_14;

  *VAR_7 = VAR_13;
  return VAR_2;
}
