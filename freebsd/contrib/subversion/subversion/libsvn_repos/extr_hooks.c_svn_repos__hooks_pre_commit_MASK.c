
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fs; } ;
typedef TYPE_1__ svn_repos_t ;
typedef int svn_fs_access_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 char* FUNC_2 (char const*,scalar_t__*,int *) ;
 int * FUNC_3 (char const*) ;
 int FUNC_4 (int **,int *,int *) ;
 int FUNC_5 (int *,int ,char const*,char const**,int *,int *,int *) ;
 char* FUNC_6 (int ,int *) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (int **,int ) ;
 int FUNC_9 (int **,int ,int ,int ,int *) ;
 int FUNC_10 (TYPE_1__*,int *) ;
 char* FUNC_11 (TYPE_1__*,int *) ;

svn_error_t *
FUNC_12(svn_repos_t *VAR_5,
                            apr_hash_t *VAR_6,
                            const char *VAR_7,
                            apr_pool_t *VAR_8)
{
  const char *VAR_9 = FUNC_11(VAR_5, VAR_8);
  svn_boolean_t VAR_10;

  if ((VAR_9 = FUNC_2(VAR_9, &VAR_10, VAR_8)) && VAR_10)
    {
      return FUNC_3(VAR_9);
    }
  else if (VAR_9)
    {
      const char *VAR_11[4];
      svn_fs_access_t *VAR_12;
      apr_file_t *VAR_13 = ((void*)0);

      VAR_11[0] = VAR_9;
      VAR_11[1] = FUNC_6(FUNC_10(VAR_5, VAR_8), VAR_8);
      VAR_11[2] = VAR_7;
      VAR_11[3] = ((void*)0);

      FUNC_0(FUNC_8(&VAR_12, VAR_5->fs));
      if (VAR_12)
        {
          apr_hash_t *VAR_14 = FUNC_7(VAR_12);
          if (FUNC_1(VAR_14)) {
            FUNC_0(FUNC_4(&VAR_13, VAR_14, VAR_8));
          }
        }

      if (!VAR_13)
        FUNC_0(FUNC_9(&VAR_13, VAR_3,
                                 VAR_1, VAR_0, VAR_8));

      FUNC_0(FUNC_5(((void*)0), VAR_4, VAR_9, VAR_11,
                           VAR_6, VAR_13, VAR_8));
    }

  return VAR_2;
}
