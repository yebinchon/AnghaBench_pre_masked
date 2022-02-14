
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_time_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *,char const*,int *) ;
 char* FUNC_4 (int ,int *) ;

svn_error_t *
FUNC_5(const char **VAR_2,
                                      const char *VAR_3,
                                      apr_pool_t *VAR_4)
{
  svn_error_t *VAR_5;
  apr_time_t VAR_6;

  VAR_5 = FUNC_3(&VAR_6, VAR_3, VAR_4);
  if (VAR_5 && VAR_5->apr_err == VAR_0)
    {
      FUNC_1(VAR_5);

      *VAR_2 = FUNC_0("(invalid date)");
      return VAR_1;
    }
  else if (VAR_5)
    return FUNC_2(VAR_5);

  *VAR_2 = FUNC_4(VAR_6, VAR_4);

  return VAR_1;
}
