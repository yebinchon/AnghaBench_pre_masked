
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_cancel_func_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (char const*,int ,int ,void*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char *VAR_2,
              svn_cancel_func_t VAR_3,
              void *VAR_4,
              apr_pool_t *VAR_5)
{
  svn_error_t *VAR_6 = FUNC_3(VAR_2, VAR_1,
                                        VAR_3, VAR_4, VAR_5);

  if (VAR_6 && FUNC_0(VAR_6->apr_err))
    {
      FUNC_1(VAR_6);
      VAR_6 = VAR_0;
    }

  return FUNC_2(VAR_6);
}
