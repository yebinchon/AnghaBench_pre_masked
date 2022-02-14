
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_3__ {int creds_cache; } ;
typedef TYPE_1__ svn_auth_baton_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int) ;
 int * VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char const*,char const*,int *) ;
 int FUNC_3 (int ,int ,int *) ;

svn_error_t *
FUNC_4(svn_auth_baton_t *VAR_1,
                            const char *VAR_2,
                            const char *VAR_3,
                            apr_pool_t *VAR_4)
{
  FUNC_0((VAR_2 && VAR_3) || (!VAR_2 && !VAR_3));



  if (VAR_2)
    {
      FUNC_3(VAR_1->creds_cache,
                    FUNC_2(VAR_2, VAR_3, VAR_4),
                    ((void*)0));
    }
  else
    {
      FUNC_1(VAR_1->creds_cache);
    }

  return VAR_0;
}
