
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int auth_baton; } ;
typedef TYPE_1__ svn_ra_serf__session_t ;
struct TYPE_5__ {int ssl_client_pw_auth_state; TYPE_1__* session; } ;
typedef TYPE_2__ svn_ra_serf__connection_t ;
typedef int svn_error_t ;
struct TYPE_6__ {char* password; } ;
typedef TYPE_3__ svn_auth_cred_ssl_client_cert_pw_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void**,int *,int ,char const*,int ,int *) ;
 int FUNC_2 (void**,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_3(void *VAR_2,
                      const char *VAR_3,
                      const char **VAR_4,
                      apr_pool_t *VAR_5)
{
    svn_ra_serf__connection_t *VAR_6 = VAR_2;
    svn_ra_serf__session_t *VAR_7 = VAR_6->session;
    void *VAR_8;

    *VAR_4 = ((void*)0);

    if (!VAR_6->ssl_client_pw_auth_state)
      {
        FUNC_0(FUNC_1(&VAR_8,
                                           &VAR_6->ssl_client_pw_auth_state,
                                           VAR_1,
                                           VAR_3,
                                           VAR_7->auth_baton,
                                           VAR_5));
      }
    else
      {
        FUNC_0(FUNC_2(&VAR_8,
                                          VAR_6->ssl_client_pw_auth_state,
                                          VAR_5));
      }

    if (VAR_8)
      {
        svn_auth_cred_ssl_client_cert_pw_t *VAR_9;
        VAR_9 = VAR_8;
        *VAR_4 = VAR_9->password;
      }

    return VAR_0;
}
