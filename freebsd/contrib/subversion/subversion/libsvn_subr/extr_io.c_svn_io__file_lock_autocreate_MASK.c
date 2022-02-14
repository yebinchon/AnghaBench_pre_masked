
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (char const*,int *) ;
 TYPE_1__* FUNC_5 (char const*,int ,int ,int *) ;

svn_error_t *
FUNC_6(const char *VAR_2,
                             apr_pool_t *VAR_3)
{
  svn_error_t *VAR_4
    = FUNC_5(VAR_2, VAR_1, VAR_0, VAR_3);
  if (VAR_4 && FUNC_1(VAR_4->apr_err))
    {


      FUNC_2(VAR_4);



      VAR_4 = FUNC_4(VAR_2, VAR_3);
      if (VAR_4 && FUNC_0(VAR_4->apr_err))
        {
          FUNC_2(VAR_4);
          VAR_4 = ((void*)0);
        }


      if (!VAR_4)
        VAR_4 = FUNC_5(VAR_2, VAR_1, VAR_0, VAR_3);
    }

  return FUNC_3(VAR_4);
}
