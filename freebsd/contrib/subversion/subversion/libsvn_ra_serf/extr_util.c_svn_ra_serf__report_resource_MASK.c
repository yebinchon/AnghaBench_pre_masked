
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int me_resource; } ;
typedef TYPE_1__ svn_ra_serf__session_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 char* FUNC_2 (int *,int ) ;
 int FUNC_3 (char const**,TYPE_1__*,int *) ;

svn_error_t *
FUNC_4(const char **VAR_1,
                             svn_ra_serf__session_t *VAR_2,
                             apr_pool_t *VAR_3)
{


  if (FUNC_1(VAR_2))
    *VAR_1 = FUNC_2(VAR_3, VAR_2->me_resource);


  else
    FUNC_0(FUNC_3(VAR_1, VAR_2, VAR_3));

  return VAR_0;
}
