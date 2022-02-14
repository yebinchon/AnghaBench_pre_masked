
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int svn_ra_svn_conn_t ;
struct TYPE_14__ {int * pool; int auth_baton; int callbacks_baton; int callbacks; int config; int tunnel_argv; int tunnel_name; int * conn; TYPE_2__* parent; } ;
typedef TYPE_1__ svn_ra_svn__session_baton_t ;
struct TYPE_15__ {int server_url; } ;
typedef TYPE_2__ svn_ra_svn__parent_t ;
struct TYPE_16__ {TYPE_1__* priv; int pool; } ;
typedef TYPE_3__ svn_ra_session_t ;
struct TYPE_17__ {scalar_t__ apr_err; } ;
typedef TYPE_4__ svn_error_t ;
typedef int apr_uri_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 TYPE_4__* VAR_1 ;
 TYPE_4__* FUNC_1 (TYPE_1__*,int *) ;
 TYPE_4__* FUNC_2 (TYPE_1__**,char const*,int *,int ,int ,int ,int ,int ,int ,int *,int *) ;
 TYPE_4__* FUNC_3 (char const*,int *,int *) ;
 int FUNC_4 (TYPE_4__*) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,char*) ;
 int FUNC_8 (int *,int *,char const*) ;
 int FUNC_9 (int ,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_10(svn_ra_session_t *VAR_2,
                const char *VAR_3,
                apr_pool_t *VAR_4)
{
  svn_ra_svn__session_baton_t *VAR_5 = VAR_2->priv;
  svn_ra_svn__parent_t *VAR_6 = VAR_5->parent;
  svn_ra_svn_conn_t *VAR_7 = VAR_5->conn;
  svn_error_t *VAR_8;
  apr_pool_t *VAR_9;
  svn_ra_svn__session_baton_t *VAR_10;
  apr_uri_t VAR_11;


  FUNC_0(FUNC_8(VAR_7, VAR_4, VAR_3));
  VAR_8 = FUNC_1(VAR_5, VAR_4);
  if (! VAR_8)
    {
      FUNC_0(FUNC_7(VAR_7, VAR_4, ""));
      FUNC_9(VAR_6->server_url, VAR_3);
      return VAR_1;
    }
  else if (VAR_8->apr_err != VAR_0)
    return VAR_8;



  FUNC_4(VAR_8);

  VAR_9 = FUNC_5(VAR_2->pool);
  VAR_8 = FUNC_3(VAR_3, &VAR_11, VAR_9);
  if (! VAR_8)
    VAR_8 = FUNC_2(&VAR_10, VAR_3, &VAR_11, VAR_5->tunnel_name, VAR_5->tunnel_argv,
                       VAR_5->config, VAR_5->callbacks, VAR_5->callbacks_baton,
                       VAR_5->auth_baton, VAR_9, VAR_9);


  if (VAR_8)
    {
      FUNC_6(VAR_9);
      return VAR_8;
    }


  VAR_2->priv = VAR_10;
  FUNC_6(VAR_5->pool);

  return VAR_1;
}
