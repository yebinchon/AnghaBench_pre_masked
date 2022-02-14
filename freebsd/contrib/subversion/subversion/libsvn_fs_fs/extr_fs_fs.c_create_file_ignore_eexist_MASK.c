
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (char const*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char *VAR_1,
                          const char *VAR_2,
                          apr_pool_t *VAR_3)
{
  svn_error_t *VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
  if (VAR_4 && FUNC_0(VAR_4->apr_err))
    {
      FUNC_1(VAR_4);
      VAR_4 = VAR_0;
    }
  return FUNC_2(VAR_4);
}
