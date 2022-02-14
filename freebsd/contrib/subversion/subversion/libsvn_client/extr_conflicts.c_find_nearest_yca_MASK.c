
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_ra_session_t ;
struct TYPE_8__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_client__pathrev_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* FUNC_0 (int **,char const*,int ,char const*,int ,char const*,char const*,int *,int *,int *,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_client__pathrev_t **VAR_2,
                 const char *VAR_3,
                 svn_revnum_t VAR_4,
                 const char *VAR_5,
                 svn_revnum_t VAR_6,
                 const char *VAR_7,
                 const char *VAR_8,
                 svn_ra_session_t *VAR_9,
                 svn_client_ctx_t *VAR_10,
                 apr_pool_t *VAR_11,
                 apr_pool_t *VAR_12)
{
  svn_client__pathrev_t *VAR_13;
  svn_error_t *VAR_14;
  apr_pool_t *VAR_15;
  const char *VAR_16, *VAR_17;
  apr_size_t VAR_18, VAR_19;

  *VAR_2 = ((void*)0);

  VAR_15 = FUNC_5(VAR_12);

  VAR_16 = VAR_3;
  VAR_18 = FUNC_3(VAR_3);
  while (VAR_18--)
    {
      FUNC_4(VAR_15);

      VAR_17 = VAR_5;
      VAR_19 = FUNC_3(VAR_5);
      while (VAR_19--)
        {
          VAR_14 = FUNC_0(&VAR_13, VAR_16, VAR_4, VAR_17, VAR_6,
                         VAR_7, VAR_8, VAR_9, VAR_10,
                         VAR_11, VAR_15);
          if (VAR_14)
            {
              if (VAR_14->apr_err == VAR_0)
                {
                  FUNC_1(VAR_14);
                  VAR_13 = ((void*)0);
                }
              else
                return FUNC_2(VAR_14);
            }

          if (VAR_13)
            {
              *VAR_2 = VAR_13;
              FUNC_6(VAR_15);
              return VAR_1;
            }

          VAR_17 = FUNC_7(VAR_17, VAR_12);
        }

      VAR_16 = FUNC_7(VAR_16, VAR_12);
    }

  FUNC_6(VAR_15);

  return VAR_1;
}
