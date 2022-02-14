
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_revnum_t ;
struct TYPE_7__ {int client_capabilities; int fs; int hooks_env_path; } ;
typedef TYPE_2__ svn_repos_t ;
typedef int svn_fs_txn_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int **,int ,int ,int ,int *) ;
 int * FUNC_4 (char const**,int *,int *) ;
 TYPE_1__* FUNC_5 (int *,int ) ;
 int * FUNC_6 (int *,int *) ;
 int * FUNC_7 (TYPE_2__*,int *,int *,int ,char const*,int *) ;
 int FUNC_8 (int **,int ,int *,int *) ;
 int * FUNC_9 (int *,int *,int *) ;

svn_error_t *
FUNC_10(svn_fs_txn_t **VAR_3,
                                   svn_repos_t *VAR_4,
                                   svn_revnum_t VAR_5,
                                   apr_hash_t *VAR_6,
                                   apr_pool_t *VAR_7)
{
  apr_array_header_t *VAR_8;
  const char *VAR_9;
  svn_string_t *VAR_10 = FUNC_5(VAR_6, VAR_2);
  apr_hash_t *VAR_11;
  svn_error_t *VAR_12;
  svn_fs_txn_t *VAR_13;


  FUNC_0(FUNC_8(&VAR_11, VAR_4->hooks_env_path,
                                     VAR_7, VAR_7));



  FUNC_0(FUNC_3(&VAR_13, VAR_4->fs, VAR_5,
                            VAR_0, VAR_7));
  VAR_12 = FUNC_4(&VAR_9, VAR_13, VAR_7);
  if (VAR_12)
    return FUNC_1(VAR_12, FUNC_2(VAR_13, VAR_7));




  VAR_8 = FUNC_6(VAR_6, VAR_7);
  VAR_12 = FUNC_9(VAR_13, VAR_8, VAR_7);
  if (VAR_12)
    return FUNC_1(VAR_12, FUNC_2(VAR_13, VAR_7));


  VAR_12 = FUNC_7(VAR_4, VAR_11,
                                      VAR_10 ? VAR_10->data : ((void*)0),
                                      VAR_4->client_capabilities, VAR_9,
                                      VAR_7);
  if (VAR_12)
    return FUNC_1(VAR_12, FUNC_2(VAR_13, VAR_7));


  *VAR_3 = VAR_13;
  return VAR_1;
}
