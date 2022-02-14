
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int auth_attempts; int proxy_auth_attempts; int proxy_username; int proxy_password; int pool; int auth_state; int auth_baton; } ;
typedef TYPE_2__ svn_ra_serf__session_t ;
struct TYPE_13__ {TYPE_1__* conn; TYPE_2__* session; } ;
typedef TYPE_3__ svn_ra_serf__handler_t ;
struct TYPE_14__ {int apr_err; } ;
typedef TYPE_4__ svn_error_t ;
struct TYPE_15__ {int password; int username; } ;
typedef TYPE_5__ svn_auth_cred_simple_t ;
typedef int serf_request_t ;
typedef int apr_status_t ;
typedef int apr_pool_t ;
struct TYPE_11__ {int last_status_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__*,TYPE_4__*) ;
 TYPE_4__* FUNC_3 (void**,int *,int ,char const*,int ,int ) ;
 TYPE_4__* FUNC_4 (void**,int ,int ) ;
 TYPE_4__* FUNC_5 (int ,int *,int ) ;

apr_status_t
FUNC_6(char **VAR_3, char **VAR_4,
                                  serf_request_t *VAR_5, void *VAR_6,
                                  int VAR_7, const char *VAR_8,
                                  const char *VAR_9,
                                  apr_pool_t *VAR_10)
{
  svn_ra_serf__handler_t *VAR_11 = VAR_6;
  svn_ra_serf__session_t *VAR_12 = VAR_11->session;
  void *VAR_13;
  svn_auth_cred_simple_t *VAR_14;
  svn_error_t *VAR_15;

  if (VAR_7 == 401)
    {




      if (!VAR_12->auth_state)
        {
          VAR_15 = FUNC_3(&VAR_13,
                                           &VAR_12->auth_state,
                                           VAR_1,
                                           VAR_9,
                                           VAR_12->auth_baton,
                                           VAR_12->pool);
        }
      else
        {
          VAR_15 = FUNC_4(&VAR_13,
                                          VAR_12->auth_state,
                                          VAR_12->pool);
        }

      if (VAR_15)
        {
          (void) FUNC_2(VAR_12, VAR_15);
          return VAR_15->apr_err;
        }

      VAR_12->auth_attempts++;

      if (!VAR_13 || VAR_12->auth_attempts > 4)
        {

          (void) FUNC_2(VAR_12,
                            FUNC_5(
                              VAR_2, ((void*)0),
                              FUNC_0("No more credentials or we tried too many "
                                "times.\nAuthentication failed")));
          return VAR_2;
        }

      VAR_14 = VAR_13;
      *VAR_3 = FUNC_1(VAR_10, VAR_14->username);
      *VAR_4 = FUNC_1(VAR_10, VAR_14->password);
    }
  else
    {
      *VAR_3 = FUNC_1(VAR_10, VAR_12->proxy_username);
      *VAR_4 = FUNC_1(VAR_10, VAR_12->proxy_password);

      VAR_12->proxy_auth_attempts++;

      if (!VAR_12->proxy_username || VAR_12->proxy_auth_attempts > 4)
        {

          (void) FUNC_2(VAR_12,
                            FUNC_5(
                              VAR_2, ((void*)0),
                              FUNC_0("Proxy authentication failed")));
          return VAR_2;
        }
    }

  VAR_11->conn->last_status_code = VAR_7;

  return VAR_0;
}
