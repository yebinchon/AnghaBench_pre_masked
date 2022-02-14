
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pool; int auth_baton; } ;
typedef TYPE_1__ svn_ra_serf__session_t ;
struct TYPE_6__ {int ssl_client_auth_state; TYPE_1__* session; } ;
typedef TYPE_2__ svn_ra_serf__connection_t ;
typedef int svn_error_t ;
struct TYPE_7__ {char* cert_file; } ;
typedef TYPE_3__ svn_auth_cred_ssl_client_cert_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 char* FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (void**,int *,int ,char const*,int ,int *) ;
 int FUNC_3 (void**,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(void *VAR_2,
                   const char **VAR_3,
                   apr_pool_t *VAR_4)
{
    svn_ra_serf__connection_t *VAR_5 = VAR_2;
    svn_ra_serf__session_t *VAR_6 = VAR_5->session;
    const char *VAR_7;
    void *VAR_8;

    *VAR_3 = ((void*)0);

    VAR_7 = FUNC_1(VAR_6, VAR_6->pool);

    if (!VAR_5->ssl_client_auth_state)
      {
        FUNC_0(FUNC_2(&VAR_8,
                                           &VAR_5->ssl_client_auth_state,
                                           VAR_0,
                                           VAR_7,
                                           VAR_6->auth_baton,
                                           VAR_4));
      }
    else
      {
        FUNC_0(FUNC_3(&VAR_8,
                                          VAR_5->ssl_client_auth_state,
                                          VAR_6->pool));
      }

    if (VAR_8)
      {
        svn_auth_cred_ssl_client_cert_t *VAR_9;
        VAR_9 = VAR_8;
        *VAR_3 = VAR_9->cert_file;
      }

    return VAR_1;
}
