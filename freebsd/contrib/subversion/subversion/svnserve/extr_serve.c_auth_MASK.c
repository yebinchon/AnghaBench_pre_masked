
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_ra_svn_conn_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_7__ {int pool; TYPE_2__* client_info; TYPE_1__* repository; } ;
typedef TYPE_3__ server_baton_t ;
typedef enum access_type { ____Placeholder_access_type } access_type ;
typedef int apr_pool_t ;
struct TYPE_6__ {char* tunnel_user; char* user; } ;
struct TYPE_5__ {int auth_access; int anon_access; scalar_t__ pwdb; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int ,char const*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int * FUNC_3 (int *,int *,char*,char*,...) ;
 int * FUNC_4 (int *,int *,scalar_t__,char const**,int *) ;

__attribute__((used)) static svn_error_t *FUNC_5(svn_boolean_t *VAR_3,
                         svn_ra_svn_conn_t *VAR_4,
                         const char *VAR_5, const char *VAR_6,
                         server_baton_t *VAR_7, enum access_type VAR_8,
                         svn_boolean_t VAR_9,
                         apr_pool_t *VAR_10)
{
  const char *VAR_11;
  *VAR_3 = VAR_0;

  if (VAR_7->repository->auth_access >= VAR_8
      && VAR_7->client_info->tunnel_user && FUNC_2(VAR_5, "EXTERNAL") == 0)
    {
      if (*VAR_6 && FUNC_2(VAR_6, VAR_7->client_info->tunnel_user) != 0)
        return FUNC_3(VAR_4, VAR_10, "w(c)", "failure",
                                       "Requested username does not match");
      VAR_7->client_info->user = VAR_7->client_info->tunnel_user;
      FUNC_0(FUNC_3(VAR_4, VAR_10, "w()", "success"));
      *VAR_3 = VAR_2;
      return VAR_1;
    }

  if (VAR_7->repository->anon_access >= VAR_8
      && FUNC_2(VAR_5, "ANONYMOUS") == 0 && ! VAR_9)
    {
      FUNC_0(FUNC_3(VAR_4, VAR_10, "w()", "success"));
      *VAR_3 = VAR_2;
      return VAR_1;
    }

  if (VAR_7->repository->auth_access >= VAR_8
      && VAR_7->repository->pwdb && FUNC_2(VAR_5, "CRAM-MD5") == 0)
    {
      FUNC_0(FUNC_4(VAR_4, VAR_10, VAR_7->repository->pwdb,
                                     &VAR_11, VAR_3));
      VAR_7->client_info->user = FUNC_1(VAR_7->pool, VAR_11);
      return VAR_1;
    }

  return FUNC_3(VAR_4, VAR_10, "w(c)", "failure",
                                "Must authenticate with listed mechanism");
}
