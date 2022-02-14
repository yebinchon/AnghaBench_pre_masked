
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ svn_node_kind_t ;
struct TYPE_5__ {int rev; int fs; scalar_t__ is_txn_root; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_fs_history_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int * FUNC_1 (TYPE_1__*,char const*) ;
 int VAR_2 ;
 int * VAR_3 ;
 int * FUNC_2 (int ,int ,int ,int ,int *,int ,int *) ;
 int FUNC_3 (scalar_t__*,TYPE_1__*,char const*,int *) ;
 int * FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (char const*,int *) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_fs_history_t **VAR_5,
                  svn_fs_root_t *VAR_6,
                  const char *VAR_7,
                  apr_pool_t *VAR_8,
                  apr_pool_t *VAR_9)
{
  svn_node_kind_t VAR_10;


  if (VAR_6->is_txn_root)
    return FUNC_4(VAR_1, ((void*)0), ((void*)0));


  FUNC_0(FUNC_3(&VAR_10, VAR_6, VAR_7, VAR_9));
  if (VAR_10 == VAR_4)
    return FUNC_1(VAR_6, VAR_7);


  *VAR_5 = FUNC_2(VAR_6->fs,
                                FUNC_5(VAR_7,
                                                             VAR_8),
                                VAR_6->rev, VAR_0, ((void*)0),
                                VAR_2, VAR_8);
  return VAR_3;
}
