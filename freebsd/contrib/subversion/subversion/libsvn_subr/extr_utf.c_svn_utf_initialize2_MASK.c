
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_mutex__t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int **,int ,int *) ;
 int * FUNC_4 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int * VAR_5 ;

void
FUNC_5(svn_boolean_t VAR_6,
                    apr_pool_t *VAR_7)
{
  if (!VAR_4)
    {




      apr_pool_t *VAR_8 = FUNC_4(VAR_7);
      svn_mutex__t *VAR_9;
      svn_error_t *VAR_10 = FUNC_3(&VAR_9, VAR_0, VAR_8);
      if (VAR_10)
        {
          FUNC_2(VAR_10);
          return;
        }

      VAR_5 = VAR_9;
      VAR_4 = FUNC_0(VAR_8);

      FUNC_1(VAR_8, ((void*)0), VAR_3,
                                VAR_1);
    }

    if (!VAR_2)
      VAR_2 = VAR_6;
}
