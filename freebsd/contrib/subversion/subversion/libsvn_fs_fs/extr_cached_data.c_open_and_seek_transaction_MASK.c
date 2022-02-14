
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_fs_t ;
struct TYPE_6__ {int file; } ;
typedef TYPE_1__ svn_fs_fs__revision_file_t ;
typedef int svn_error_t ;
struct TYPE_7__ {int item_index; int txn_id; } ;
typedef TYPE_2__ representation_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int *,int ,int *,int ,int *) ;
 int FUNC_2 (int *,int *,int *,int ,int *,int ,int *) ;
 int FUNC_3 (TYPE_1__**,int *,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_fs_fs__revision_file_t **VAR_2,
                          svn_fs_t *VAR_3,
                          representation_t *VAR_4,
                          apr_pool_t *VAR_5)
{
  apr_off_t VAR_6;

  FUNC_0(FUNC_3(VAR_2, VAR_3, &VAR_4->txn_id, VAR_5, VAR_5));

  FUNC_0(FUNC_2(&VAR_6, VAR_3, ((void*)0), VAR_0,
                                 &VAR_4->txn_id, VAR_4->item_index, VAR_5));
  FUNC_0(FUNC_1(VAR_3, (*VAR_2)->file, ((void*)0), VAR_6, VAR_5));

  return VAR_1;
}
