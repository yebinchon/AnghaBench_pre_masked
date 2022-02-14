
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_revnum_t ;
struct TYPE_4__ {int fs; } ;
typedef TYPE_1__ svn_repos_t ;
typedef scalar_t__ svn_repos_revision_access_level_t ;
typedef int svn_repos_authz_func_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int **,int ,int ,int ,int *,int *) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (scalar_t__*,TYPE_1__*,int ,int ,void*,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

svn_error_t *
FUNC_6(apr_hash_t **VAR_6,
                               svn_repos_t *VAR_7,
                               svn_revnum_t VAR_8,
                               svn_repos_authz_func_t VAR_9,
                               void *VAR_10,
                               apr_pool_t *VAR_11)
{
  svn_repos_revision_access_level_t VAR_12;

  FUNC_0(FUNC_5(&VAR_12, VAR_7, VAR_8,
                                          VAR_9, VAR_10,
                                          VAR_11));

  if (VAR_12 == VAR_4)
    {

      *VAR_6 = FUNC_1(VAR_11);
    }
  else if (VAR_12 == VAR_5)
    {
      apr_hash_t *VAR_13;
      svn_string_t *VAR_14;


      FUNC_0(FUNC_2(&VAR_13, VAR_7->fs, VAR_8, VAR_3,
                                        VAR_11, VAR_11));
      *VAR_6 = FUNC_1(VAR_11);



      VAR_14 = FUNC_3(VAR_13, VAR_1);
      if (VAR_14)
        FUNC_4(*VAR_6, VAR_1, VAR_14);

      VAR_14 = FUNC_3(VAR_13, VAR_2);
      if (VAR_14)
        FUNC_4(*VAR_6, VAR_2, VAR_14);
    }
  else
    {
      FUNC_0(FUNC_2(VAR_6, VAR_7->fs, VAR_8, VAR_3,
                                        VAR_11, VAR_11));
    }

  return VAR_0;
}
