
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_repos_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (int *,char*,int ) ;
 char* FUNC_2 (char const*,scalar_t__*,int *) ;
 int * FUNC_3 (char const*) ;
 int FUNC_4 (int *,int ,char const*,char const**,int *,int *,int *) ;
 char* FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,int *) ;
 char* FUNC_7 (int *,int *) ;

svn_error_t *
FUNC_8(svn_repos_t *VAR_2,
                             apr_hash_t *VAR_3,
                             svn_revnum_t VAR_4,
                             const char *VAR_5,
                             apr_pool_t *VAR_6)
{
  const char *VAR_7 = FUNC_7(VAR_2, VAR_6);
  svn_boolean_t VAR_8;

  if ((VAR_7 = FUNC_2(VAR_7, &VAR_8, VAR_6)) && VAR_8)
    {
      return FUNC_3(VAR_7);
    }
  else if (VAR_7)
    {
      const char *VAR_9[5];

      VAR_9[0] = VAR_7;
      VAR_9[1] = FUNC_5(FUNC_6(VAR_2, VAR_6), VAR_6);
      VAR_9[2] = FUNC_1(VAR_6, "%ld", VAR_4);
      VAR_9[3] = VAR_5;
      VAR_9[4] = ((void*)0);

      FUNC_0(FUNC_4(((void*)0), VAR_1, VAR_7, VAR_9,
                           VAR_3, ((void*)0), VAR_6));
    }

  return VAR_0;
}
