
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (char const*,char const*,int *) ;
 TYPE_1__* FUNC_4 (char const*,int ,int *) ;

svn_error_t *
FUNC_5(const char *VAR_2,
                             const char *VAR_3,
                             apr_pool_t *VAR_4)
{
  svn_error_t *VAR_5 = FUNC_4(VAR_2, VAR_0, VAR_4);
  if (VAR_5 && FUNC_0(VAR_5->apr_err))
    {
      FUNC_2(VAR_5);
      return VAR_1;
    }
  FUNC_1(VAR_5);



  return FUNC_3(VAR_3, VAR_2, VAR_4);
}
