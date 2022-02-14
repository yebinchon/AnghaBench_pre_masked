
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int svn_ra_session_t ;
struct TYPE_11__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
struct TYPE_12__ {int wc_ctx; } ;
typedef TYPE_2__ svn_client_ctx_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int **,char const*,int *,TYPE_2__*,int *,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int *,char const**,int *) ;
 int FUNC_6 (int *,char const**,int *) ;
 TYPE_1__* FUNC_7 (int *,int *,char const**,char const**,int ,char const*,int *,int *) ;

svn_error_t *
FUNC_8(const char **VAR_3,
                          const char **VAR_4,
                          const char *VAR_5,
                          svn_client_ctx_t *VAR_6,
                          apr_pool_t *VAR_7,
                          apr_pool_t *VAR_8)
{
  svn_ra_session_t *VAR_9;


  if (!FUNC_4(VAR_5))
    {
      svn_error_t *VAR_10;
      VAR_10 = FUNC_7(((void*)0), ((void*)0), VAR_3, VAR_4,
                                        VAR_6->wc_ctx, VAR_5,
                                        VAR_7, VAR_8);

      if (VAR_10)
        {
          if (VAR_10->apr_err != VAR_1
              && VAR_10->apr_err != VAR_0)
            return FUNC_3(VAR_10);

          FUNC_2(VAR_10);
          if (VAR_3)
            *VAR_3 = ((void*)0);
          if (VAR_4)
            *VAR_4 = ((void*)0);
        }
      return VAR_2;
    }


  FUNC_0(FUNC_1(&VAR_9, VAR_5, ((void*)0),
                                      VAR_6, VAR_8, VAR_8));

  if (VAR_3)
    FUNC_0(FUNC_5(VAR_9, VAR_3, VAR_7));
  if (VAR_4)
    FUNC_0(FUNC_6(VAR_9, VAR_4, VAR_7));

  return VAR_2;
}
