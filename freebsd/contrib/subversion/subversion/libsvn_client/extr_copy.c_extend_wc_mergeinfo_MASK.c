
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int **,int ,char const*,int *,int *) ;
 int FUNC_2 (char const*,int *,int ,TYPE_1__*,int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char *VAR_1,
                    apr_hash_t *VAR_2,
                    svn_client_ctx_t *VAR_3,
                    apr_pool_t *VAR_4)
{
  apr_hash_t *VAR_5;



  FUNC_0(FUNC_1(&VAR_5, VAR_3->wc_ctx,
                                      VAR_1, VAR_4, VAR_4));


  if (VAR_5 && VAR_2)
    FUNC_0(FUNC_4(VAR_5, VAR_2, VAR_4, VAR_4));
  else if (! VAR_5)
    VAR_5 = VAR_2;

  return FUNC_3(
    FUNC_2(VAR_1, VAR_5,
                                    VAR_0, VAR_3, VAR_4));
}
