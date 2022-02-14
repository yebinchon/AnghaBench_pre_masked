
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_repos_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (char const*,scalar_t__*,int *) ;
 int * FUNC_2 (char const*) ;
 int FUNC_3 (int *,int ,char const*,char const**,int *,int *,int *) ;
 char* FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int *) ;
 char* FUNC_6 (int *,int *) ;

svn_error_t *
FUNC_7(svn_repos_t *VAR_2,
                            apr_hash_t *VAR_3,
                            const char *VAR_4,
                            const char *VAR_5,
                            const char *VAR_6,
                            svn_boolean_t VAR_7,
                            apr_pool_t *VAR_8)
{
  const char *VAR_9 = FUNC_6(VAR_2, VAR_8);
  svn_boolean_t VAR_10;

  if ((VAR_9 = FUNC_1(VAR_9, &VAR_10, VAR_8)) && VAR_10)
    {
      return FUNC_2(VAR_9);
    }
  else if (VAR_9)
    {
      const char *VAR_11[7];

      VAR_11[0] = VAR_9;
      VAR_11[1] = FUNC_4(FUNC_5(VAR_2, VAR_8), VAR_8);
      VAR_11[2] = VAR_4;
      VAR_11[3] = VAR_5 ? VAR_5 : "";
      VAR_11[4] = VAR_6 ? VAR_6 : "";
      VAR_11[5] = VAR_7 ? "1" : "0";
      VAR_11[6] = ((void*)0);

      FUNC_0(FUNC_3(((void*)0), VAR_1, VAR_9, VAR_11,
                           VAR_3, ((void*)0), VAR_8));
    }

  return VAR_0;
}
