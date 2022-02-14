
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_string_t ;
typedef int svn_repos_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_file_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (char const*,scalar_t__*,int *) ;
 int FUNC_2 (int **,int *,int *) ;
 int * FUNC_3 (char const*) ;
 int FUNC_4 (int *,int ,char const*,char const**,int *,int *,int *) ;
 int FUNC_5 (int const*,char*,int ,int *) ;
 char* FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 char* FUNC_9 (int *,int *) ;
 int * FUNC_10 (int ,int *) ;

svn_error_t *
FUNC_11(svn_repos_t *VAR_3,
                             apr_hash_t *VAR_4,
                             const apr_array_header_t *VAR_5,
                             const char *VAR_6,
                             apr_pool_t *VAR_7)
{
  const char *VAR_8 = FUNC_9(VAR_3, VAR_7);
  svn_boolean_t VAR_9;

  if ((VAR_8 = FUNC_1(VAR_8, &VAR_9, VAR_7)) && VAR_9)
    {
      return FUNC_3(VAR_8);
    }
  else if (VAR_8)
    {
      const char *VAR_10[5];
      apr_file_t *VAR_11 = ((void*)0);
      svn_string_t *VAR_12 = FUNC_10(FUNC_5
                                                  (VAR_5, "\n", VAR_2, VAR_7),
                                                  VAR_7);

      FUNC_0(FUNC_2(&VAR_11, VAR_12, VAR_7));

      VAR_10[0] = VAR_8;
      VAR_10[1] = FUNC_6(FUNC_8(VAR_3, VAR_7), VAR_7);
      VAR_10[2] = VAR_6 ? VAR_6 : "";
      VAR_10[3] = ((void*)0);
      VAR_10[4] = ((void*)0);

      FUNC_0(FUNC_4(((void*)0), VAR_1, VAR_8, VAR_10,
                           VAR_4, VAR_11, VAR_7));

      FUNC_0(FUNC_7(VAR_11, VAR_7));
    }

  return VAR_0;
}
