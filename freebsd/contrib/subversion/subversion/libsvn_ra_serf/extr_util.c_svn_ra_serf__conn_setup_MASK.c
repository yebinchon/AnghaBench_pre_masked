
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_ra_serf__session_t ;
struct TYPE_2__ {int * session; } ;
typedef TYPE_1__ svn_ra_serf__connection_t ;
typedef int svn_error_t ;
typedef int serf_bucket_t ;
typedef int apr_status_t ;
typedef int apr_socket_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int *,int **,int **,void*,int *) ;
 int FUNC_1 (int *,int *) ;
 int * FUNC_2 (int ) ;

apr_status_t
FUNC_3(apr_socket_t *VAR_0,
                        serf_bucket_t **VAR_1,
                        serf_bucket_t **VAR_2,
                        void *VAR_3,
                        apr_pool_t *VAR_4)
{
  svn_ra_serf__connection_t *VAR_5 = VAR_3;
  svn_ra_serf__session_t *VAR_6 = VAR_5->session;
  svn_error_t *VAR_7;

  VAR_7 = FUNC_2(FUNC_0(VAR_0,
                                   VAR_1,
                                   VAR_2,
                                   VAR_3,
                                   VAR_4));
  return FUNC_1(VAR_6, VAR_7);
}
