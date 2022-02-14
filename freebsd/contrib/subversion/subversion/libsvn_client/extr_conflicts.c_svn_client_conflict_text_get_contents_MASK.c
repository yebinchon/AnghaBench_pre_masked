
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_client_conflict_t ;
typedef int apr_pool_t ;
struct TYPE_2__ {char* base_abspath; char* my_abspath; char* their_abspath; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int *,int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;

svn_error_t *
FUNC_4(const char **VAR_2,
                                      const char **VAR_3,
                                      const char **VAR_4,
                                      const char **VAR_5,
                                      svn_client_conflict_t *VAR_6,
                                      apr_pool_t *VAR_7,
                                      apr_pool_t *VAR_8)
{
  FUNC_0(FUNC_1(VAR_6, VAR_8));

  if (VAR_2)
    {
      if (FUNC_3(VAR_6) ==
          VAR_1)
        *VAR_2 = ((void*)0);
      else
        *VAR_2 = FUNC_2(VAR_6)->base_abspath;
    }

  if (VAR_3)
    *VAR_3 = FUNC_2(VAR_6)->my_abspath;

  if (VAR_4)
    *VAR_4 = FUNC_2(VAR_6)->base_abspath;

  if (VAR_5)
    *VAR_5 = FUNC_2(VAR_6)->their_abspath;

  return VAR_0;
}
