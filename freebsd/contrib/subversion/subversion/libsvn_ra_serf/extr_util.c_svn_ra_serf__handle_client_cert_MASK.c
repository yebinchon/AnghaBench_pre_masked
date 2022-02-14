
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pool; } ;
typedef TYPE_1__ svn_ra_serf__session_t ;
struct TYPE_5__ {TYPE_1__* session; } ;
typedef TYPE_2__ svn_ra_serf__connection_t ;
typedef int svn_error_t ;
typedef int apr_status_t ;


 int FUNC_0 (void*,char const**,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int * FUNC_2 (int ) ;

apr_status_t FUNC_3(void *VAR_0,
                                             const char **VAR_1)
{
  svn_ra_serf__connection_t *VAR_2 = VAR_0;
  svn_ra_serf__session_t *VAR_3 = VAR_2->session;
  svn_error_t *VAR_4;

  VAR_4 = FUNC_2(FUNC_0(VAR_0, VAR_1, VAR_3->pool));

  return FUNC_1(VAR_3, VAR_4);
}
