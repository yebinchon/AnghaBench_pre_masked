
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const**,char const*,int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;
 char* FUNC_4 (char const*,int *) ;
 int FUNC_5 (char const**,int ,char const*,int *,int *) ;

svn_error_t *
FUNC_6(const char **VAR_1,
                          const char *VAR_2,
                          svn_client_ctx_t *VAR_3,
                          apr_pool_t *VAR_4,
                          apr_pool_t *VAR_5)
{
  if (!FUNC_3(VAR_2))
    {
      FUNC_0(FUNC_1(&VAR_2, VAR_2,
                                      VAR_5));

      return FUNC_2(
                 FUNC_5(VAR_1, VAR_3->wc_ctx, VAR_2,
                                      VAR_4, VAR_5));
    }
  else
    *VAR_1 = FUNC_4(VAR_2, VAR_4);

  return VAR_0;
}
