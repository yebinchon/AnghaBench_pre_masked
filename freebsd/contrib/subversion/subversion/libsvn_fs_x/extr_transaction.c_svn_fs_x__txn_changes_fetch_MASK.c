
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_fs_x__txn_id_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_3__ {void* deletions; int * changed_paths; } ;
typedef TYPE_1__ process_changes_baton_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int * VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int *) ;
 int VAR_5 ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int ,int ,TYPE_1__*,int *) ;
 int FUNC_4 (int **,int ,int,int ,int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ,int *) ;

svn_error_t *
FUNC_8(apr_hash_t **VAR_6,
                            svn_fs_t *VAR_7,
                            svn_fs_x__txn_id_t VAR_8,
                            apr_pool_t *VAR_9)
{
  apr_file_t *VAR_10;
  apr_hash_t *VAR_11 = FUNC_1(VAR_9);
  apr_pool_t *VAR_12 = FUNC_5(VAR_9);
  process_changes_baton_t VAR_13;

  VAR_13.changed_paths = VAR_11;
  VAR_13.deletions = FUNC_1(VAR_12);

  FUNC_0(FUNC_4(&VAR_10,
                           FUNC_2(VAR_7, VAR_8, VAR_12),
                           VAR_2 | VAR_0, VAR_1,
                           VAR_12));

  FUNC_0(FUNC_3(
                                  FUNC_7(VAR_10, VAR_4,
                                                           VAR_12),
                                  VAR_5, &VAR_13,
                                  VAR_12));
  FUNC_6(VAR_12);

  *VAR_6 = VAR_11;

  return VAR_3;
}
