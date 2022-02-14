
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_3__ {int prop_rep; int data_rep; int is_fresh_txn_root; } ;
typedef TYPE_1__ node_revision_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_fs_t *VAR_2,
                    node_revision_t *VAR_3,
                    apr_pool_t *VAR_4)
{

  VAR_3->is_fresh_txn_root = VAR_0;


  FUNC_0(FUNC_1(VAR_2, VAR_3->data_rep,
                                         VAR_4));
  FUNC_0(FUNC_1(VAR_2, VAR_3->prop_rep,
                                         VAR_4));

  return VAR_1;
}
