
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int svn_repos__config_pool_t ;
struct TYPE_10__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_config_t ;
struct TYPE_11__ {int repos; int * pwdb; int base; } ;
typedef TYPE_2__ repository_t ;
typedef int apr_pool_t ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char const**,int ,int ,int *) ;
 char* FUNC_2 (char const*,int *) ;
 char* FUNC_3 (int ,char const*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int ,TYPE_1__*,int *) ;
 TYPE_1__* FUNC_6 (int **,int *,char const*,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_7(repository_t *VAR_6,
                 svn_config_t *VAR_7,
                 svn_repos__config_pool_t *VAR_8,
                 apr_pool_t *VAR_9)
{
  const char *VAR_10;
  svn_error_t *VAR_11;

  FUNC_1(VAR_7, &VAR_10,
                 VAR_1,
                 VAR_0, ((void*)0));

  VAR_6->pwdb = ((void*)0);
  if (VAR_10)
    {
      VAR_10 = FUNC_2(VAR_10, VAR_9);
      VAR_10 = FUNC_3(VAR_6->base, VAR_10, VAR_9);

      VAR_11 = FUNC_6(&VAR_6->pwdb, VAR_8,
                                       VAR_10, VAR_5,
                                       VAR_6->repos, VAR_9);
      if (VAR_11)
        {
          if (VAR_11->apr_err != VAR_3
              && ! FUNC_0(VAR_11->apr_err))
            {
              return FUNC_5(VAR_2, VAR_11, ((void*)0));
            }
          else

            FUNC_4(VAR_11);
        }
    }

  return VAR_4;
}
