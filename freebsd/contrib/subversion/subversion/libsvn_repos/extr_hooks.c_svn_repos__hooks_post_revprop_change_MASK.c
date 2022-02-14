
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_revnum_t ;
typedef int svn_repos_t ;
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
 char* FUNC_1 (int *,char*,int ) ;
 char* FUNC_2 (char const*,scalar_t__*,int *) ;
 int FUNC_3 (int **,int const*,int *) ;
 int * FUNC_4 (char const*) ;
 int FUNC_5 (int *,int ,char const*,char const**,int *,int *,int *) ;
 char* FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int **,int ,int ,int ,int *) ;
 int FUNC_9 (int *,int *) ;
 char* FUNC_10 (int *,int *) ;

svn_error_t *
FUNC_11(svn_repos_t *VAR_5,
                                     apr_hash_t *VAR_6,
                                     svn_revnum_t VAR_7,
                                     const char *VAR_8,
                                     const char *VAR_9,
                                     const svn_string_t *VAR_10,
                                     char VAR_11,
                                     apr_pool_t *VAR_12)
{
  const char *VAR_13 = FUNC_10(VAR_5, VAR_12);
  svn_boolean_t VAR_14;

  if ((VAR_13 = FUNC_2(VAR_13, &VAR_14, VAR_12)) && VAR_14)
    {
      return FUNC_4(VAR_13);
    }
  else if (VAR_13)
    {
      const char *VAR_15[7];
      apr_file_t *VAR_16 = ((void*)0);
      char VAR_17[2];


      if (VAR_10)
        FUNC_0(FUNC_3(&VAR_16, VAR_10, VAR_12));
      else
        FUNC_0(FUNC_8(&VAR_16, VAR_3,
                                 VAR_1, VAR_0, VAR_12));

      VAR_17[0] = VAR_11;
      VAR_17[1] = '\0';

      VAR_15[0] = VAR_13;
      VAR_15[1] = FUNC_6(FUNC_9(VAR_5, VAR_12), VAR_12);
      VAR_15[2] = FUNC_1(VAR_12, "%ld", VAR_7);
      VAR_15[3] = VAR_8 ? VAR_8 : "";
      VAR_15[4] = VAR_9;
      VAR_15[5] = VAR_17;
      VAR_15[6] = ((void*)0);

      FUNC_0(FUNC_5(((void*)0), VAR_4, VAR_13,
                           VAR_15, VAR_6, VAR_16, VAR_12));

      FUNC_0(FUNC_7(VAR_16, VAR_12));
    }

  return VAR_2;
}
