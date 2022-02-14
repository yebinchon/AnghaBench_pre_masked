
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int *,int const*) ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 scalar_t__ FUNC_5 (int const*,int *) ;
 int FUNC_6 (char const*,int *) ;

svn_error_t *
FUNC_7(apr_hash_t **VAR_3,
                                 const apr_hash_t *VAR_4,
                                 const char *VAR_5,
                                 svn_client_ctx_t *VAR_6,
                                 apr_pool_t *VAR_7)
{
  apr_hash_t *VAR_8;
  if (VAR_4)
    {
      if (FUNC_5(VAR_4, VAR_7))
        return FUNC_3(VAR_0, ((void*)0),
                                FUNC_0("Standard properties can't be set "
                                  "explicitly as revision properties"));
      VAR_8 = FUNC_1(VAR_7, VAR_4);
    }
  else
    {
      VAR_8 = FUNC_2(VAR_7);
    }
  FUNC_4(VAR_8, VAR_2,
                FUNC_6(VAR_5, VAR_7));
  *VAR_3 = VAR_8;
  return VAR_1;
}
