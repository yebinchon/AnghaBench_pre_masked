
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,char const*) ;
 int FUNC_2 (int *) ;

int
FUNC_3(svn_error_t *VAR_4,
                              apr_pool_t *VAR_5,
                              const char *VAR_6)
{







  if (VAR_4->apr_err != VAR_2)
    FUNC_1(VAR_4, VAR_3, VAR_1, VAR_6);
  FUNC_0(VAR_4);
  if (VAR_5)
    FUNC_2(VAR_5);
  return VAR_0;
}
