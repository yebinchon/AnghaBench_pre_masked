
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int * FUNC_0 (int *,char const*,size_t) ;
 int FUNC_1 (int *,int ,size_t,int *) ;
 int * FUNC_2 (int *,char const*) ;
 int FUNC_3 (int *,char const*,size_t) ;
 int FUNC_4 (int ) ;
 size_t FUNC_5 (char const*) ;

__attribute__((used)) static void
FUNC_6(const char **VAR_0,
           apr_hash_t *VAR_1,
           svn_boolean_t VAR_2,
           apr_pool_t *VAR_3)
{
  const char *VAR_4;

  if (VAR_0)
    for (VAR_4 = *VAR_0; VAR_4; VAR_4 = *(++VAR_0))
      {
        const char *VAR_5 = *(++VAR_0);
        size_t VAR_6;
        FUNC_4(VAR_4 != ((void*)0));



        VAR_6 = FUNC_5(VAR_4);
        if (VAR_2 && ((FUNC_0(VAR_1, VAR_4, VAR_6)) != ((void*)0)))
          continue;
        else
          FUNC_1(VAR_1, FUNC_3(VAR_3, VAR_4, VAR_6), VAR_6,
                       VAR_5 ? FUNC_2(VAR_3, VAR_5) : ((void*)0));
      }
}
