
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* data; } ;
typedef TYPE_1__ svn_string_t ;
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
 int FUNC_3 (TYPE_1__**,int ,char const*,char const**,int *,int *,int *) ;
 char* FUNC_4 (int ,int *) ;
 int FUNC_5 (int *,int *) ;
 char* FUNC_6 (int *,int *) ;

svn_error_t *
FUNC_7(svn_repos_t *VAR_2,
                          apr_hash_t *VAR_3,
                          const char **VAR_4,
                          const char *VAR_5,
                          const char *VAR_6,
                          const char *VAR_7,
                          svn_boolean_t VAR_8,
                          apr_pool_t *VAR_9)
{
  const char *VAR_10 = FUNC_6(VAR_2, VAR_9);
  svn_boolean_t VAR_11;

  if ((VAR_10 = FUNC_1(VAR_10, &VAR_11, VAR_9)) && VAR_11)
    {
      return FUNC_2(VAR_10);
    }
  else if (VAR_10)
    {
      const char *VAR_12[7];
      svn_string_t *VAR_13;


      VAR_12[0] = VAR_10;
      VAR_12[1] = FUNC_4(FUNC_5(VAR_2, VAR_9), VAR_9);
      VAR_12[2] = VAR_5;
      VAR_12[3] = VAR_6;
      VAR_12[4] = VAR_7 ? VAR_7 : "";
      VAR_12[5] = VAR_8 ? "1" : "0";
      VAR_12[6] = ((void*)0);

      FUNC_0(FUNC_3(&VAR_13, VAR_1, VAR_10, VAR_12,
                           VAR_3, ((void*)0), VAR_9));

      if (VAR_4)

        *VAR_4 = VAR_13->data;

    }
  else if (VAR_4)
    *VAR_4 = "";

  return VAR_0;
}
