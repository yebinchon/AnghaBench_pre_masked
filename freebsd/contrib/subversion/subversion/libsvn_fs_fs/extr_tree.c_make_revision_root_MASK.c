
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_fs_t ;
struct TYPE_4__ {int * fsap_data; int rev; int is_txn_root; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int dag_node_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int *) ;

__attribute__((used)) static svn_fs_root_t *
FUNC_1(svn_fs_t *VAR_1,
                   svn_revnum_t VAR_2,
                   dag_node_t *VAR_3,
                   apr_pool_t *VAR_4)
{
  svn_fs_root_t *VAR_5 = FUNC_0(VAR_1, VAR_4);

  VAR_5->is_txn_root = VAR_0;
  VAR_5->rev = VAR_2;
  VAR_5->fsap_data = VAR_3;

  return VAR_5;
}
