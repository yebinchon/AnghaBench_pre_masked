
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {char const* repos_root; } ;
typedef TYPE_2__ svn_ra_svn_conn_t ;
struct TYPE_10__ {TYPE_2__* conn; TYPE_4__* parent; } ;
typedef TYPE_3__ svn_ra_svn__session_baton_t ;
struct TYPE_11__ {int path; int client_url; TYPE_1__* server_url; } ;
typedef TYPE_4__ svn_ra_svn__parent_t ;
struct TYPE_12__ {TYPE_3__* priv; } ;
typedef TYPE_5__ svn_ra_session_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_8__ {char const* data; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_5__*,char const*,int *) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (char const*,char const*,int *) ;

__attribute__((used)) static svn_error_t *FUNC_5(svn_ra_session_t *VAR_1,
                                    const char *VAR_2,
                                    apr_pool_t *VAR_3)
{
  svn_ra_svn__session_baton_t *VAR_4 = VAR_1->priv;
  svn_ra_svn__parent_t *VAR_5 = VAR_4->parent;
  svn_ra_svn_conn_t *VAR_6 = VAR_4->conn;
  const char *VAR_7;



  VAR_7 = FUNC_4(VAR_5->server_url->data, VAR_2, VAR_3);
  if (!VAR_7)
    {





      VAR_7 = VAR_6->repos_root
           ? FUNC_4(VAR_6->repos_root, VAR_2, VAR_3)
           : ((void*)0);

      if (VAR_7)
        FUNC_0(FUNC_1(VAR_1, VAR_6->repos_root, VAR_3));
      else
        FUNC_0(FUNC_1(VAR_1, VAR_2, VAR_3));
    }



  FUNC_2(VAR_5->client_url, VAR_2);
  if (VAR_7)
    FUNC_2(VAR_5->path, VAR_7);
  else
    FUNC_3(VAR_5->path);

  return VAR_0;
}
