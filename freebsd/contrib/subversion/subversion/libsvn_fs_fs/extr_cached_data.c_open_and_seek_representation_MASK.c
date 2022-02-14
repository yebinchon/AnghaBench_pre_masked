
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_fs_t ;
typedef int svn_fs_fs__revision_file_t ;
typedef int svn_error_t ;
struct TYPE_4__ {int item_index; int revision; int txn_id; } ;
typedef TYPE_1__ representation_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int **,int *,int ,int ,int *) ;
 int * FUNC_1 (int **,int *,TYPE_1__*,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(svn_fs_fs__revision_file_t **VAR_0,
                             svn_fs_t *VAR_1,
                             representation_t *VAR_2,
                             apr_pool_t *VAR_3)
{
  if (! FUNC_2(&VAR_2->txn_id))
    return FUNC_0(VAR_0, VAR_1, VAR_2->revision, VAR_2->item_index,
                                  VAR_3);
  else
    return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
