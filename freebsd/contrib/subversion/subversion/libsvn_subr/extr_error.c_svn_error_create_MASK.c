
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pool; int message; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_status_t ;


 int FUNC_0 (int ,char const*) ;
 TYPE_1__* FUNC_1 (int ,TYPE_1__*) ;

svn_error_t *
FUNC_2(apr_status_t VAR_0,
                 svn_error_t *VAR_1,
                 const char *VAR_2)
{
  svn_error_t *VAR_3;

  VAR_3 = FUNC_1(VAR_0, VAR_1);

  if (VAR_2)
    VAR_3->message = FUNC_0(VAR_3->pool, VAR_2);

  return VAR_3;
}
