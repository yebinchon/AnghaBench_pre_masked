
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
typedef int serf_ssl_certificate_t ;
typedef int apr_status_t ;
typedef int apr_pool_t ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (void*,int,int const*,int *) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static apr_status_t
FUNC_5(void *VAR_0, int VAR_1,
                const serf_ssl_certificate_t *VAR_2)
{
  svn_ra_serf__connection_t *VAR_3 = VAR_0;
  svn_ra_serf__session_t *VAR_4 = VAR_3->session;
  apr_pool_t *VAR_5;
  svn_error_t *VAR_6;

  VAR_5 = FUNC_3(VAR_4->pool);
  VAR_6 = FUNC_2(FUNC_1(VAR_0, VAR_1, VAR_2, VAR_5));
  FUNC_4(VAR_5);

  return FUNC_0(VAR_4, VAR_6);
}
