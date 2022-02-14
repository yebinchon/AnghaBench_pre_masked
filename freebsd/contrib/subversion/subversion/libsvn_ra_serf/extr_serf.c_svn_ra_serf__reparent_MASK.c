
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* priv; } ;
typedef TYPE_2__ svn_ra_session_t ;
struct TYPE_8__ {void* path; } ;
struct TYPE_10__ {int pool; void* session_url_str; TYPE_1__ session_url; int repos_root_str; } ;
typedef TYPE_3__ svn_ra_serf__session_t ;
typedef int svn_error_t ;
struct TYPE_11__ {char const* path; } ;
typedef TYPE_4__ apr_uri_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 void* FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (void*,char const*) ;
 int * FUNC_4 (int ,int *,int ,char const*,int ) ;
 int FUNC_5 (char const**,TYPE_3__*,int *) ;
 int FUNC_6 (TYPE_4__*,char const*,int *) ;
 int FUNC_7 (int ,char const*) ;

svn_error_t *
FUNC_8(svn_ra_session_t *VAR_2,
                      const char *VAR_3,
                      apr_pool_t *VAR_4)
{
  svn_ra_serf__session_t *VAR_5 = VAR_2->priv;
  apr_uri_t VAR_6;


  if (FUNC_3(VAR_5->session_url_str, VAR_3) == 0)
    {
      return VAR_1;
    }

  if (!VAR_5->repos_root_str)
    {
      const char *VAR_7;
      FUNC_0(FUNC_5(&VAR_7, VAR_5, VAR_4));
    }

  if (!FUNC_7(VAR_5->repos_root_str, VAR_3))
    {
      return FUNC_4(
          VAR_0, ((void*)0),
          FUNC_1("URL '%s' is not a child of the session's repository root "
            "URL '%s'"), VAR_3, VAR_5->repos_root_str);
    }

  FUNC_0(FUNC_6(&VAR_6, VAR_3, VAR_4));



  VAR_5->session_url.path = FUNC_2(VAR_5->pool, VAR_6.path);
  VAR_5->session_url_str = FUNC_2(VAR_5->pool, VAR_3);

  return VAR_1;
}
