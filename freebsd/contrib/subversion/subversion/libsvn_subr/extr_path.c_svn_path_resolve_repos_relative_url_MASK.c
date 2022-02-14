
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,char const*,char const*,int ) ;
 int * FUNC_2 (int ,int *,int ,char const*) ;
 int FUNC_3 (char const*) ;

svn_error_t *
FUNC_4(const char **VAR_3,
                                    const char *VAR_4,
                                    const char *VAR_5,
                                    apr_pool_t *VAR_6)
{
  if (! FUNC_3(VAR_4))
    return FUNC_2(VAR_0, ((void*)0),
                             FUNC_0("Improper relative URL '%s'"),
                             VAR_4);





  *VAR_3 = FUNC_1(VAR_6, VAR_5, VAR_4 + 1,
                              VAR_2);

  return VAR_1;
}
