
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_string_t ;
typedef int svn_revnum_t ;
struct TYPE_6__ {int fs; int hooks_env_path; } ;
typedef TYPE_1__ svn_repos_t ;
typedef scalar_t__ svn_repos_revision_access_level_t ;
typedef int svn_repos_authz_func_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ,int ) ;
 int FUNC_3 (int ,int ,char const*,int const**,int const*,int *) ;
 int FUNC_4 (int **,int ,int ,char const*,int ,int *,int *) ;
 int FUNC_5 (TYPE_1__*,int *,int ,char const*,char const*,int const*,char,int *) ;
 int FUNC_6 (TYPE_1__*,int *,int ,char const*,char const*,int const*,char,int *) ;
 int FUNC_7 (int **,int ,int *,int *) ;
 int FUNC_8 (char const*,int const*,int *) ;
 int FUNC_9 (scalar_t__*,TYPE_1__*,int ,int ,void*,int *) ;
 scalar_t__ VAR_3 ;

svn_error_t *
FUNC_10(svn_repos_t *VAR_4,
                              svn_revnum_t VAR_5,
                              const char *VAR_6,
                              const char *VAR_7,
                              const svn_string_t *const *VAR_8,
                              const svn_string_t *VAR_9,
                              svn_boolean_t VAR_10,
                              svn_boolean_t VAR_11,
                              svn_repos_authz_func_t VAR_12,
                              void *VAR_13,
                              apr_pool_t *VAR_14)
{
  svn_repos_revision_access_level_t VAR_15;

  FUNC_0(FUNC_9(&VAR_15, VAR_4, VAR_5,
                                          VAR_12, VAR_13,
                                          VAR_14));

  if (VAR_15 == VAR_3)
    {
      const svn_string_t *VAR_16;
      char VAR_17;
      apr_hash_t *VAR_18;

      FUNC_0(FUNC_8(VAR_7, VAR_9, VAR_14));


      if (VAR_8)
        {
          VAR_16 = *VAR_8;
        }
      else
        {


          svn_string_t *VAR_19;

          FUNC_0(FUNC_4(&VAR_19, VAR_4->fs, VAR_5, VAR_7,
                                        VAR_2, VAR_14, VAR_14));
          VAR_16 = VAR_19;
        }


      if (! VAR_9)
        VAR_17 = 'D';
      else if (! VAR_16)
        VAR_17 = 'A';
      else
        VAR_17 = 'M';


      if (VAR_10 || VAR_11)
        FUNC_0(FUNC_7(&VAR_18, VAR_4->hooks_env_path,
                                           VAR_14, VAR_14));


      if (VAR_10)
        FUNC_0(FUNC_6(VAR_4, VAR_18, VAR_5,
                                                    VAR_6, VAR_7, VAR_9,
                                                    VAR_17, VAR_14));

      FUNC_0(FUNC_3(VAR_4->fs, VAR_5, VAR_7,
                                      &VAR_16, VAR_9, VAR_14));

      if (VAR_11)
        FUNC_0(FUNC_5(VAR_4, VAR_18, VAR_5,
                                                     VAR_6, VAR_7, VAR_16,
                                                     VAR_17, VAR_14));
    }
  else
    {
      return FUNC_2
        (VAR_0, ((void*)0),
         FUNC_1("Write denied:  not authorized to read all of revision %ld"), VAR_5);
    }

  return VAR_1;
}
