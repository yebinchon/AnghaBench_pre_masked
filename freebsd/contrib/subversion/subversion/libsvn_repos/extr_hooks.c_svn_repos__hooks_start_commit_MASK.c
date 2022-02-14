
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_repos_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int *,char*) ;
 char* FUNC_2 (char const*,scalar_t__*,int *) ;
 int * FUNC_3 (char const*) ;
 int FUNC_4 (int *,int ,char const*,char const**,int *,int *,int *) ;
 char* FUNC_5 (int const*,char*,int ,int *) ;
 char* FUNC_6 (int ,int *) ;
 int FUNC_7 (int *,int *) ;
 char* FUNC_8 (int *,int *) ;

svn_error_t *
FUNC_9(svn_repos_t *VAR_3,
                              apr_hash_t *VAR_4,
                              const char *VAR_5,
                              const apr_array_header_t *VAR_6,
                              const char *VAR_7,
                              apr_pool_t *VAR_8)
{
  const char *VAR_9 = FUNC_8(VAR_3, VAR_8);
  svn_boolean_t VAR_10;

  if ((VAR_9 = FUNC_2(VAR_9, &VAR_10, VAR_8)) && VAR_10)
    {
      return FUNC_3(VAR_9);
    }
  else if (VAR_9)
    {
      const char *VAR_11[6];
      char *VAR_12;

      if (VAR_6)
        {
          VAR_12 = FUNC_5(VAR_6, ":",
                                                  VAR_0, VAR_8);
        }
      else
        {
          VAR_12 = FUNC_1(VAR_8, "");
        }

      VAR_11[0] = VAR_9;
      VAR_11[1] = FUNC_6(FUNC_7(VAR_3, VAR_8), VAR_8);
      VAR_11[2] = VAR_5 ? VAR_5 : "";
      VAR_11[3] = VAR_12;
      VAR_11[4] = VAR_7;
      VAR_11[5] = ((void*)0);

      FUNC_0(FUNC_4(((void*)0), VAR_2, VAR_9, VAR_11,
                           VAR_4, ((void*)0), VAR_8));
    }

  return VAR_1;
}
