
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_ra_session_t ;
struct TYPE_10__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
struct TYPE_11__ {int wc_ctx; } ;
typedef TYPE_2__ svn_client_ctx_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,char const**,int *) ;
 int FUNC_5 (int *,char const**,int *) ;
 TYPE_1__* FUNC_6 (scalar_t__*,scalar_t__*,int *,int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_boolean_t *VAR_4,
                     const char *VAR_5,
                     svn_ra_session_t *VAR_6,
                     svn_client_ctx_t *VAR_7,
                     apr_pool_t *VAR_8)
{
  svn_boolean_t VAR_9;
  svn_boolean_t VAR_10;
  svn_error_t *VAR_11;

  VAR_11 = FUNC_6(&VAR_9, &VAR_10, ((void*)0),
                          VAR_7->wc_ctx, VAR_5,
                           VAR_8);


  if (VAR_11)
    {
      if (VAR_11->apr_err == VAR_1)
        {
          FUNC_2(VAR_11);
          VAR_9 = VAR_0;
          VAR_10 = VAR_0;
        }
      else
        {
          return FUNC_3(VAR_11);
        }
    }


  *VAR_4 = VAR_0;

  if (VAR_9 || VAR_10)
    {
      const char *VAR_12;
      const char *VAR_13;





      FUNC_0(FUNC_5(VAR_6, &VAR_12, VAR_8));
      FUNC_0(FUNC_4(VAR_6, &VAR_13,
                                     VAR_8));

      if (FUNC_1(VAR_13, VAR_12) != 0)
        *VAR_4 = VAR_3;
    }

  return VAR_2;
}
